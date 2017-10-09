/*
 * Copyright 2017 André Hentschel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/* NOTE: The guest side uses mingw's headers. The host side uses Wine's headers. */

#include <windows.h>
#include <stdio.h>

#include "windows-user-services.h"
#include "dll_list.h"
#include "qemu_gdi32.h"

#ifdef QEMU_DLL_GUEST

BOOL WINAPI DllMainCRTStartup(HMODULE mod, DWORD reason, void *reserved)
{
    return TRUE;
}

#else

#include <wine/debug.h>
WINE_DEFAULT_DEBUG_CHANNEL(qemu_gdi32);

const struct qemu_ops *qemu_ops;

static const syscall_handler dll_functions[] =
{
    qemu_AbortDoc,
    qemu_AbortPath,
    qemu_AddFontMemResourceEx,
    qemu_AddFontResourceA,
    qemu_AddFontResourceExA,
    qemu_AddFontResourceExW,
    qemu_AddFontResourceW,
    qemu_AngleArc,
    qemu_AnimatePalette,
    qemu_Arc,
    qemu_ArcTo,
    qemu_BeginPath,
    qemu_BitBlt,
    qemu_CancelDC,
    qemu_ChoosePixelFormat,
    qemu_Chord,
    qemu_CloseEnhMetaFile,
    qemu_CloseFigure,
    qemu_CloseMetaFile,
    qemu_CombineRgn,
    qemu_CombineTransform,
    qemu_CopyEnhMetaFileA,
    qemu_CopyEnhMetaFileW,
    qemu_CopyMetaFileA,
    qemu_CopyMetaFileW,
    qemu_CreateBitmap,
    qemu_CreateBitmapIndirect,
    qemu_CreateBrushIndirect,
    qemu_CreateColorSpaceA,
    qemu_CreateColorSpaceW,
    qemu_CreateCompatibleBitmap,
    qemu_CreateCompatibleDC,
    qemu_CreateDCA,
    qemu_CreateDCW,
    qemu_CreateDIBitmap,
    qemu_CreateDIBPatternBrush,
    qemu_CreateDIBPatternBrushPt,
    qemu_CreateDIBSection,
    qemu_CreateDiscardableBitmap,
    qemu_CreateEllipticRgn,
    qemu_CreateEllipticRgnIndirect,
    qemu_CreateEnhMetaFileA,
    qemu_CreateEnhMetaFileW,
    qemu_CreateFontA,
    qemu_CreateFontIndirectA,
    qemu_CreateFontIndirectExA,
    qemu_CreateFontIndirectExW,
    qemu_CreateFontIndirectW,
    qemu_CreateFontW,
    qemu_CreateHalftonePalette,
    qemu_CreateHatchBrush,
    qemu_CreateICA,
    qemu_CreateICW,
    qemu_CreateMetaFileA,
    qemu_CreateMetaFileW,
    qemu_CreatePalette,
    qemu_CreatePatternBrush,
    qemu_CreatePen,
    qemu_CreatePenIndirect,
    qemu_CreatePolygonRgn,
    qemu_CreatePolyPolygonRgn,
    qemu_CreateRectRgn,
    qemu_CreateRectRgnIndirect,
    qemu_CreateRoundRectRgn,
    qemu_CreateScalableFontResourceA,
    qemu_CreateScalableFontResourceW,
    qemu_CreateSolidBrush,
    qemu_D3DKMTCreateDCFromMemory,
    qemu_D3DKMTDestroyDCFromMemory,
    qemu_D3DKMTEscape,
    qemu_D3DKMTOpenAdapterFromHdc,
    qemu_DeleteColorSpace,
    qemu_DeleteDC,
    qemu_DeleteEnhMetaFile,
    qemu_DeleteMetaFile,
    qemu_DeleteObject,
    qemu_DescribePixelFormat,
    qemu_DPtoLP,
    qemu_DrawEscape,
    qemu_Ellipse,
    qemu_EnableEUDC,
    qemu_EndDoc,
    qemu_EndPage,
    qemu_EndPath,
    qemu_EnumEnhMetaFile,
    qemu_EnumFontFamiliesA,
    qemu_EnumFontFamiliesExA,
    qemu_EnumFontFamiliesExW,
    qemu_EnumFontFamiliesW,
    qemu_EnumFontsA,
    qemu_EnumFontsW,
    qemu_EnumICMProfilesA,
    qemu_EnumICMProfilesW,
    qemu_EnumMetaFile,
    qemu_EnumObjects,
    qemu_EqualRgn,
    qemu_Escape,
    qemu_ExcludeClipRect,
    qemu_ExtCreatePen,
    qemu_ExtCreateRegion,
    qemu_ExtEscape,
    qemu_ExtFloodFill,
    qemu_ExtSelectClipRgn,
    qemu_ExtTextOutA,
    qemu_ExtTextOutW,
    qemu_FillPath,
    qemu_FillRgn,
    qemu_FixBrushOrgEx,
    qemu_FlattenPath,
    qemu_FloodFill,
    qemu_FontIsLinked,
    qemu_FrameRgn,
    qemu_GdiAlphaBlend,
    qemu_GdiComment,
    qemu_GdiConvertToDevmodeW,
    qemu_GdiDescribePixelFormat,
    qemu_GdiDrawStream,
    qemu_GdiFlush,
    qemu_GdiGetBatchLimit,
    qemu_GdiGetCharDimensions,
    qemu_GdiGetCodePage,
    qemu_GdiGetSpoolMessage,
    qemu_GdiGradientFill,
    qemu_GdiInitializeLanguagePack,
    qemu_GdiInitSpool,
    qemu_GdiIsMetaFileDC,
    qemu_GdiIsMetaPrintDC,
    qemu_GdiIsPlayMetafileDC,
    qemu_GdiRealizationInfo,
    qemu_GdiSetBatchLimit,
    qemu_GdiSetPixelFormat,
    qemu_GdiSwapBuffers,
    qemu_GdiTransparentBlt,
    qemu_GetArcDirection,
    qemu_GetAspectRatioFilterEx,
    qemu_GetBitmapBits,
    qemu_GetBitmapDimensionEx,
    qemu_GetBkColor,
    qemu_GetBkMode,
    qemu_GetBoundsRect,
    qemu_GetBrushOrgEx,
    qemu_GetCharABCWidthsA,
    qemu_GetCharABCWidthsFloatA,
    qemu_GetCharABCWidthsFloatW,
    qemu_GetCharABCWidthsI,
    qemu_GetCharABCWidthsW,
    qemu_GetCharacterPlacementA,
    qemu_GetCharacterPlacementW,
    qemu_GetCharWidth32A,
    qemu_GetCharWidth32W,
    qemu_GetCharWidthFloatA,
    qemu_GetCharWidthFloatW,
    qemu_GetCharWidthI,
    qemu_GetClipBox,
    qemu_GetClipRgn,
    qemu_GetColorAdjustment,
    qemu_GetColorSpace,
    qemu_GetCurrentObject,
    qemu_GetCurrentPositionEx,
    qemu_GetDCBrushColor,
    qemu_GetDCOrgEx,
    qemu_GetDCPenColor,
    qemu_GetDeviceCaps,
    qemu_GetDeviceGammaRamp,
    qemu_GetDIBColorTable,
    qemu_GetDIBits,
    qemu_GetEnhMetaFileA,
    qemu_GetEnhMetaFileBits,
    qemu_GetEnhMetaFileDescriptionA,
    qemu_GetEnhMetaFileDescriptionW,
    qemu_GetEnhMetaFileHeader,
    qemu_GetEnhMetaFilePaletteEntries,
    qemu_GetEnhMetaFileW,
    qemu_GetFontData,
    qemu_GetFontFileInfo,
    qemu_GetFontLanguageInfo,
    qemu_GetFontRealizationInfo,
    qemu_GetFontResourceInfoW,
    qemu_GetFontUnicodeRanges,
    qemu_GetGlyphIndicesA,
    qemu_GetGlyphIndicesW,
    qemu_GetGlyphOutlineA,
    qemu_GetGlyphOutlineW,
    qemu_GetGraphicsMode,
    qemu_GetICMProfileA,
    qemu_GetICMProfileW,
    qemu_GetKerningPairsA,
    qemu_GetKerningPairsW,
    qemu_GetLayout,
    qemu_GetLogColorSpaceA,
    qemu_GetLogColorSpaceW,
    qemu_GetMapMode,
    qemu_GetMetaFileA,
    qemu_GetMetaFileBitsEx,
    qemu_GetMetaFileW,
    qemu_GetMetaRgn,
    qemu_GetMiterLimit,
    qemu_GetNearestColor,
    qemu_GetNearestPaletteIndex,
    qemu_GetObjectA,
    qemu_GetObjectType,
    qemu_GetObjectW,
    qemu_GetOutlineTextMetricsA,
    qemu_GetOutlineTextMetricsW,
    qemu_GetPaletteEntries,
    qemu_GetPath,
    qemu_GetPixel,
    qemu_GetPixelFormat,
    qemu_GetPolyFillMode,
    qemu_GetRandomRgn,
    qemu_GetRasterizerCaps,
    qemu_GetRegionData,
    qemu_GetRelAbs,
    qemu_GetRgnBox,
    qemu_GetROP2,
    qemu_GetStockObject,
    qemu_GetStretchBltMode,
    qemu_GetSystemPaletteEntries,
    qemu_GetSystemPaletteUse,
    qemu_GetTextAlign,
    qemu_GetTextCharacterExtra,
    qemu_GetTextCharset,
    qemu_GetTextCharsetInfo,
    qemu_GetTextColor,
    qemu_GetTextExtentExPointA,
    qemu_GetTextExtentExPointI,
    qemu_GetTextExtentExPointW,
    qemu_GetTextExtentPoint32A,
    qemu_GetTextExtentPoint32W,
    qemu_GetTextExtentPointA,
    qemu_GetTextExtentPointI,
    qemu_GetTextExtentPointW,
    qemu_GetTextFaceA,
    qemu_GetTextFaceW,
    qemu_GetTextMetricsA,
    qemu_GetTextMetricsW,
    qemu_GetTransform,
    qemu_GetViewportExtEx,
    qemu_GetViewportOrgEx,
    qemu_GetWindowExtEx,
    qemu_GetWindowOrgEx,
    qemu_GetWinMetaFileBits,
    qemu_GetWorldTransform,
    qemu_IntersectClipRect,
    qemu_InvertRgn,
    qemu_LineDDA,
    qemu_LineTo,
    qemu_LPtoDP,
    qemu_MaskBlt,
    qemu_MirrorRgn,
    qemu_ModifyWorldTransform,
    qemu_MoveToEx,
    qemu_NamedEscape,
    qemu_OffsetClipRgn,
    qemu_OffsetRgn,
    qemu_OffsetViewportOrgEx,
    qemu_OffsetWindowOrgEx,
    qemu_PaintRgn,
    qemu_PatBlt,
    qemu_PathToRegion,
    qemu_Pie,
    qemu_PlayEnhMetaFile,
    qemu_PlayEnhMetaFileRecord,
    qemu_PlayMetaFile,
    qemu_PlayMetaFileRecord,
    qemu_PlgBlt,
    qemu_PolyBezier,
    qemu_PolyBezierTo,
    qemu_PolyDraw,
    qemu_Polygon,
    qemu_Polyline,
    qemu_PolylineTo,
    qemu_PolyPolygon,
    qemu_PolyPolyline,
    qemu_PolyTextOutA,
    qemu_PolyTextOutW,
    qemu_PtInRegion,
    qemu_PtVisible,
    qemu_RealizePalette,
    qemu_Rectangle,
    qemu_RectInRegion,
    qemu_RectVisible,
    qemu_RemoveFontMemResourceEx,
    qemu_RemoveFontResourceA,
    qemu_RemoveFontResourceExA,
    qemu_RemoveFontResourceExW,
    qemu_RemoveFontResourceW,
    qemu_ResetDCA,
    qemu_ResetDCW,
    qemu_ResizePalette,
    qemu_RestoreDC,
    qemu_RoundRect,
    qemu_SaveDC,
    qemu_ScaleViewportExtEx,
    qemu_ScaleWindowExtEx,
    qemu_SelectClipPath,
    qemu_SelectClipRgn,
    qemu_SelectObject,
    qemu_SelectPalette,
    qemu_SetAbortProc,
    qemu_SetArcDirection,
    qemu_SetBitmapBits,
    qemu_SetBitmapDimensionEx,
    qemu_SetBkColor,
    qemu_SetBkMode,
    qemu_SetBoundsRect,
    qemu_SetBrushOrgEx,
    qemu_SetColorAdjustment,
    qemu_SetColorSpace,
    qemu_SetDCBrushColor,
    qemu_SetDCPenColor,
    qemu_SetDeviceGammaRamp,
    qemu_SetDIBColorTable,
    qemu_SetDIBits,
    qemu_SetDIBitsToDevice,
    qemu_SetEnhMetaFileBits,
    qemu_SetGraphicsMode,
    qemu_SetHookFlags,
    qemu_SetICMMode,
    qemu_SetICMProfileA,
    qemu_SetICMProfileW,
    qemu_SetLayout,
    qemu_SetMagicColors,
    qemu_SetMapMode,
    qemu_SetMapperFlags,
    qemu_SetMetaFileBitsEx,
    qemu_SetMetaRgn,
    qemu_SetMiterLimit,
    qemu_SetObjectOwner,
    qemu_SetPaletteEntries,
    qemu_SetPixel,
    qemu_SetPixelFormat,
    qemu_SetPixelV,
    qemu_SetPolyFillMode,
    qemu_SetRectRgn,
    qemu_SetRelAbs,
    qemu_SetROP2,
    qemu_SetStretchBltMode,
    qemu_SetSystemPaletteUse,
    qemu_SetTextAlign,
    qemu_SetTextCharacterExtra,
    qemu_SetTextColor,
    qemu_SetTextJustification,
    qemu_SetViewportExtEx,
    qemu_SetViewportOrgEx,
    qemu_SetVirtualResolution,
    qemu_SetWindowExtEx,
    qemu_SetWindowOrgEx,
    qemu_SetWinMetaFileBits,
    qemu_SetWorldTransform,
    qemu_StartDocA,
    qemu_StartDocW,
    qemu_StartPage,
    qemu_StretchBlt,
    qemu_StretchDIBits,
    qemu_StrokeAndFillPath,
    qemu_StrokePath,
    qemu_SwapBuffers,
    qemu_TextOutA,
    qemu_TextOutW,
    qemu_TranslateCharsetInfo,
    qemu_UnrealizeObject,
    qemu_UpdateColors,
    qemu_UpdateICMRegKeyA,
    qemu_UpdateICMRegKeyW,
    qemu_WidenPath,
};

const WINAPI syscall_handler *qemu_dll_register(const struct qemu_ops *ops, uint32_t *dll_num)
{
    WINE_TRACE("Loading host-side gdi32 wrapper.\n");

    qemu_ops = ops;
    *dll_num = QEMU_CURRENT_DLL;

    return dll_functions;
}

#endif
