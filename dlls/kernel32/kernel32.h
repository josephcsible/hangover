#ifndef KERNEL32_H
#define KERNEL32_H

enum kernel32_calls
{
    CALL__HREAD = 0,
    CALL__HWRITE,
    CALL__LCLOSE,
    CALL__LCREAT,
    CALL__LLSEEK,
    CALL__LOPEN,
    CALL__LREAD,
    CALL__LWRITE,
    CALL_ACTIVATEACTCTX,
    CALL_ADDATOMA,
    CALL_ADDATOMW,
    CALL_ADDREFACTCTX,
    CALL_ALLOCATEUSERPHYSICALPAGES,
    CALL_APPLICATIONRECOVERYFINISHED,
    CALL_APPLICATIONRECOVERYINPROGRESS,
    CALL_AREFILEAPISANSI,
    CALL_ASSIGNPROCESSTOJOBOBJECT,
    CALL_BACKUPREAD,
    CALL_BACKUPSEEK,
    CALL_BACKUPWRITE,
    CALL_BASEFLUSHAPPCOMPATCACHE,
    CALL_BEGINUPDATERESOURCEA,
    CALL_BEGINUPDATERESOURCEW,
    CALL_BINDIOCOMPLETIONCALLBACK,
    CALL_BUILDCOMMDCBA,
    CALL_BUILDCOMMDCBANDTIMEOUTSA,
    CALL_BUILDCOMMDCBANDTIMEOUTSW,
    CALL_BUILDCOMMDCBW,
    CALL_CALLBACKMAYRUNLONG,
    CALL_CALLNAMEDPIPEA,
    CALL_CALLNAMEDPIPEW,
    CALL_CANCELIO,
    CALL_CANCELIOEX,
    CALL_CANCELSYNCHRONOUSIO,
    CALL_CANCELTIMERQUEUETIMER,
    CALL_CANCELWAITABLETIMER,
    CALL_CHANGETIMERQUEUETIMER,
    CALL_CHECKNAMELEGALDOS8DOT3A,
    CALL_CHECKNAMELEGALDOS8DOT3W,
    CALL_CHECKREMOTEDEBUGGERPRESENT,
    CALL_CLEARCOMMBREAK,
    CALL_CLEARCOMMERROR,
    CALL_CLOSEHANDLE,
    CALL_CLOSEPROFILEUSERMAPPING,
    CALL_CMDBATNOTIFICATION,
    CALL_COMMCONFIGDIALOGA,
    CALL_COMMCONFIGDIALOGW,
    CALL_COMPAREFILETIME,
    CALL_COMPARESTRINGA,
    CALL_COMPARESTRINGEX,
    CALL_COMPARESTRINGORDINAL,
    CALL_COMPARESTRINGW,
    CALL_CONNECTNAMEDPIPE,
    CALL_CONTINUEDEBUGEVENT,
    CALL_CONVERTDEFAULTLOCALE,
    CALL_CONVERTFIBERTOTHREAD,
    CALL_CONVERTTHREADTOFIBER,
    CALL_CONVERTTHREADTOFIBEREX,
    CALL_CONVERTTOGLOBALHANDLE,
    CALL_COPYFILEA,
    CALL_COPYFILEEXA,
    CALL_COPYFILEEXW,
    CALL_COPYFILEW,
    CALL_CREATEACTCTXA,
    CALL_CREATEACTCTXW,
    CALL_CREATEDIRECTORYA,
    CALL_CREATEDIRECTORYEXA,
    CALL_CREATEDIRECTORYEXW,
    CALL_CREATEDIRECTORYW,
    CALL_CREATEEVENTA,
    CALL_CREATEEVENTEXA,
    CALL_CREATEEVENTEXW,
    CALL_CREATEEVENTW,
    CALL_CREATEFIBER,
    CALL_CREATEFIBEREX,
    CALL_CREATEFILE2,
    CALL_CREATEFILEA,
    CALL_CREATEFILEMAPPINGA,
    CALL_CREATEFILEMAPPINGW,
    CALL_CREATEFILEW,
    CALL_CREATEHARDLINKA,
    CALL_CREATEHARDLINKTRANSACTEDA,
    CALL_CREATEHARDLINKTRANSACTEDW,
    CALL_CREATEHARDLINKW,
    CALL_CREATEIOCOMPLETIONPORT,
    CALL_CREATEJOBOBJECTA,
    CALL_CREATEJOBOBJECTW,
    CALL_CREATEMAILSLOTA,
    CALL_CREATEMAILSLOTW,
    CALL_CREATEMEMORYRESOURCENOTIFICATION,
    CALL_CREATEMUTEXA,
    CALL_CREATEMUTEXEXA,
    CALL_CREATEMUTEXEXW,
    CALL_CREATEMUTEXW,
    CALL_CREATENAMEDPIPEA,
    CALL_CREATENAMEDPIPEW,
    CALL_CREATEPIPE,
    CALL_CREATEPROCESSA,
    CALL_CREATEPROCESSW,
    CALL_CREATEREMOTETHREAD,
    CALL_CREATESEMAPHOREA,
    CALL_CREATESEMAPHOREEXA,
    CALL_CREATESEMAPHOREEXW,
    CALL_CREATESEMAPHOREW,
    CALL_CREATESOCKETHANDLE,
    CALL_CREATESYMBOLICLINKA,
    CALL_CREATESYMBOLICLINKW,
    CALL_CREATETAPEPARTITION,
    CALL_CREATETHREAD,
    CALL_CREATETHREADPOOL,
    CALL_CREATETHREADPOOLCLEANUPGROUP,
    CALL_CREATETHREADPOOLTIMER,
    CALL_CREATETHREADPOOLWAIT,
    CALL_CREATETHREADPOOLWORK,
    CALL_CREATETIMERQUEUE,
    CALL_CREATETIMERQUEUETIMER,
    CALL_CREATETOOLHELP32SNAPSHOT,
    CALL_CREATEWAITABLETIMERA,
    CALL_CREATEWAITABLETIMEREXA,
    CALL_CREATEWAITABLETIMEREXW,
    CALL_CREATEWAITABLETIMERW,
    CALL_DEACTIVATEACTCTX,
    CALL_DEBUGACTIVEPROCESS,
    CALL_DEBUGACTIVEPROCESSSTOP,
    CALL_DEBUGBREAK,
    CALL_DEBUGBREAKPROCESS,
    CALL_DEBUGSETPROCESSKILLONEXIT,
    CALL_DEFINEDOSDEVICEA,
    CALL_DEFINEDOSDEVICEW,
    CALL_DELAYLOADFAILUREHOOK,
    CALL_DELETEATOM,
    CALL_DELETEFIBER,
    CALL_DELETEFILEA,
    CALL_DELETEFILEW,
    CALL_DELETEPROCTHREADATTRIBUTELIST,
    CALL_DELETETIMERQUEUE,
    CALL_DELETETIMERQUEUEEX,
    CALL_DELETETIMERQUEUETIMER,
    CALL_DELETEVOLUMEMOUNTPOINTA,
    CALL_DELETEVOLUMEMOUNTPOINTW,
    CALL_DEVICEIOCONTROL,
    CALL_DISABLETHREADLIBRARYCALLS,
    CALL_DISCONNECTNAMEDPIPE,
    CALL_DNSHOSTNAMETOCOMPUTERNAMEA,
    CALL_DNSHOSTNAMETOCOMPUTERNAMEW,
    CALL_DOSDATETIMETOFILETIME,
    CALL_DUPLICATEHANDLE,
    CALL_ENDUPDATERESOURCEA,
    CALL_ENDUPDATERESOURCEW,
    CALL_ENUMLANGUAGEGROUPLOCALESA,
    CALL_ENUMLANGUAGEGROUPLOCALESW,
    CALL_ENUMRESOURCELANGUAGESA,
    CALL_ENUMRESOURCELANGUAGESEXA,
    CALL_ENUMRESOURCELANGUAGESEXW,
    CALL_ENUMRESOURCELANGUAGESW,
    CALL_ENUMRESOURCENAMESA,
    CALL_ENUMRESOURCENAMESW,
    CALL_ENUMRESOURCETYPESA,
    CALL_ENUMRESOURCETYPESW,
    CALL_ENUMSYSTEMCODEPAGESA,
    CALL_ENUMSYSTEMCODEPAGESW,
    CALL_ENUMSYSTEMGEOID,
    CALL_ENUMSYSTEMLANGUAGEGROUPSA,
    CALL_ENUMSYSTEMLANGUAGEGROUPSW,
    CALL_ENUMSYSTEMLOCALESA,
    CALL_ENUMSYSTEMLOCALESEX,
    CALL_ENUMSYSTEMLOCALESW,
    CALL_ENUMUILANGUAGESA,
    CALL_ENUMUILANGUAGESW,
    CALL_ERASETAPE,
    CALL_ESCAPECOMMFUNCTION,
    CALL_EXITPROCESS,
    CALL_EXITTHREAD,
    CALL_EXPANDENVIRONMENTSTRINGSA,
    CALL_EXPANDENVIRONMENTSTRINGSW,
    CALL_FILETIMETODOSDATETIME,
    CALL_FILETIMETOLOCALFILETIME,
    CALL_FILETIMETOSYSTEMTIME,
    CALL_FINDACTCTXSECTIONGUID,
    CALL_FINDACTCTXSECTIONSTRINGA,
    CALL_FINDACTCTXSECTIONSTRINGW,
    CALL_FINDATOMA,
    CALL_FINDATOMW,
    CALL_FINDCLOSE,
    CALL_FINDCLOSECHANGENOTIFICATION,
    CALL_FINDFIRSTCHANGENOTIFICATIONA,
    CALL_FINDFIRSTCHANGENOTIFICATIONW,
    CALL_FINDFIRSTFILEA,
    CALL_FINDFIRSTFILEEXA,
    CALL_FINDFIRSTFILEEXW,
    CALL_FINDFIRSTFILEW,
    CALL_FINDFIRSTVOLUMEA,
    CALL_FINDFIRSTVOLUMEMOUNTPOINTA,
    CALL_FINDFIRSTVOLUMEMOUNTPOINTW,
    CALL_FINDFIRSTVOLUMEW,
    CALL_FINDNEXTCHANGENOTIFICATION,
    CALL_FINDNEXTFILEA,
    CALL_FINDNEXTFILEW,
    CALL_FINDNEXTVOLUMEA,
    CALL_FINDNEXTVOLUMEW,
    CALL_FINDRESOURCEA,
    CALL_FINDRESOURCEEXA,
    CALL_FINDRESOURCEEXW,
    CALL_FINDRESOURCEW,
    CALL_FINDVOLUMECLOSE,
    CALL_FINDVOLUMEMOUNTPOINTCLOSE,
    CALL_FLSALLOC,
    CALL_FLSFREE,
    CALL_FLSGETVALUE,
    CALL_FLSSETVALUE,
    CALL_FLUSHFILEBUFFERS,
    CALL_FLUSHINSTRUCTIONCACHE,
    CALL_FLUSHPROCESSWRITEBUFFERS,
    CALL_FLUSHVIEWOFFILE,
    CALL_FOLDSTRINGA,
    CALL_FOLDSTRINGW,
    CALL_FORMATMESSAGEA,
    CALL_FORMATMESSAGEW,
    CALL_FREEENVIRONMENTSTRINGSA,
    CALL_FREEENVIRONMENTSTRINGSW,
    CALL_FREELIBRARY,
    CALL_FREELIBRARYANDEXITTHREAD,
    CALL_FREERESOURCE,
    CALL_FREEUSERPHYSICALPAGES,
    CALL_GETACP,
    CALL_GETACTIVEPROCESSORCOUNT,
    CALL_GETACTIVEPROCESSORGROUPCOUNT,
    CALL_GETATOMNAMEA,
    CALL_GETATOMNAMEW,
    CALL_GETBINARYTYPEA,
    CALL_GETBINARYTYPEW,
    CALL_GETCALENDARINFOA,
    CALL_GETCALENDARINFOEX,
    CALL_GETCALENDARINFOW,
    CALL_GETCOMMANDLINEA,
    CALL_GETCOMMANDLINEW,
    CALL_GETCOMMCONFIG,
    CALL_GETCOMMMASK,
    CALL_GETCOMMMODEMSTATUS,
    CALL_GETCOMMPROPERTIES,
    CALL_GETCOMMSTATE,
    CALL_GETCOMMTIMEOUTS,
    CALL_GETCOMPRESSEDFILESIZEA,
    CALL_GETCOMPRESSEDFILESIZEW,
    CALL_GETCOMPUTERNAMEA,
    CALL_GETCOMPUTERNAMEEXA,
    CALL_GETCOMPUTERNAMEEXW,
    CALL_GETCOMPUTERNAMEW,
    CALL_GETCPINFO,
    CALL_GETCPINFOEXA,
    CALL_GETCPINFOEXW,
    CALL_GETCURRENTACTCTX,
    CALL_GETCURRENTDIRECTORYA,
    CALL_GETCURRENTDIRECTORYW,
    CALL_GETCURRENTPROCESS,
    CALL_GETCURRENTPROCESSID,
    CALL_GETCURRENTTHREAD,
    CALL_GETCURRENTTHREADID,
    CALL_GETDATEFORMATA,
    CALL_GETDATEFORMATW,
    CALL_GETDAYLIGHTFLAG,
    CALL_GETDEFAULTCOMMCONFIGA,
    CALL_GETDEFAULTCOMMCONFIGW,
    CALL_GETDEVICEPOWERSTATE,
    CALL_GETDISKFREESPACEA,
    CALL_GETDISKFREESPACEEXA,
    CALL_GETDISKFREESPACEEXW,
    CALL_GETDISKFREESPACEW,
    CALL_GETDLLDIRECTORYA,
    CALL_GETDLLDIRECTORYW,
    CALL_GETDRIVETYPEA,
    CALL_GETDRIVETYPEW,
    CALL_GETDYNAMICTIMEZONEINFORMATION,
    CALL_GETENVIRONMENTSTRINGSA,
    CALL_GETENVIRONMENTSTRINGSW,
    CALL_GETENVIRONMENTVARIABLEA,
    CALL_GETENVIRONMENTVARIABLEW,
    CALL_GETERRORMODE,
    CALL_GETEXITCODEPROCESS,
    CALL_GETEXITCODETHREAD,
    CALL_GETEXPANDEDNAMEA,
    CALL_GETEXPANDEDNAMEW,
    CALL_GETFILEATTRIBUTESA,
    CALL_GETFILEATTRIBUTESEXA,
    CALL_GETFILEATTRIBUTESEXW,
    CALL_GETFILEATTRIBUTESW,
    CALL_GETFILEINFORMATIONBYHANDLE,
    CALL_GETFILEINFORMATIONBYHANDLEEX,
    CALL_GETFILEMUIINFO,
    CALL_GETFILEMUIPATH,
    CALL_GETFILESIZE,
    CALL_GETFILESIZEEX,
    CALL_GETFILETIME,
    CALL_GETFILETYPE,
    CALL_GETFINALPATHNAMEBYHANDLEA,
    CALL_GETFINALPATHNAMEBYHANDLEW,
    CALL_GETFIRMWAREENVIRONMENTVARIABLEA,
    CALL_GETFIRMWAREENVIRONMENTVARIABLEW,
    CALL_GETFULLPATHNAMEA,
    CALL_GETFULLPATHNAMEW,
    CALL_GETGEOINFOA,
    CALL_GETGEOINFOW,
    CALL_GETHANDLECONTEXT,
    CALL_GETHANDLEINFORMATION,
    CALL_GETLARGEPAGEMINIMUM,
    CALL_GETLASTERROR,
    CALL_GETLOCALEINFOA,
    CALL_GETLOCALEINFOEX,
    CALL_GETLOCALEINFOW,
    CALL_GETLOCALTIME,
    CALL_GETLOGICALDRIVES,
    CALL_GETLOGICALDRIVESTRINGSA,
    CALL_GETLOGICALDRIVESTRINGSW,
    CALL_GETLOGICALPROCESSORINFORMATION,
    CALL_GETLOGICALPROCESSORINFORMATIONEX,
    CALL_GETLONGPATHNAMEA,
    CALL_GETLONGPATHNAMEW,
    CALL_GETMAILSLOTINFO,
    CALL_GETMODULEFILENAMEA,
    CALL_GETMODULEFILENAMEW,
    CALL_GETMODULEHANDLEA,
    CALL_GETMODULEHANDLEEXA,
    CALL_GETMODULEHANDLEW,
    CALL_GETNAMEDPIPEHANDLESTATEA,
    CALL_GETNAMEDPIPEHANDLESTATEW,
    CALL_GETNAMEDPIPEINFO,
    CALL_GETNATIVESYSTEMINFO,
    CALL_GETNUMAAVAILABLEMEMORYNODE,
    CALL_GETNUMAHIGHESTNODENUMBER,
    CALL_GETNUMANODEPROCESSORMASK,
    CALL_GETNUMAPROCESSORNODE,
    CALL_GETOEMCP,
    CALL_GETOVERLAPPEDRESULT,
    CALL_GETPHYSICALLYINSTALLEDSYSTEMMEMORY,
    CALL_GETPRIORITYCLASS,
    CALL_GETPRIVATEPROFILEINTA,
    CALL_GETPRIVATEPROFILEINTW,
    CALL_GETPRIVATEPROFILESECTIONA,
    CALL_GETPRIVATEPROFILESECTIONNAMESA,
    CALL_GETPRIVATEPROFILESECTIONNAMESW,
    CALL_GETPRIVATEPROFILESECTIONW,
    CALL_GETPRIVATEPROFILESTRINGA,
    CALL_GETPRIVATEPROFILESTRINGW,
    CALL_GETPRIVATEPROFILESTRUCTA,
    CALL_GETPRIVATEPROFILESTRUCTW,
    CALL_GETPROCADDRESS,
    CALL_GETPROCESSAFFINITYMASK,
    CALL_GETPROCESSDEPPOLICY,
    CALL_GETPROCESSFLAGS,
    CALL_GETPROCESSHANDLECOUNT,
    CALL_GETPROCESSHEAP,
    CALL_GETPROCESSHEAPS,
    CALL_GETPROCESSID,
    CALL_GETPROCESSIDOFTHREAD,
    CALL_GETPROCESSIOCOUNTERS,
    CALL_GETPROCESSPRIORITYBOOST,
    CALL_GETPROCESSSHUTDOWNPARAMETERS,
    CALL_GETPROCESSTIMES,
    CALL_GETPROCESSVERSION,
    CALL_GETPROCESSWORKINGSETSIZE,
    CALL_GETPROFILEINTA,
    CALL_GETPROFILEINTW,
    CALL_GETPROFILESECTIONA,
    CALL_GETPROFILESECTIONW,
    CALL_GETPROFILESTRINGA,
    CALL_GETPROFILESTRINGW,
    CALL_GETQUEUEDCOMPLETIONSTATUS,
    CALL_GETSHORTPATHNAMEA,
    CALL_GETSHORTPATHNAMEW,
    CALL_GETSTARTUPINFOA,
    CALL_GETSTARTUPINFOW,
    CALL_GETSTDHANDLE,
    CALL_GETSTRINGTYPEA,
    CALL_GETSTRINGTYPEEXA,
    CALL_GETSTRINGTYPEEXW,
    CALL_GETSTRINGTYPEW,
    CALL_GETSYSTEMDEFAULTLANGID,
    CALL_GETSYSTEMDEFAULTLCID,
    CALL_GETSYSTEMDEFAULTLOCALENAME,
    CALL_GETSYSTEMDEFAULTUILANGUAGE,
    CALL_GETSYSTEMDEPPOLICY,
    CALL_GETSYSTEMDIRECTORYA,
    CALL_GETSYSTEMDIRECTORYW,
    CALL_GETSYSTEMFILECACHESIZE,
    CALL_GETSYSTEMFIRMWARETABLE,
    CALL_GETSYSTEMINFO,
    CALL_GETSYSTEMPOWERSTATUS,
    CALL_GETSYSTEMPREFERREDUILANGUAGES,
    CALL_GETSYSTEMTIME,
    CALL_GETSYSTEMTIMEADJUSTMENT,
    CALL_GETSYSTEMTIMEASFILETIME,
    CALL_GETSYSTEMTIMEPRECISEASFILETIME,
    CALL_GETSYSTEMTIMES,
    CALL_GETSYSTEMWINDOWSDIRECTORYA,
    CALL_GETSYSTEMWINDOWSDIRECTORYW,
    CALL_GETSYSTEMWOW64DIRECTORYA,
    CALL_GETSYSTEMWOW64DIRECTORYW,
    CALL_GETTAPEPARAMETERS,
    CALL_GETTAPEPOSITION,
    CALL_GETTAPESTATUS,
    CALL_GETTEMPFILENAMEA,
    CALL_GETTEMPFILENAMEW,
    CALL_GETTEMPPATHA,
    CALL_GETTEMPPATHW,
    CALL_GETTHREADCONTEXT,
    CALL_GETTHREADERRORMODE,
    CALL_GETTHREADGROUPAFFINITY,
    CALL_GETTHREADID,
    CALL_GETTHREADIOPENDINGFLAG,
    CALL_GETTHREADLOCALE,
    CALL_GETTHREADPREFERREDUILANGUAGES,
    CALL_GETTHREADPRIORITY,
    CALL_GETTHREADPRIORITYBOOST,
    CALL_GETTHREADSELECTORENTRY,
    CALL_GETTHREADTIMES,
    CALL_GETTHREADUILANGUAGE,
    CALL_GETTICKCOUNT,
    CALL_GETTIMEFORMATA,
    CALL_GETTIMEFORMATW,
    CALL_GETTIMEZONEINFORMATION,
    CALL_GETTIMEZONEINFORMATIONFORYEAR,
    CALL_GETUSERDEFAULTLANGID,
    CALL_GETUSERDEFAULTLCID,
    CALL_GETUSERDEFAULTLOCALENAME,
    CALL_GETUSERDEFAULTUILANGUAGE,
    CALL_GETUSERGEOID,
    CALL_GETUSERPREFERREDUILANGUAGES,
    CALL_GETVERSION,
    CALL_GETVERSIONEXA,
    CALL_GETVERSIONEXW,
    CALL_GETVOLUMEINFORMATIONA,
    CALL_GETVOLUMEINFORMATIONBYHANDLEW,
    CALL_GETVOLUMEINFORMATIONW,
    CALL_GETVOLUMENAMEFORVOLUMEMOUNTPOINTA,
    CALL_GETVOLUMENAMEFORVOLUMEMOUNTPOINTW,
    CALL_GETVOLUMEPATHNAMEA,
    CALL_GETVOLUMEPATHNAMESFORVOLUMENAMEA,
    CALL_GETVOLUMEPATHNAMESFORVOLUMENAMEW,
    CALL_GETVOLUMEPATHNAMEW,
    CALL_GETWINDOWSDIRECTORYA,
    CALL_GETWINDOWSDIRECTORYW,
    CALL_GETWRITEWATCH,
    CALL_GLOBALADDATOMA,
    CALL_GLOBALADDATOMW,
    CALL_GLOBALALLOC,
    CALL_GLOBALCOMPACT,
    CALL_GLOBALDELETEATOM,
    CALL_GLOBALFINDATOMA,
    CALL_GLOBALFINDATOMW,
    CALL_GLOBALFIX,
    CALL_GLOBALFLAGS,
    CALL_GLOBALFREE,
    CALL_GLOBALGETATOMNAMEA,
    CALL_GLOBALGETATOMNAMEW,
    CALL_GLOBALHANDLE,
    CALL_GLOBALLOCK,
    CALL_GLOBALMEMORYSTATUS,
    CALL_GLOBALMEMORYSTATUSEX,
    CALL_GLOBALREALLOC,
    CALL_GLOBALSIZE,
    CALL_GLOBALUNFIX,
    CALL_GLOBALUNLOCK,
    CALL_GLOBALUNWIRE,
    CALL_GLOBALWIRE,
    CALL_HEAP32LISTFIRST,
    CALL_HEAPALLOC,
    CALL_HEAPCOMPACT,
    CALL_HEAPCREATE,
    CALL_HEAPDESTROY,
    CALL_HEAPFREE,
    CALL_HEAPLOCK,
    CALL_HEAPQUERYINFORMATION,
    CALL_HEAPREALLOC,
    CALL_HEAPSETINFORMATION,
    CALL_HEAPSIZE,
    CALL_HEAPUNLOCK,
    CALL_HEAPVALIDATE,
    CALL_HEAPWALK,
    CALL_IDNTOASCII,
    CALL_IDNTONAMEPREPUNICODE,
    CALL_IDNTOUNICODE,
    CALL_INITATOMTABLE,
    CALL_INITIALIZECRITICALSECTION,
    CALL_INITIALIZECRITICALSECTIONANDSPINCOUNT,
    CALL_INITIALIZEPROCTHREADATTRIBUTELIST,
    CALL_INITONCEBEGININITIALIZE,
    CALL_INITONCECOMPLETE,
    CALL_INITONCEEXECUTEONCE,
    CALL_INVALIDATENLSCACHE,
    CALL_ISBADCODEPTR,
    CALL_ISBADHUGEREADPTR,
    CALL_ISBADHUGEWRITEPTR,
    CALL_ISBADREADPTR,
    CALL_ISBADSTRINGPTRA,
    CALL_ISBADSTRINGPTRW,
    CALL_ISBADWRITEPTR,
    CALL_ISDBCSLEADBYTE,
    CALL_ISDBCSLEADBYTEEX,
    CALL_ISDEBUGGERPRESENT,
    CALL_ISNORMALIZEDSTRING,
    CALL_ISPROCESSINJOB,
    CALL_ISPROCESSORFEATUREPRESENT,
    CALL_ISSYSTEMRESUMEAUTOMATIC,
    CALL_ISTHREADAFIBER,
    CALL_ISVALIDCODEPAGE,
    CALL_ISVALIDLANGUAGEGROUP,
    CALL_ISVALIDLOCALE,
    CALL_ISVALIDLOCALENAME,
    CALL_ISWOW64PROCESS,
    CALL_K32EMPTYWORKINGSET,
    CALL_K32ENUMDEVICEDRIVERS,
    CALL_K32ENUMPAGEFILESA,
    CALL_K32ENUMPAGEFILESW,
    CALL_K32ENUMPROCESSES,
    CALL_K32ENUMPROCESSMODULES,
    CALL_K32ENUMPROCESSMODULESEX,
    CALL_K32GETDEVICEDRIVERBASENAMEA,
    CALL_K32GETDEVICEDRIVERBASENAMEW,
    CALL_K32GETDEVICEDRIVERFILENAMEA,
    CALL_K32GETDEVICEDRIVERFILENAMEW,
    CALL_K32GETMAPPEDFILENAMEA,
    CALL_K32GETMAPPEDFILENAMEW,
    CALL_K32GETMODULEBASENAMEA,
    CALL_K32GETMODULEBASENAMEW,
    CALL_K32GETMODULEFILENAMEEXA,
    CALL_K32GETMODULEFILENAMEEXW,
    CALL_K32GETMODULEINFORMATION,
    CALL_K32GETPERFORMANCEINFO,
    CALL_K32GETPROCESSIMAGEFILENAMEA,
    CALL_K32GETPROCESSIMAGEFILENAMEW,
    CALL_K32GETPROCESSMEMORYINFO,
    CALL_K32GETWSCHANGES,
    CALL_K32INITIALIZEPROCESSFORWSWATCH,
    CALL_K32QUERYWORKINGSET,
    CALL_K32QUERYWORKINGSETEX,
    CALL_LCIDTOLOCALENAME,
    CALL_LCMAPSTRINGA,
    CALL_LCMAPSTRINGEX,
    CALL_LCMAPSTRINGW,
    CALL_LOADLIBRARYA,
    CALL_LOADLIBRARYEXA,
    CALL_LOADLIBRARYEXW,
    CALL_LOADLIBRARYW,
    CALL_LOADMODULE,
    CALL_LOADRESOURCE,
    CALL_LOCALALLOC,
    CALL_LOCALCOMPACT,
    CALL_LOCALENAMETOLCID,
    CALL_LOCALFILETIMETOFILETIME,
    CALL_LOCALFLAGS,
    CALL_LOCALFREE,
    CALL_LOCALHANDLE,
    CALL_LOCALLOCK,
    CALL_LOCALREALLOC,
    CALL_LOCALSHRINK,
    CALL_LOCALSIZE,
    CALL_LOCALUNLOCK,
    CALL_LOCKFILE,
    CALL_LOCKFILEEX,
    CALL_LOCKRESOURCE,
    CALL_LSTRCATA,
    CALL_LSTRCATW,
    CALL_LSTRCMPA,
    CALL_LSTRCMPIA,
    CALL_LSTRCMPIW,
    CALL_LSTRCMPW,
    CALL_LSTRCPYA,
    CALL_LSTRCPYNA,
    CALL_LSTRCPYNW,
    CALL_LSTRCPYW,
    CALL_LSTRLENA,
    CALL_LSTRLENW,
    CALL_LZCLOSE,
    CALL_LZCOPY,
    CALL_LZDONE,
    CALL_LZINIT,
    CALL_LZOPENFILEA,
    CALL_LZOPENFILEW,
    CALL_LZREAD,
    CALL_LZSEEK,
    CALL_LZSTART,
    CALL_MAKECRITICALSECTIONGLOBAL,
    CALL_MAPVIEWOFFILE,
    CALL_MAPVIEWOFFILEEX,
    CALL_MODULE32FIRST,
    CALL_MODULE32FIRSTW,
    CALL_MODULE32NEXT,
    CALL_MODULE32NEXTW,
    CALL_MOVEFILEA,
    CALL_MOVEFILEEXA,
    CALL_MOVEFILEEXW,
    CALL_MOVEFILEW,
    CALL_MOVEFILEWITHPROGRESSA,
    CALL_MOVEFILEWITHPROGRESSW,
    CALL_MULTIBYTETOWIDECHAR,
    CALL_NEEDCURRENTDIRECTORYFOREXEPATHA,
    CALL_NEEDCURRENTDIRECTORYFOREXEPATHW,
    CALL_NORMALIZESTRING,
    CALL_OPENEVENTA,
    CALL_OPENEVENTW,
    CALL_OPENFILE,
    CALL_OPENFILEBYID,
    CALL_OPENFILEMAPPINGA,
    CALL_OPENFILEMAPPINGW,
    CALL_OPENJOBOBJECTA,
    CALL_OPENJOBOBJECTW,
    CALL_OPENMUTEXA,
    CALL_OPENMUTEXW,
    CALL_OPENPROCESS,
    CALL_OPENPROFILEUSERMAPPING,
    CALL_OPENSEMAPHOREA,
    CALL_OPENSEMAPHOREW,
    CALL_OPENTHREAD,
    CALL_OPENVXDHANDLE,
    CALL_OPENWAITABLETIMERA,
    CALL_OPENWAITABLETIMERW,
    CALL_OUTPUTDEBUGSTRINGA,
    CALL_OUTPUTDEBUGSTRINGW,
    CALL_PEEKNAMEDPIPE,
    CALL_POSTQUEUEDCOMPLETIONSTATUS,
    CALL_POWERCLEARREQUEST,
    CALL_POWERCREATEREQUEST,
    CALL_POWERSETREQUEST,
    CALL_PREPARETAPE,
    CALL_PROCESS32FIRST,
    CALL_PROCESS32FIRSTW,
    CALL_PROCESS32NEXT,
    CALL_PROCESS32NEXTW,
    CALL_PROCESSIDTOSESSIONID,
    CALL_PULSEEVENT,
    CALL_PURGECOMM,
    CALL_QUERYACTCTXW,
    CALL_QUERYDOSDEVICEA,
    CALL_QUERYDOSDEVICEW,
    CALL_QUERYFULLPROCESSIMAGENAMEA,
    CALL_QUERYFULLPROCESSIMAGENAMEW,
    CALL_QUERYINFORMATIONJOBOBJECT,
    CALL_QUERYMEMORYRESOURCENOTIFICATION,
    CALL_QUERYPERFORMANCECOUNTER,
    CALL_QUERYPERFORMANCEFREQUENCY,
    CALL_QUERYTHREADCYCLETIME,
    CALL_QUERYUNBIASEDINTERRUPTTIME,
    CALL_QUEUEUSERAPC,
    CALL_QUEUEUSERWORKITEM,
    CALL_READDIRECTORYCHANGESW,
    CALL_READFILE,
    CALL_READFILEEX,
    CALL_READFILESCATTER,
    CALL_READPROCESSMEMORY,
    CALL_REGISTERAPPLICATIONRECOVERYCALLBACK,
    CALL_REGISTERAPPLICATIONRESTART,
    CALL_REGISTERSERVICEPROCESS,
    CALL_REGISTERWAITFORSINGLEOBJECT,
    CALL_REGISTERWAITFORSINGLEOBJECTEX,
    CALL_REINITIALIZECRITICALSECTION,
    CALL_RELEASEACTCTX,
    CALL_RELEASEMUTEX,
    CALL_RELEASESEMAPHORE,
    CALL_REMOVEDIRECTORYA,
    CALL_REMOVEDIRECTORYW,
    CALL_REPLACEFILEA,
    CALL_REPLACEFILEW,
    CALL_REQUESTWAKEUPLATENCY,
    CALL_RESETEVENT,
    CALL_RESETWRITEWATCH,
    CALL_RESUMETHREAD,
    CALL_SEARCHPATHA,
    CALL_SEARCHPATHW,
    CALL_SETCALENDARINFOA,
    CALL_SETCALENDARINFOW,
    CALL_SETCOMMBREAK,
    CALL_SETCOMMCONFIG,
    CALL_SETCOMMMASK,
    CALL_SETCOMMSTATE,
    CALL_SETCOMMTIMEOUTS,
    CALL_SETCOMPUTERNAMEA,
    CALL_SETCOMPUTERNAMEEXA,
    CALL_SETCOMPUTERNAMEEXW,
    CALL_SETCOMPUTERNAMEW,
    CALL_SETCONSOLECTRLHANDLER,
    CALL_SETCPGLOBAL,
    CALL_SETCURRENTDIRECTORYA,
    CALL_SETCURRENTDIRECTORYW,
    CALL_SETDEFAULTCOMMCONFIGA,
    CALL_SETDEFAULTCOMMCONFIGW,
    CALL_SETDEFAULTDLLDIRECTORIES,
    CALL_SETDLLDIRECTORYA,
    CALL_SETDLLDIRECTORYW,
    CALL_SETENDOFFILE,
    CALL_SETENVIRONMENTVARIABLEA,
    CALL_SETENVIRONMENTVARIABLEW,
    CALL_SETERRORMODE,
    CALL_SETEVENT,
    CALL_SETFILEAPISTOANSI,
    CALL_SETFILEAPISTOOEM,
    CALL_SETFILEATTRIBUTESA,
    CALL_SETFILEATTRIBUTESW,
    CALL_SETFILECOMPLETIONNOTIFICATIONMODES,
    CALL_SETFILEINFORMATIONBYHANDLE,
    CALL_SETFILEPOINTER,
    CALL_SETFILEPOINTEREX,
    CALL_SETFILETIME,
    CALL_SETFILEVALIDDATA,
    CALL_SETHANDLECONTEXT,
    CALL_SETHANDLECOUNT,
    CALL_SETHANDLEINFORMATION,
    CALL_SETINFORMATIONJOBOBJECT,
    CALL_SETLASTERROR,
    CALL_SETLOCALEINFOA,
    CALL_SETLOCALEINFOW,
    CALL_SETLOCALTIME,
    CALL_SETMAILSLOTINFO,
    CALL_SETNAMEDPIPEHANDLESTATE,
    CALL_SETPRIORITYCLASS,
    CALL_SETPROCESSAFFINITYMASK,
    CALL_SETPROCESSDEPPOLICY,
    CALL_SETPROCESSPRIORITYBOOST,
    CALL_SETPROCESSSHUTDOWNPARAMETERS,
    CALL_SETPROCESSWORKINGSETSIZE,
    CALL_SETSEARCHPATHMODE,
    CALL_SETSTDHANDLE,
    CALL_SETSYSTEMFILECACHESIZE,
    CALL_SETSYSTEMPOWERSTATE,
    CALL_SETSYSTEMTIME,
    CALL_SETSYSTEMTIMEADJUSTMENT,
    CALL_SETTAPEPARAMETERS,
    CALL_SETTAPEPOSITION,
    CALL_SETTHREADAFFINITYMASK,
    CALL_SETTHREADCONTEXT,
    CALL_SETTHREADERRORMODE,
    CALL_SETTHREADEXECUTIONSTATE,
    CALL_SETTHREADGROUPAFFINITY,
    CALL_SETTHREADIDEALPROCESSOR,
    CALL_SETTHREADIDEALPROCESSOREX,
    CALL_SETTHREADLOCALE,
    CALL_SETTHREADPOOLTIMER,
    CALL_SETTHREADPOOLWAIT,
    CALL_SETTHREADPREFERREDUILANGUAGES,
    CALL_SETTHREADPRIORITY,
    CALL_SETTHREADPRIORITYBOOST,
    CALL_SETTHREADSTACKGUARANTEE,
    CALL_SETTHREADUILANGUAGE,
    CALL_SETTIMEZONEINFORMATION,
    CALL_SETUNHANDLEDEXCEPTIONFILTER,
    CALL_SETUPCOMM,
    CALL_SETUSERGEOID,
    CALL_SETVOLUMELABELA,
    CALL_SETVOLUMELABELW,
    CALL_SETVOLUMEMOUNTPOINTA,
    CALL_SETVOLUMEMOUNTPOINTW,
    CALL_SETWAITABLETIMER,
    CALL_SETWAITABLETIMEREX,
    CALL_SIGNALOBJECTANDWAIT,
    CALL_SIZEOFRESOURCE,
    CALL_SLEEP,
    CALL_SLEEPCONDITIONVARIABLECS,
    CALL_SLEEPCONDITIONVARIABLESRW,
    CALL_SLEEPEX,
    CALL_SUSPENDTHREAD,
    CALL_SWITCHTOFIBER,
    CALL_SWITCHTOTHREAD,
    CALL_SYSTEMTIMETOFILETIME,
    CALL_SYSTEMTIMETOTZSPECIFICLOCALTIME,
    CALL_TERMINATEJOBOBJECT,
    CALL_TERMINATEPROCESS,
    CALL_TERMINATETHREAD,
    CALL_THREAD32FIRST,
    CALL_THREAD32NEXT,
    CALL_TLSALLOC,
    CALL_TLSFREE,
    CALL_TLSGETVALUE,
    CALL_TLSSETVALUE,
    CALL_TOOLHELP32READPROCESSMEMORY,
    CALL_TRANSACTNAMEDPIPE,
    CALL_TRANSMITCOMMCHAR,
    CALL_TRYSUBMITTHREADPOOLCALLBACK,
    CALL_TZSPECIFICLOCALTIMETOSYSTEMTIME,
    CALL_UNHANDLEDEXCEPTIONFILTER,
    CALL_UNINITIALIZECRITICALSECTION,
    CALL_UNLOCKFILE,
    CALL_UNLOCKFILEEX,
    CALL_UNMAPVIEWOFFILE,
    CALL_UNREGISTERAPPLICATIONRESTART,
    CALL_UNREGISTERWAIT,
    CALL_UNREGISTERWAITEX,
    CALL_UPDATEPROCTHREADATTRIBUTE,
    CALL_UPDATERESOURCEA,
    CALL_UPDATERESOURCEW,
    CALL_VERIFYVERSIONINFOA,
    CALL_VERIFYVERSIONINFOW,
    CALL_VERLANGUAGENAMEA,
    CALL_VERLANGUAGENAMEW,
    CALL_VIRTUALALLOC,
    CALL_VIRTUALALLOCEX,
    CALL_VIRTUALFREE,
    CALL_VIRTUALFREEEX,
    CALL_VIRTUALLOCK,
    CALL_VIRTUALPROTECT,
    CALL_VIRTUALPROTECTEX,
    CALL_VIRTUALQUERY,
    CALL_VIRTUALQUERYEX,
    CALL_VIRTUALUNLOCK,
    CALL_WAITCOMMEVENT,
    CALL_WAITFORDEBUGEVENT,
    CALL_WAITFORMULTIPLEOBJECTS,
    CALL_WAITFORMULTIPLEOBJECTSEX,
    CALL_WAITFORSINGLEOBJECT,
    CALL_WAITFORSINGLEOBJECTEX,
    CALL_WAITNAMEDPIPEA,
    CALL_WAITNAMEDPIPEW,
    CALL_WERREGISTERFILE,
    CALL_WERREGISTERMEMORYBLOCK,
    CALL_WERREGISTERRUNTIMEEXCEPTIONMODULE,
    CALL_WERSETFLAGS,
    CALL_WERUNREGISTERMEMORYBLOCK,
    CALL_WIDECHARTOMULTIBYTE,
    CALL_WINEXEC,
    CALL_WOW64DISABLEWOW64FSREDIRECTION,
    CALL_WOW64ENABLEWOW64FSREDIRECTION,
    CALL_WOW64REVERTWOW64FSREDIRECTION,
    CALL_WRITEFILE,
    CALL_WRITEFILEEX,
    CALL_WRITEFILEGATHER,
    CALL_WRITEPRIVATEPROFILESECTIONA,
    CALL_WRITEPRIVATEPROFILESECTIONW,
    CALL_WRITEPRIVATEPROFILESTRINGA,
    CALL_WRITEPRIVATEPROFILESTRINGW,
    CALL_WRITEPRIVATEPROFILESTRUCTA,
    CALL_WRITEPRIVATEPROFILESTRUCTW,
    CALL_WRITEPROCESSMEMORY,
    CALL_WRITEPROFILESECTIONA,
    CALL_WRITEPROFILESECTIONW,
    CALL_WRITEPROFILESTRINGA,
    CALL_WRITEPROFILESTRINGW,
    CALL_WRITETAPEMARK,
    CALL_WTSGETACTIVECONSOLESESSIONID,
    CALL_ZOMBIFYACTCTX,
};

#ifndef QEMU_DLL_GUEST
extern const struct qemu_ops *qemu_ops;

void qemu__hread(struct qemu_syscall *call);
void qemu__hwrite(struct qemu_syscall *call);
void qemu__lclose(struct qemu_syscall *call);
void qemu__lcreat(struct qemu_syscall *call);
void qemu__llseek(struct qemu_syscall *call);
void qemu__lopen(struct qemu_syscall *call);
void qemu__lread(struct qemu_syscall *call);
void qemu__lwrite(struct qemu_syscall *call);
void qemu_ActivateActCtx(struct qemu_syscall *call);
void qemu_AddAtomA(struct qemu_syscall *call);
void qemu_AddAtomW(struct qemu_syscall *call);
void qemu_AddRefActCtx(struct qemu_syscall *call);
void qemu_AllocateUserPhysicalPages(struct qemu_syscall *call);
void qemu_ApplicationRecoveryFinished(struct qemu_syscall *call);
void qemu_ApplicationRecoveryInProgress(struct qemu_syscall *call);
void qemu_AreFileApisANSI(struct qemu_syscall *call);
void qemu_AssignProcessToJobObject(struct qemu_syscall *call);
void qemu_BackupRead(struct qemu_syscall *call);
void qemu_BackupSeek(struct qemu_syscall *call);
void qemu_BackupWrite(struct qemu_syscall *call);
void qemu_BaseFlushAppcompatCache(struct qemu_syscall *call);
void qemu_BeginUpdateResourceA(struct qemu_syscall *call);
void qemu_BeginUpdateResourceW(struct qemu_syscall *call);
void qemu_BindIoCompletionCallback(struct qemu_syscall *call);
void qemu_BuildCommDCBA(struct qemu_syscall *call);
void qemu_BuildCommDCBAndTimeoutsA(struct qemu_syscall *call);
void qemu_BuildCommDCBAndTimeoutsW(struct qemu_syscall *call);
void qemu_BuildCommDCBW(struct qemu_syscall *call);
void qemu_CallbackMayRunLong(struct qemu_syscall *call);
void qemu_CallNamedPipeA(struct qemu_syscall *call);
void qemu_CallNamedPipeW(struct qemu_syscall *call);
void qemu_CancelIo(struct qemu_syscall *call);
void qemu_CancelIoEx(struct qemu_syscall *call);
void qemu_CancelSynchronousIo(struct qemu_syscall *call);
void qemu_CancelTimerQueueTimer(struct qemu_syscall *call);
void qemu_CancelWaitableTimer(struct qemu_syscall *call);
void qemu_ChangeTimerQueueTimer(struct qemu_syscall *call);
void qemu_CheckNameLegalDOS8Dot3A(struct qemu_syscall *call);
void qemu_CheckNameLegalDOS8Dot3W(struct qemu_syscall *call);
void qemu_CheckRemoteDebuggerPresent(struct qemu_syscall *call);
void qemu_ClearCommBreak(struct qemu_syscall *call);
void qemu_ClearCommError(struct qemu_syscall *call);
void qemu_CloseHandle(struct qemu_syscall *call);
void qemu_CloseProfileUserMapping(struct qemu_syscall *call);
void qemu_CmdBatNotification(struct qemu_syscall *call);
void qemu_CommConfigDialogA(struct qemu_syscall *call);
void qemu_CommConfigDialogW(struct qemu_syscall *call);
void qemu_CompareFileTime(struct qemu_syscall *call);
void qemu_CompareStringA(struct qemu_syscall *call);
void qemu_CompareStringEx(struct qemu_syscall *call);
void qemu_CompareStringOrdinal(struct qemu_syscall *call);
void qemu_CompareStringW(struct qemu_syscall *call);
void qemu_ConnectNamedPipe(struct qemu_syscall *call);
void qemu_ContinueDebugEvent(struct qemu_syscall *call);
void qemu_ConvertDefaultLocale(struct qemu_syscall *call);
void qemu_ConvertFiberToThread(struct qemu_syscall *call);
void qemu_ConvertThreadToFiber(struct qemu_syscall *call);
void qemu_ConvertThreadToFiberEx(struct qemu_syscall *call);
void qemu_ConvertToGlobalHandle(struct qemu_syscall *call);
void qemu_CopyFileA(struct qemu_syscall *call);
void qemu_CopyFileExA(struct qemu_syscall *call);
void qemu_CopyFileExW(struct qemu_syscall *call);
void qemu_CopyFileW(struct qemu_syscall *call);
void qemu_CreateActCtxA(struct qemu_syscall *call);
void qemu_CreateActCtxW(struct qemu_syscall *call);
void qemu_CreateDirectoryA(struct qemu_syscall *call);
void qemu_CreateDirectoryExA(struct qemu_syscall *call);
void qemu_CreateDirectoryExW(struct qemu_syscall *call);
void qemu_CreateDirectoryW(struct qemu_syscall *call);
void qemu_CreateEventA(struct qemu_syscall *call);
void qemu_CreateEventExA(struct qemu_syscall *call);
void qemu_CreateEventExW(struct qemu_syscall *call);
void qemu_CreateEventW(struct qemu_syscall *call);
void qemu_CreateFiber(struct qemu_syscall *call);
void qemu_CreateFiberEx(struct qemu_syscall *call);
void qemu_CreateFile2(struct qemu_syscall *call);
void qemu_CreateFileA(struct qemu_syscall *call);
void qemu_CreateFileMappingA(struct qemu_syscall *call);
void qemu_CreateFileMappingW(struct qemu_syscall *call);
void qemu_CreateFileW(struct qemu_syscall *call);
void qemu_CreateHardLinkA(struct qemu_syscall *call);
void qemu_CreateHardLinkTransactedA(struct qemu_syscall *call);
void qemu_CreateHardLinkTransactedW(struct qemu_syscall *call);
void qemu_CreateHardLinkW(struct qemu_syscall *call);
void qemu_CreateIoCompletionPort(struct qemu_syscall *call);
void qemu_CreateJobObjectA(struct qemu_syscall *call);
void qemu_CreateJobObjectW(struct qemu_syscall *call);
void qemu_CreateMailslotA(struct qemu_syscall *call);
void qemu_CreateMailslotW(struct qemu_syscall *call);
void qemu_CreateMemoryResourceNotification(struct qemu_syscall *call);
void qemu_CreateMutexA(struct qemu_syscall *call);
void qemu_CreateMutexExA(struct qemu_syscall *call);
void qemu_CreateMutexExW(struct qemu_syscall *call);
void qemu_CreateMutexW(struct qemu_syscall *call);
void qemu_CreateNamedPipeA(struct qemu_syscall *call);
void qemu_CreateNamedPipeW(struct qemu_syscall *call);
void qemu_CreatePipe(struct qemu_syscall *call);
void qemu_CreateProcessA(struct qemu_syscall *call);
void qemu_CreateProcessW(struct qemu_syscall *call);
void qemu_CreateRemoteThread(struct qemu_syscall *call);
void qemu_CreateSemaphoreA(struct qemu_syscall *call);
void qemu_CreateSemaphoreExA(struct qemu_syscall *call);
void qemu_CreateSemaphoreExW(struct qemu_syscall *call);
void qemu_CreateSemaphoreW(struct qemu_syscall *call);
void qemu_CreateSocketHandle(struct qemu_syscall *call);
void qemu_CreateSymbolicLinkA(struct qemu_syscall *call);
void qemu_CreateSymbolicLinkW(struct qemu_syscall *call);
void qemu_CreateTapePartition(struct qemu_syscall *call);
void qemu_CreateThread(struct qemu_syscall *call);
void qemu_CreateThreadpool(struct qemu_syscall *call);
void qemu_CreateThreadpoolCleanupGroup(struct qemu_syscall *call);
void qemu_CreateThreadpoolTimer(struct qemu_syscall *call);
void qemu_CreateThreadpoolWait(struct qemu_syscall *call);
void qemu_CreateThreadpoolWork(struct qemu_syscall *call);
void qemu_CreateTimerQueue(struct qemu_syscall *call);
void qemu_CreateTimerQueueTimer(struct qemu_syscall *call);
void qemu_CreateToolhelp32Snapshot(struct qemu_syscall *call);
void qemu_CreateWaitableTimerA(struct qemu_syscall *call);
void qemu_CreateWaitableTimerExA(struct qemu_syscall *call);
void qemu_CreateWaitableTimerExW(struct qemu_syscall *call);
void qemu_CreateWaitableTimerW(struct qemu_syscall *call);
void qemu_DeactivateActCtx(struct qemu_syscall *call);
void qemu_DebugActiveProcess(struct qemu_syscall *call);
void qemu_DebugActiveProcessStop(struct qemu_syscall *call);
void qemu_DebugBreak(struct qemu_syscall *call);
void qemu_DebugBreakProcess(struct qemu_syscall *call);
void qemu_DebugSetProcessKillOnExit(struct qemu_syscall *call);
void qemu_DefineDosDeviceA(struct qemu_syscall *call);
void qemu_DefineDosDeviceW(struct qemu_syscall *call);
void qemu_DelayLoadFailureHook(struct qemu_syscall *call);
void qemu_DeleteAtom(struct qemu_syscall *call);
void qemu_DeleteFiber(struct qemu_syscall *call);
void qemu_DeleteFileA(struct qemu_syscall *call);
void qemu_DeleteFileW(struct qemu_syscall *call);
void qemu_DeleteProcThreadAttributeList(struct qemu_syscall *call);
void qemu_DeleteTimerQueue(struct qemu_syscall *call);
void qemu_DeleteTimerQueueEx(struct qemu_syscall *call);
void qemu_DeleteTimerQueueTimer(struct qemu_syscall *call);
void qemu_DeleteVolumeMountPointA(struct qemu_syscall *call);
void qemu_DeleteVolumeMountPointW(struct qemu_syscall *call);
void qemu_DeviceIoControl(struct qemu_syscall *call);
void qemu_DisableThreadLibraryCalls(struct qemu_syscall *call);
void qemu_DisconnectNamedPipe(struct qemu_syscall *call);
void qemu_DnsHostnameToComputerNameA(struct qemu_syscall *call);
void qemu_DnsHostnameToComputerNameW(struct qemu_syscall *call);
void qemu_DosDateTimeToFileTime(struct qemu_syscall *call);
void qemu_DuplicateHandle(struct qemu_syscall *call);
void qemu_EndUpdateResourceA(struct qemu_syscall *call);
void qemu_EndUpdateResourceW(struct qemu_syscall *call);
void qemu_EnumLanguageGroupLocalesA(struct qemu_syscall *call);
void qemu_EnumLanguageGroupLocalesW(struct qemu_syscall *call);
void qemu_EnumResourceLanguagesA(struct qemu_syscall *call);
void qemu_EnumResourceLanguagesExA(struct qemu_syscall *call);
void qemu_EnumResourceLanguagesExW(struct qemu_syscall *call);
void qemu_EnumResourceLanguagesW(struct qemu_syscall *call);
void qemu_EnumResourceNamesA(struct qemu_syscall *call);
void qemu_EnumResourceNamesW(struct qemu_syscall *call);
void qemu_EnumResourceTypesA(struct qemu_syscall *call);
void qemu_EnumResourceTypesW(struct qemu_syscall *call);
void qemu_EnumSystemCodePagesA(struct qemu_syscall *call);
void qemu_EnumSystemCodePagesW(struct qemu_syscall *call);
void qemu_EnumSystemGeoID(struct qemu_syscall *call);
void qemu_EnumSystemLanguageGroupsA(struct qemu_syscall *call);
void qemu_EnumSystemLanguageGroupsW(struct qemu_syscall *call);
void qemu_EnumSystemLocalesA(struct qemu_syscall *call);
void qemu_EnumSystemLocalesEx(struct qemu_syscall *call);
void qemu_EnumSystemLocalesW(struct qemu_syscall *call);
void qemu_EnumUILanguagesA(struct qemu_syscall *call);
void qemu_EnumUILanguagesW(struct qemu_syscall *call);
void qemu_EraseTape(struct qemu_syscall *call);
void qemu_EscapeCommFunction(struct qemu_syscall *call);
void qemu_ExitProcess(struct qemu_syscall *call);
void qemu_ExitThread(struct qemu_syscall *call);
void qemu_ExpandEnvironmentStringsA(struct qemu_syscall *call);
void qemu_ExpandEnvironmentStringsW(struct qemu_syscall *call);
void qemu_FileTimeToDosDateTime(struct qemu_syscall *call);
void qemu_FileTimeToLocalFileTime(struct qemu_syscall *call);
void qemu_FileTimeToSystemTime(struct qemu_syscall *call);
void qemu_FindActCtxSectionGuid(struct qemu_syscall *call);
void qemu_FindActCtxSectionStringA(struct qemu_syscall *call);
void qemu_FindActCtxSectionStringW(struct qemu_syscall *call);
void qemu_FindAtomA(struct qemu_syscall *call);
void qemu_FindAtomW(struct qemu_syscall *call);
void qemu_FindClose(struct qemu_syscall *call);
void qemu_FindCloseChangeNotification(struct qemu_syscall *call);
void qemu_FindFirstChangeNotificationA(struct qemu_syscall *call);
void qemu_FindFirstChangeNotificationW(struct qemu_syscall *call);
void qemu_FindFirstFileA(struct qemu_syscall *call);
void qemu_FindFirstFileExA(struct qemu_syscall *call);
void qemu_FindFirstFileExW(struct qemu_syscall *call);
void qemu_FindFirstFileW(struct qemu_syscall *call);
void qemu_FindFirstVolumeA(struct qemu_syscall *call);
void qemu_FindFirstVolumeMountPointA(struct qemu_syscall *call);
void qemu_FindFirstVolumeMountPointW(struct qemu_syscall *call);
void qemu_FindFirstVolumeW(struct qemu_syscall *call);
void qemu_FindNextChangeNotification(struct qemu_syscall *call);
void qemu_FindNextFileA(struct qemu_syscall *call);
void qemu_FindNextFileW(struct qemu_syscall *call);
void qemu_FindNextVolumeA(struct qemu_syscall *call);
void qemu_FindNextVolumeW(struct qemu_syscall *call);
void qemu_FindResourceA(struct qemu_syscall *call);
void qemu_FindResourceExA(struct qemu_syscall *call);
void qemu_FindResourceExW(struct qemu_syscall *call);
void qemu_FindResourceW(struct qemu_syscall *call);
void qemu_FindVolumeClose(struct qemu_syscall *call);
void qemu_FindVolumeMountPointClose(struct qemu_syscall *call);
void qemu_FlsAlloc(struct qemu_syscall *call);
void qemu_FlsFree(struct qemu_syscall *call);
void qemu_FlsGetValue(struct qemu_syscall *call);
void qemu_FlsSetValue(struct qemu_syscall *call);
void qemu_FlushFileBuffers(struct qemu_syscall *call);
void qemu_FlushInstructionCache(struct qemu_syscall *call);
void qemu_FlushProcessWriteBuffers(struct qemu_syscall *call);
void qemu_FlushViewOfFile(struct qemu_syscall *call);
void qemu_FoldStringA(struct qemu_syscall *call);
void qemu_FoldStringW(struct qemu_syscall *call);
void qemu_FormatMessage(struct qemu_syscall *call);
void qemu_FreeEnvironmentStringsA(struct qemu_syscall *call);
void qemu_FreeEnvironmentStringsW(struct qemu_syscall *call);
void qemu_FreeLibrary(struct qemu_syscall *call);
void qemu_FreeLibraryAndExitThread(struct qemu_syscall *call);
void qemu_FreeResource(struct qemu_syscall *call);
void qemu_FreeUserPhysicalPages(struct qemu_syscall *call);
void qemu_GetACP(struct qemu_syscall *call);
void qemu_GetActiveProcessorCount(struct qemu_syscall *call);
void qemu_GetActiveProcessorGroupCount(struct qemu_syscall *call);
void qemu_GetAtomNameA(struct qemu_syscall *call);
void qemu_GetAtomNameW(struct qemu_syscall *call);
void qemu_GetBinaryTypeA(struct qemu_syscall *call);
void qemu_GetBinaryTypeW(struct qemu_syscall *call);
void qemu_GetCalendarInfoA(struct qemu_syscall *call);
void qemu_GetCalendarInfoEx(struct qemu_syscall *call);
void qemu_GetCalendarInfoW(struct qemu_syscall *call);
void qemu_GetCommandLineA(struct qemu_syscall *c);
void qemu_GetCommandLineA(struct qemu_syscall *call);
void qemu_GetCommandLineW(struct qemu_syscall *c);
void qemu_GetCommandLineW(struct qemu_syscall *call);
void qemu_GetCommConfig(struct qemu_syscall *call);
void qemu_GetCommMask(struct qemu_syscall *call);
void qemu_GetCommModemStatus(struct qemu_syscall *call);
void qemu_GetCommProperties(struct qemu_syscall *call);
void qemu_GetCommState(struct qemu_syscall *call);
void qemu_GetCommTimeouts(struct qemu_syscall *call);
void qemu_GetCompressedFileSizeA(struct qemu_syscall *call);
void qemu_GetCompressedFileSizeW(struct qemu_syscall *call);
void qemu_GetComputerNameA(struct qemu_syscall *call);
void qemu_GetComputerNameExA(struct qemu_syscall *call);
void qemu_GetComputerNameExW(struct qemu_syscall *call);
void qemu_GetComputerNameW(struct qemu_syscall *call);
void qemu_GetCPInfo(struct qemu_syscall *call);
void qemu_GetCPInfoExA(struct qemu_syscall *call);
void qemu_GetCPInfoExW(struct qemu_syscall *call);
void qemu_GetCurrentActCtx(struct qemu_syscall *call);
void qemu_GetCurrentDirectoryA(struct qemu_syscall *call);
void qemu_GetCurrentDirectoryW(struct qemu_syscall *call);
void qemu_GetCurrentProcess(struct qemu_syscall *call);
void qemu_GetCurrentProcessId(struct qemu_syscall *call);
void qemu_GetCurrentThread(struct qemu_syscall *call);
void qemu_GetCurrentThreadId(struct qemu_syscall *call);
void qemu_GetDateFormatA(struct qemu_syscall *call);
void qemu_GetDateFormatW(struct qemu_syscall *call);
void qemu_GetDaylightFlag(struct qemu_syscall *call);
void qemu_GetDefaultCommConfigA(struct qemu_syscall *call);
void qemu_GetDefaultCommConfigW(struct qemu_syscall *call);
void qemu_GetDevicePowerState(struct qemu_syscall *call);
void qemu_GetDiskFreeSpaceA(struct qemu_syscall *call);
void qemu_GetDiskFreeSpaceExA(struct qemu_syscall *call);
void qemu_GetDiskFreeSpaceExW(struct qemu_syscall *call);
void qemu_GetDiskFreeSpaceW(struct qemu_syscall *call);
void qemu_GetDllDirectoryA(struct qemu_syscall *call);
void qemu_GetDllDirectoryW(struct qemu_syscall *call);
void qemu_GetDriveTypeA(struct qemu_syscall *call);
void qemu_GetDriveTypeW(struct qemu_syscall *call);
void qemu_GetDynamicTimeZoneInformation(struct qemu_syscall *call);
void qemu_GetEnvironmentStringsA(struct qemu_syscall *call);
void qemu_GetEnvironmentStringsW(struct qemu_syscall *call);
void qemu_GetEnvironmentVariableA(struct qemu_syscall *call);
void qemu_GetEnvironmentVariableW(struct qemu_syscall *call);
void qemu_GetErrorMode(struct qemu_syscall *call);
void qemu_GetExitCodeProcess(struct qemu_syscall *call);
void qemu_GetExitCodeThread(struct qemu_syscall *call);
void qemu_GetExpandedNameA(struct qemu_syscall *call);
void qemu_GetExpandedNameW(struct qemu_syscall *call);
void qemu_GetFileAttributesA(struct qemu_syscall *call);
void qemu_GetFileAttributesExA(struct qemu_syscall *call);
void qemu_GetFileAttributesExW(struct qemu_syscall *call);
void qemu_GetFileAttributesW(struct qemu_syscall *call);
void qemu_GetFileInformationByHandle(struct qemu_syscall *call);
void qemu_GetFileInformationByHandleEx(struct qemu_syscall *call);
void qemu_GetFileMUIInfo(struct qemu_syscall *call);
void qemu_GetFileMUIPath(struct qemu_syscall *call);
void qemu_GetFileSize(struct qemu_syscall *call);
void qemu_GetFileSizeEx(struct qemu_syscall *call);
void qemu_GetFileTime(struct qemu_syscall *call);
void qemu_GetFileType(struct qemu_syscall *call);
void qemu_GetFinalPathNameByHandleA(struct qemu_syscall *call);
void qemu_GetFinalPathNameByHandleW(struct qemu_syscall *call);
void qemu_GetFirmwareEnvironmentVariableA(struct qemu_syscall *call);
void qemu_GetFirmwareEnvironmentVariableW(struct qemu_syscall *call);
void qemu_GetFullPathNameA(struct qemu_syscall *call);
void qemu_GetFullPathNameW(struct qemu_syscall *call);
void qemu_GetGeoInfoA(struct qemu_syscall *call);
void qemu_GetGeoInfoW(struct qemu_syscall *call);
void qemu_GetHandleContext(struct qemu_syscall *call);
void qemu_GetHandleInformation(struct qemu_syscall *call);
void qemu_GetLargePageMinimum(struct qemu_syscall *call);
void qemu_GetLastError(struct qemu_syscall *call);
void qemu_GetLocaleInfoA(struct qemu_syscall *call);
void qemu_GetLocaleInfoEx(struct qemu_syscall *call);
void qemu_GetLocaleInfoW(struct qemu_syscall *call);
void qemu_GetLocalTime(struct qemu_syscall *call);
void qemu_GetLogicalDrives(struct qemu_syscall *call);
void qemu_GetLogicalDriveStringsA(struct qemu_syscall *call);
void qemu_GetLogicalDriveStringsW(struct qemu_syscall *call);
void qemu_GetLogicalProcessorInformation(struct qemu_syscall *call);
void qemu_GetLogicalProcessorInformationEx(struct qemu_syscall *call);
void qemu_GetLongPathNameA(struct qemu_syscall *call);
void qemu_GetLongPathNameW(struct qemu_syscall *call);
void qemu_GetMailslotInfo(struct qemu_syscall *call);
void qemu_GetModuleFileNameA(struct qemu_syscall *call);
void qemu_GetModuleFileNameW(struct qemu_syscall *call);
void qemu_GetModuleHandleA(struct qemu_syscall *call);
void qemu_GetModuleHandleExA(struct qemu_syscall *call);
void qemu_GetModuleHandleExW(struct qemu_syscall *call);
void qemu_GetModuleHandleW(struct qemu_syscall *call);
void qemu_GetNamedPipeHandleStateA(struct qemu_syscall *call);
void qemu_GetNamedPipeHandleStateW(struct qemu_syscall *call);
void qemu_GetNamedPipeInfo(struct qemu_syscall *call);
void qemu_GetNativeSystemInfo(struct qemu_syscall *call);
void qemu_GetNumaAvailableMemoryNode(struct qemu_syscall *call);
void qemu_GetNumaHighestNodeNumber(struct qemu_syscall *call);
void qemu_GetNumaNodeProcessorMask(struct qemu_syscall *call);
void qemu_GetNumaProcessorNode(struct qemu_syscall *call);
void qemu_GetOEMCP(struct qemu_syscall *call);
void qemu_GetOverlappedResult(struct qemu_syscall *call);
void qemu_GetPhysicallyInstalledSystemMemory(struct qemu_syscall *call);
void qemu_GetPriorityClass(struct qemu_syscall *call);
void qemu_GetPrivateProfileIntA(struct qemu_syscall *call);
void qemu_GetPrivateProfileIntW(struct qemu_syscall *call);
void qemu_GetPrivateProfileSectionA(struct qemu_syscall *call);
void qemu_GetPrivateProfileSectionNamesA(struct qemu_syscall *call);
void qemu_GetPrivateProfileSectionNamesW(struct qemu_syscall *call);
void qemu_GetPrivateProfileSectionW(struct qemu_syscall *call);
void qemu_GetPrivateProfileStringA(struct qemu_syscall *call);
void qemu_GetPrivateProfileStringW(struct qemu_syscall *call);
void qemu_GetPrivateProfileStructA(struct qemu_syscall *call);
void qemu_GetPrivateProfileStructW(struct qemu_syscall *call);
void qemu_GetProcAddress(struct qemu_syscall *call);
void qemu_GetProcessAffinityMask(struct qemu_syscall *call);
void qemu_GetProcessDEPPolicy(struct qemu_syscall *call);
void qemu_GetProcessFlags(struct qemu_syscall *call);
void qemu_GetProcessHandleCount(struct qemu_syscall *call);
void qemu_GetProcessHeap(struct qemu_syscall *call);
void qemu_GetProcessHeaps(struct qemu_syscall *call);
void qemu_GetProcessId(struct qemu_syscall *call);
void qemu_GetProcessIdOfThread(struct qemu_syscall *call);
void qemu_GetProcessIoCounters(struct qemu_syscall *call);
void qemu_GetProcessPriorityBoost(struct qemu_syscall *call);
void qemu_GetProcessShutdownParameters(struct qemu_syscall *call);
void qemu_GetProcessTimes(struct qemu_syscall *call);
void qemu_GetProcessVersion(struct qemu_syscall *call);
void qemu_GetProcessWorkingSetSize(struct qemu_syscall *call);
void qemu_GetProfileIntA(struct qemu_syscall *call);
void qemu_GetProfileIntW(struct qemu_syscall *call);
void qemu_GetProfileSectionA(struct qemu_syscall *call);
void qemu_GetProfileSectionW(struct qemu_syscall *call);
void qemu_GetProfileStringA(struct qemu_syscall *call);
void qemu_GetProfileStringW(struct qemu_syscall *call);
void qemu_GetQueuedCompletionStatus(struct qemu_syscall *call);
void qemu_GetShortPathNameA(struct qemu_syscall *call);
void qemu_GetShortPathNameW(struct qemu_syscall *call);
void qemu_GetStartupInfoA(struct qemu_syscall *call);
void qemu_GetStartupInfoW(struct qemu_syscall *call);
void qemu_GetStdHandle(struct qemu_syscall *call);
void qemu_GetStringTypeA(struct qemu_syscall *call);
void qemu_GetStringTypeExA(struct qemu_syscall *call);
void qemu_GetStringTypeExW(struct qemu_syscall *call);
void qemu_GetStringTypeW(struct qemu_syscall *call);
void qemu_GetSystemDefaultLangID(struct qemu_syscall *call);
void qemu_GetSystemDefaultLCID(struct qemu_syscall *call);
void qemu_GetSystemDefaultLocaleName(struct qemu_syscall *call);
void qemu_GetSystemDefaultUILanguage(struct qemu_syscall *call);
void qemu_GetSystemDEPPolicy(struct qemu_syscall *call);
void qemu_GetSystemDirectoryA(struct qemu_syscall *call);
void qemu_GetSystemDirectoryW(struct qemu_syscall *call);
void qemu_GetSystemFileCacheSize(struct qemu_syscall *call);
void qemu_GetSystemFirmwareTable(struct qemu_syscall *call);
void qemu_GetSystemInfo(struct qemu_syscall *call);
void qemu_GetSystemPowerStatus(struct qemu_syscall *call);
void qemu_GetSystemPreferredUILanguages(struct qemu_syscall *call);
void qemu_GetSystemTime(struct qemu_syscall *call);
void qemu_GetSystemTimeAdjustment(struct qemu_syscall *call);
void qemu_GetSystemTimeAsFileTime(struct qemu_syscall *call);
void qemu_GetSystemTimePreciseAsFileTime(struct qemu_syscall *call);
void qemu_GetSystemTimes(struct qemu_syscall *call);
void qemu_GetSystemWindowsDirectoryA(struct qemu_syscall *call);
void qemu_GetSystemWindowsDirectoryW(struct qemu_syscall *call);
void qemu_GetSystemWow64DirectoryA(struct qemu_syscall *call);
void qemu_GetSystemWow64DirectoryW(struct qemu_syscall *call);
void qemu_GetTapeParameters(struct qemu_syscall *call);
void qemu_GetTapePosition(struct qemu_syscall *call);
void qemu_GetTapeStatus(struct qemu_syscall *call);
void qemu_GetTempFileNameA(struct qemu_syscall *call);
void qemu_GetTempFileNameW(struct qemu_syscall *call);
void qemu_GetTempPathA(struct qemu_syscall *call);
void qemu_GetTempPathW(struct qemu_syscall *call);
void qemu_GetThreadContext(struct qemu_syscall *call);
void qemu_GetThreadErrorMode(struct qemu_syscall *call);
void qemu_GetThreadGroupAffinity(struct qemu_syscall *call);
void qemu_GetThreadId(struct qemu_syscall *call);
void qemu_GetThreadIOPendingFlag(struct qemu_syscall *call);
void qemu_GetThreadLocale(struct qemu_syscall *call);
void qemu_GetThreadPreferredUILanguages(struct qemu_syscall *call);
void qemu_GetThreadPriority(struct qemu_syscall *call);
void qemu_GetThreadPriorityBoost(struct qemu_syscall *call);
void qemu_GetThreadSelectorEntry(struct qemu_syscall *call);
void qemu_GetThreadTimes(struct qemu_syscall *call);
void qemu_GetThreadUILanguage(struct qemu_syscall *call);
void qemu_GetTickCount(struct qemu_syscall *call);
void qemu_GetTimeFormatA(struct qemu_syscall *call);
void qemu_GetTimeFormatW(struct qemu_syscall *call);
void qemu_GetTimeZoneInformation(struct qemu_syscall *call);
void qemu_GetTimeZoneInformationForYear(struct qemu_syscall *call);
void qemu_GetUserDefaultLangID(struct qemu_syscall *call);
void qemu_GetUserDefaultLCID(struct qemu_syscall *call);
void qemu_GetUserDefaultLocaleName(struct qemu_syscall *call);
void qemu_GetUserDefaultUILanguage(struct qemu_syscall *call);
void qemu_GetUserGeoID(struct qemu_syscall *call);
void qemu_GetUserPreferredUILanguages(struct qemu_syscall *call);
void qemu_GetVersion(struct qemu_syscall *call);
void qemu_GetVersionExA(struct qemu_syscall *call);
void qemu_GetVersionExW(struct qemu_syscall *call);
void qemu_GetVolumeInformationA(struct qemu_syscall *call);
void qemu_GetVolumeInformationByHandleW(struct qemu_syscall *call);
void qemu_GetVolumeInformationW(struct qemu_syscall *call);
void qemu_GetVolumeNameForVolumeMountPointA(struct qemu_syscall *call);
void qemu_GetVolumeNameForVolumeMountPointW(struct qemu_syscall *call);
void qemu_GetVolumePathNameA(struct qemu_syscall *call);
void qemu_GetVolumePathNamesForVolumeNameA(struct qemu_syscall *call);
void qemu_GetVolumePathNamesForVolumeNameW(struct qemu_syscall *call);
void qemu_GetVolumePathNameW(struct qemu_syscall *call);
void qemu_GetWindowsDirectoryA(struct qemu_syscall *call);
void qemu_GetWindowsDirectoryW(struct qemu_syscall *call);
void qemu_GetWriteWatch(struct qemu_syscall *call);
void qemu_GlobalAddAtomA(struct qemu_syscall *call);
void qemu_GlobalAddAtomW(struct qemu_syscall *call);
void qemu_GlobalAlloc(struct qemu_syscall *call);
void qemu_GlobalCompact(struct qemu_syscall *call);
void qemu_GlobalDeleteAtom(struct qemu_syscall *call);
void qemu_GlobalFindAtomA(struct qemu_syscall *call);
void qemu_GlobalFindAtomW(struct qemu_syscall *call);
void qemu_GlobalFix(struct qemu_syscall *call);
void qemu_GlobalFlags(struct qemu_syscall *call);
void qemu_GlobalFree(struct qemu_syscall *call);
void qemu_GlobalGetAtomNameA(struct qemu_syscall *call);
void qemu_GlobalGetAtomNameW(struct qemu_syscall *call);
void qemu_GlobalHandle(struct qemu_syscall *call);
void qemu_GlobalLock(struct qemu_syscall *call);
void qemu_GlobalMemoryStatus(struct qemu_syscall *call);
void qemu_GlobalMemoryStatusEx(struct qemu_syscall *call);
void qemu_GlobalReAlloc(struct qemu_syscall *call);
void qemu_GlobalSize(struct qemu_syscall *call);
void qemu_GlobalUnfix(struct qemu_syscall *call);
void qemu_GlobalUnlock(struct qemu_syscall *call);
void qemu_GlobalUnWire(struct qemu_syscall *call);
void qemu_GlobalWire(struct qemu_syscall *call);
void qemu_Heap32ListFirst(struct qemu_syscall *call);
void qemu_HeapAlloc(struct qemu_syscall *call);
void qemu_HeapCompact(struct qemu_syscall *call);
void qemu_HeapCreate(struct qemu_syscall *call);
void qemu_HeapDestroy(struct qemu_syscall *call);
void qemu_HeapFree(struct qemu_syscall *call);
void qemu_HeapLock(struct qemu_syscall *call);
void qemu_HeapQueryInformation(struct qemu_syscall *call);
void qemu_HeapReAlloc(struct qemu_syscall *call);
void qemu_HeapSetInformation(struct qemu_syscall *call);
void qemu_HeapSize(struct qemu_syscall *call);
void qemu_HeapUnlock(struct qemu_syscall *call);
void qemu_HeapValidate(struct qemu_syscall *call);
void qemu_HeapWalk(struct qemu_syscall *call);
void qemu_IdnToAscii(struct qemu_syscall *call);
void qemu_IdnToNameprepUnicode(struct qemu_syscall *call);
void qemu_IdnToUnicode(struct qemu_syscall *call);
void qemu_InitAtomTable(struct qemu_syscall *call);
void qemu_InitializeCriticalSection(struct qemu_syscall *call);
void qemu_InitializeCriticalSectionAndSpinCount(struct qemu_syscall *call);
void qemu_InitializeProcThreadAttributeList(struct qemu_syscall *call);
void qemu_InitOnceBeginInitialize(struct qemu_syscall *call);
void qemu_InitOnceComplete(struct qemu_syscall *call);
void qemu_InitOnceExecuteOnce(struct qemu_syscall *call);
void qemu_InvalidateNLSCache(struct qemu_syscall *call);
void qemu_IsBadCodePtr(struct qemu_syscall *call);
void qemu_IsBadHugeReadPtr(struct qemu_syscall *call);
void qemu_IsBadHugeWritePtr(struct qemu_syscall *call);
void qemu_IsBadReadPtr(struct qemu_syscall *call);
void qemu_IsBadStringPtrA(struct qemu_syscall *call);
void qemu_IsBadStringPtrW(struct qemu_syscall *call);
void qemu_IsBadWritePtr(struct qemu_syscall *call);
void qemu_IsDBCSLeadByte(struct qemu_syscall *call);
void qemu_IsDBCSLeadByteEx(struct qemu_syscall *call);
void qemu_IsDebuggerPresent(struct qemu_syscall *call);
void qemu_IsNormalizedString(struct qemu_syscall *call);
void qemu_IsProcessInJob(struct qemu_syscall *call);
void qemu_IsProcessorFeaturePresent(struct qemu_syscall *call);
void qemu_IsSystemResumeAutomatic(struct qemu_syscall *call);
void qemu_IsThreadAFiber(struct qemu_syscall *call);
void qemu_IsValidCodePage(struct qemu_syscall *call);
void qemu_IsValidLanguageGroup(struct qemu_syscall *call);
void qemu_IsValidLocale(struct qemu_syscall *call);
void qemu_IsValidLocaleName(struct qemu_syscall *call);
void qemu_IsWow64Process(struct qemu_syscall *call);
void qemu_K32EmptyWorkingSet(struct qemu_syscall *call);
void qemu_K32EnumDeviceDrivers(struct qemu_syscall *call);
void qemu_K32EnumPageFilesA(struct qemu_syscall *call);
void qemu_K32EnumPageFilesW(struct qemu_syscall *call);
void qemu_K32EnumProcesses(struct qemu_syscall *call);
void qemu_K32EnumProcessModules(struct qemu_syscall *call);
void qemu_K32EnumProcessModulesEx(struct qemu_syscall *call);
void qemu_K32GetDeviceDriverBaseNameA(struct qemu_syscall *call);
void qemu_K32GetDeviceDriverBaseNameW(struct qemu_syscall *call);
void qemu_K32GetDeviceDriverFileNameA(struct qemu_syscall *call);
void qemu_K32GetDeviceDriverFileNameW(struct qemu_syscall *call);
void qemu_K32GetMappedFileNameA(struct qemu_syscall *call);
void qemu_K32GetMappedFileNameW(struct qemu_syscall *call);
void qemu_K32GetModuleBaseNameA(struct qemu_syscall *call);
void qemu_K32GetModuleBaseNameW(struct qemu_syscall *call);
void qemu_K32GetModuleFileNameExA(struct qemu_syscall *call);
void qemu_K32GetModuleFileNameExW(struct qemu_syscall *call);
void qemu_K32GetModuleInformation(struct qemu_syscall *call);
void qemu_K32GetPerformanceInfo(struct qemu_syscall *call);
void qemu_K32GetProcessImageFileNameA(struct qemu_syscall *call);
void qemu_K32GetProcessImageFileNameW(struct qemu_syscall *call);
void qemu_K32GetProcessMemoryInfo(struct qemu_syscall *call);
void qemu_K32GetWsChanges(struct qemu_syscall *call);
void qemu_K32InitializeProcessForWsWatch(struct qemu_syscall *call);
void qemu_K32QueryWorkingSet(struct qemu_syscall *call);
void qemu_K32QueryWorkingSetEx(struct qemu_syscall *call);
void qemu_LCIDToLocaleName(struct qemu_syscall *call);
void qemu_LCMapStringA(struct qemu_syscall *call);
void qemu_LCMapStringEx(struct qemu_syscall *call);
void qemu_LCMapStringW(struct qemu_syscall *call);
void qemu_LoadLibraryA(struct qemu_syscall *call);
void qemu_LoadLibraryExA(struct qemu_syscall *call);
void qemu_LoadLibraryExW(struct qemu_syscall *call);
void qemu_LoadLibraryW(struct qemu_syscall *call);
void qemu_LoadModule(struct qemu_syscall *call);
void qemu_LoadResource(struct qemu_syscall *call);
void qemu_LocalAlloc(struct qemu_syscall *call);
void qemu_LocalCompact(struct qemu_syscall *call);
void qemu_LocaleNameToLCID(struct qemu_syscall *call);
void qemu_LocalFileTimeToFileTime(struct qemu_syscall *call);
void qemu_LocalFlags(struct qemu_syscall *call);
void qemu_LocalFree(struct qemu_syscall *call);
void qemu_LocalHandle(struct qemu_syscall *call);
void qemu_LocalLock(struct qemu_syscall *call);
void qemu_LocalReAlloc(struct qemu_syscall *call);
void qemu_LocalShrink(struct qemu_syscall *call);
void qemu_LocalSize(struct qemu_syscall *call);
void qemu_LocalUnlock(struct qemu_syscall *call);
void qemu_LockFile(struct qemu_syscall *call);
void qemu_LockFileEx(struct qemu_syscall *call);
void qemu_LockResource(struct qemu_syscall *call);
void qemu_lstrcatA(struct qemu_syscall *call);
void qemu_lstrcatW(struct qemu_syscall *call);
void qemu_lstrcmpA(struct qemu_syscall *call);
void qemu_lstrcmpiA(struct qemu_syscall *call);
void qemu_lstrcmpiW(struct qemu_syscall *call);
void qemu_lstrcmpW(struct qemu_syscall *call);
void qemu_lstrcpyA(struct qemu_syscall *call);
void qemu_lstrcpynA(struct qemu_syscall *call);
void qemu_lstrcpynW(struct qemu_syscall *call);
void qemu_lstrcpyW(struct qemu_syscall *call);
void qemu_lstrlenA(struct qemu_syscall *call);
void qemu_lstrlenW(struct qemu_syscall *call);
void qemu_LZClose(struct qemu_syscall *call);
void qemu_LZCopy(struct qemu_syscall *call);
void qemu_LZDone(struct qemu_syscall *call);
void qemu_LZInit(struct qemu_syscall *call);
void qemu_LZOpenFileA(struct qemu_syscall *call);
void qemu_LZOpenFileW(struct qemu_syscall *call);
void qemu_LZRead(struct qemu_syscall *call);
void qemu_LZSeek(struct qemu_syscall *call);
void qemu_LZStart(struct qemu_syscall *call);
void qemu_MakeCriticalSectionGlobal(struct qemu_syscall *call);
void qemu_MapViewOfFile(struct qemu_syscall *call);
void qemu_MapViewOfFileEx(struct qemu_syscall *call);
void qemu_Module32First(struct qemu_syscall *call);
void qemu_Module32FirstW(struct qemu_syscall *call);
void qemu_Module32Next(struct qemu_syscall *call);
void qemu_Module32NextW(struct qemu_syscall *call);
void qemu_MoveFileA(struct qemu_syscall *call);
void qemu_MoveFileExA(struct qemu_syscall *call);
void qemu_MoveFileExW(struct qemu_syscall *call);
void qemu_MoveFileW(struct qemu_syscall *call);
void qemu_MoveFileWithProgressA(struct qemu_syscall *call);
void qemu_MoveFileWithProgressW(struct qemu_syscall *call);
void qemu_MultiByteToWideChar(struct qemu_syscall *call);
void qemu_NeedCurrentDirectoryForExePathA(struct qemu_syscall *call);
void qemu_NeedCurrentDirectoryForExePathW(struct qemu_syscall *call);
void qemu_NormalizeString(struct qemu_syscall *call);
void qemu_OpenEventA(struct qemu_syscall *call);
void qemu_OpenEventW(struct qemu_syscall *call);
void qemu_OpenFile(struct qemu_syscall *call);
void qemu_OpenFileById(struct qemu_syscall *call);
void qemu_OpenFileMappingA(struct qemu_syscall *call);
void qemu_OpenFileMappingW(struct qemu_syscall *call);
void qemu_OpenJobObjectA(struct qemu_syscall *call);
void qemu_OpenJobObjectW(struct qemu_syscall *call);
void qemu_OpenMutexA(struct qemu_syscall *call);
void qemu_OpenMutexW(struct qemu_syscall *call);
void qemu_OpenProcess(struct qemu_syscall *call);
void qemu_OpenProfileUserMapping(struct qemu_syscall *call);
void qemu_OpenSemaphoreA(struct qemu_syscall *call);
void qemu_OpenSemaphoreW(struct qemu_syscall *call);
void qemu_OpenThread(struct qemu_syscall *call);
void qemu_OpenVxDHandle(struct qemu_syscall *call);
void qemu_OpenWaitableTimerA(struct qemu_syscall *call);
void qemu_OpenWaitableTimerW(struct qemu_syscall *call);
void qemu_OutputDebugStringA(struct qemu_syscall *call);
void qemu_OutputDebugStringW(struct qemu_syscall *call);
void qemu_PeekNamedPipe(struct qemu_syscall *call);
void qemu_PostQueuedCompletionStatus(struct qemu_syscall *call);
void qemu_PowerClearRequest(struct qemu_syscall *call);
void qemu_PowerCreateRequest(struct qemu_syscall *call);
void qemu_PowerSetRequest(struct qemu_syscall *call);
void qemu_PrepareTape(struct qemu_syscall *call);
void qemu_Process32First(struct qemu_syscall *call);
void qemu_Process32FirstW(struct qemu_syscall *call);
void qemu_Process32Next(struct qemu_syscall *call);
void qemu_Process32NextW(struct qemu_syscall *call);
void qemu_ProcessIdToSessionId(struct qemu_syscall *call);
void qemu_PulseEvent(struct qemu_syscall *call);
void qemu_PurgeComm(struct qemu_syscall *call);
void qemu_QueryActCtxW(struct qemu_syscall *call);
void qemu_QueryDosDeviceA(struct qemu_syscall *call);
void qemu_QueryDosDeviceW(struct qemu_syscall *call);
void qemu_QueryFullProcessImageNameA(struct qemu_syscall *call);
void qemu_QueryFullProcessImageNameW(struct qemu_syscall *call);
void qemu_QueryInformationJobObject(struct qemu_syscall *call);
void qemu_QueryMemoryResourceNotification(struct qemu_syscall *call);
void qemu_QueryPerformanceCounter(struct qemu_syscall *call);
void qemu_QueryPerformanceFrequency(struct qemu_syscall *call);
void qemu_QueryThreadCycleTime(struct qemu_syscall *call);
void qemu_QueryUnbiasedInterruptTime(struct qemu_syscall *call);
void qemu_QueueUserAPC(struct qemu_syscall *call);
void qemu_QueueUserWorkItem(struct qemu_syscall *call);
void qemu_ReadDirectoryChangesW(struct qemu_syscall *call);
void qemu_ReadFile(struct qemu_syscall *call);
void qemu_ReadFileEx(struct qemu_syscall *call);
void qemu_ReadFileScatter(struct qemu_syscall *call);
void qemu_ReadProcessMemory(struct qemu_syscall *call);
void qemu_RegisterApplicationRecoveryCallback(struct qemu_syscall *call);
void qemu_RegisterApplicationRestart(struct qemu_syscall *call);
void qemu_RegisterServiceProcess(struct qemu_syscall *call);
void qemu_RegisterWaitForSingleObject(struct qemu_syscall *call);
void qemu_RegisterWaitForSingleObjectEx(struct qemu_syscall *call);
void qemu_ReinitializeCriticalSection(struct qemu_syscall *call);
void qemu_ReleaseActCtx(struct qemu_syscall *call);
void qemu_ReleaseMutex(struct qemu_syscall *call);
void qemu_ReleaseSemaphore(struct qemu_syscall *call);
void qemu_RemoveDirectoryA(struct qemu_syscall *call);
void qemu_RemoveDirectoryW(struct qemu_syscall *call);
void qemu_ReplaceFileA(struct qemu_syscall *call);
void qemu_ReplaceFileW(struct qemu_syscall *call);
void qemu_RequestWakeupLatency(struct qemu_syscall *call);
void qemu_ResetEvent(struct qemu_syscall *call);
void qemu_ResetWriteWatch(struct qemu_syscall *call);
void qemu_ResumeThread(struct qemu_syscall *call);
void qemu_SearchPathA(struct qemu_syscall *call);
void qemu_SearchPathW(struct qemu_syscall *call);
void qemu_SetCalendarInfoA(struct qemu_syscall *call);
void qemu_SetCalendarInfoW(struct qemu_syscall *call);
void qemu_SetCommBreak(struct qemu_syscall *call);
void qemu_SetCommConfig(struct qemu_syscall *call);
void qemu_SetCommMask(struct qemu_syscall *call);
void qemu_SetCommState(struct qemu_syscall *call);
void qemu_SetCommTimeouts(struct qemu_syscall *call);
void qemu_SetComputerNameA(struct qemu_syscall *call);
void qemu_SetComputerNameExA(struct qemu_syscall *call);
void qemu_SetComputerNameExW(struct qemu_syscall *call);
void qemu_SetComputerNameW(struct qemu_syscall *call);
void qemu_SetConsoleCtrlHandler(struct qemu_syscall *call);
void qemu_SetCPGlobal(struct qemu_syscall *call);
void qemu_SetCurrentDirectoryA(struct qemu_syscall *call);
void qemu_SetCurrentDirectoryW(struct qemu_syscall *call);
void qemu_SetDefaultCommConfigA(struct qemu_syscall *call);
void qemu_SetDefaultCommConfigW(struct qemu_syscall *call);
void qemu_SetDefaultDllDirectories(struct qemu_syscall *call);
void qemu_SetDllDirectoryA(struct qemu_syscall *call);
void qemu_SetDllDirectoryW(struct qemu_syscall *call);
void qemu_SetEndOfFile(struct qemu_syscall *call);
void qemu_SetEnvironmentVariableA(struct qemu_syscall *call);
void qemu_SetEnvironmentVariableW(struct qemu_syscall *call);
void qemu_SetErrorMode(struct qemu_syscall *call);
void qemu_SetEvent(struct qemu_syscall *call);
void qemu_SetFileApisToANSI(struct qemu_syscall *call);
void qemu_SetFileApisToOEM(struct qemu_syscall *call);
void qemu_SetFileAttributesA(struct qemu_syscall *call);
void qemu_SetFileAttributesW(struct qemu_syscall *call);
void qemu_SetFileCompletionNotificationModes(struct qemu_syscall *call);
void qemu_SetFileInformationByHandle(struct qemu_syscall *call);
void qemu_SetFilePointer(struct qemu_syscall *call);
void qemu_SetFilePointerEx(struct qemu_syscall *call);
void qemu_SetFileTime(struct qemu_syscall *call);
void qemu_SetFileValidData(struct qemu_syscall *call);
void qemu_SetHandleContext(struct qemu_syscall *call);
void qemu_SetHandleCount(struct qemu_syscall *call);
void qemu_SetHandleInformation(struct qemu_syscall *call);
void qemu_SetInformationJobObject(struct qemu_syscall *call);
void qemu_SetLastError(struct qemu_syscall *call);
void qemu_SetLocaleInfoA(struct qemu_syscall *call);
void qemu_SetLocaleInfoW(struct qemu_syscall *call);
void qemu_SetLocalTime(struct qemu_syscall *call);
void qemu_SetMailslotInfo(struct qemu_syscall *call);
void qemu_SetNamedPipeHandleState(struct qemu_syscall *call);
void qemu_SetPriorityClass(struct qemu_syscall *call);
void qemu_SetProcessAffinityMask(struct qemu_syscall *call);
void qemu_SetProcessDEPPolicy(struct qemu_syscall *call);
void qemu_SetProcessPriorityBoost(struct qemu_syscall *call);
void qemu_SetProcessShutdownParameters(struct qemu_syscall *call);
void qemu_SetProcessWorkingSetSize(struct qemu_syscall *call);
void qemu_SetSearchPathMode(struct qemu_syscall *call);
void qemu_SetStdHandle(struct qemu_syscall *call);
void qemu_SetSystemFileCacheSize(struct qemu_syscall *call);
void qemu_SetSystemPowerState(struct qemu_syscall *call);
void qemu_SetSystemTime(struct qemu_syscall *call);
void qemu_SetSystemTimeAdjustment(struct qemu_syscall *call);
void qemu_SetTapeParameters(struct qemu_syscall *call);
void qemu_SetTapePosition(struct qemu_syscall *call);
void qemu_SetThreadAffinityMask(struct qemu_syscall *call);
void qemu_SetThreadContext(struct qemu_syscall *call);
void qemu_SetThreadErrorMode(struct qemu_syscall *call);
void qemu_SetThreadExecutionState(struct qemu_syscall *call);
void qemu_SetThreadGroupAffinity(struct qemu_syscall *call);
void qemu_SetThreadIdealProcessor(struct qemu_syscall *call);
void qemu_SetThreadIdealProcessorEx(struct qemu_syscall *call);
void qemu_SetThreadLocale(struct qemu_syscall *call);
void qemu_SetThreadpoolTimer(struct qemu_syscall *call);
void qemu_SetThreadpoolWait(struct qemu_syscall *call);
void qemu_SetThreadPreferredUILanguages(struct qemu_syscall *call);
void qemu_SetThreadPriority(struct qemu_syscall *call);
void qemu_SetThreadPriorityBoost(struct qemu_syscall *call);
void qemu_SetThreadStackGuarantee(struct qemu_syscall *call);
void qemu_SetThreadUILanguage(struct qemu_syscall *call);
void qemu_SetTimeZoneInformation(struct qemu_syscall *call);
void qemu_SetUnhandledExceptionFilter(struct qemu_syscall *call);
void qemu_SetupComm(struct qemu_syscall *call);
void qemu_SetUserGeoID(struct qemu_syscall *call);
void qemu_SetVolumeLabelA(struct qemu_syscall *call);
void qemu_SetVolumeLabelW(struct qemu_syscall *call);
void qemu_SetVolumeMountPointA(struct qemu_syscall *call);
void qemu_SetVolumeMountPointW(struct qemu_syscall *call);
void qemu_SetWaitableTimer(struct qemu_syscall *call);
void qemu_SetWaitableTimerEx(struct qemu_syscall *call);
void qemu_SignalObjectAndWait(struct qemu_syscall *call);
void qemu_SizeofResource(struct qemu_syscall *call);
void qemu_Sleep(struct qemu_syscall *call);
void qemu_SleepConditionVariableCS(struct qemu_syscall *call);
void qemu_SleepConditionVariableSRW(struct qemu_syscall *call);
void qemu_SleepEx(struct qemu_syscall *call);
void qemu_SuspendThread(struct qemu_syscall *call);
void qemu_SwitchToFiber(struct qemu_syscall *call);
void qemu_SwitchToThread(struct qemu_syscall *call);
void qemu_SystemTimeToFileTime(struct qemu_syscall *call);
void qemu_SystemTimeToTzSpecificLocalTime(struct qemu_syscall *call);
void qemu_TerminateJobObject(struct qemu_syscall *call);
void qemu_TerminateProcess(struct qemu_syscall *call);
void qemu_TerminateThread(struct qemu_syscall *call);
void qemu_Thread32First(struct qemu_syscall *call);
void qemu_Thread32Next(struct qemu_syscall *call);
void qemu_TlsAlloc(struct qemu_syscall *call);
void qemu_TlsFree(struct qemu_syscall *call);
void qemu_TlsGetValue(struct qemu_syscall *call);
void qemu_TlsSetValue(struct qemu_syscall *call);
void qemu_Toolhelp32ReadProcessMemory(struct qemu_syscall *call);
void qemu_TransactNamedPipe(struct qemu_syscall *call);
void qemu_TransmitCommChar(struct qemu_syscall *call);
void qemu_TrySubmitThreadpoolCallback(struct qemu_syscall *call);
void qemu_TzSpecificLocalTimeToSystemTime(struct qemu_syscall *call);
void qemu_UnhandledExceptionFilter(struct qemu_syscall *call);
void qemu_UninitializeCriticalSection(struct qemu_syscall *call);
void qemu_UnlockFile(struct qemu_syscall *call);
void qemu_UnlockFileEx(struct qemu_syscall *call);
void qemu_UnmapViewOfFile(struct qemu_syscall *call);
void qemu_UnregisterApplicationRestart(struct qemu_syscall *call);
void qemu_UnregisterWait(struct qemu_syscall *call);
void qemu_UnregisterWaitEx(struct qemu_syscall *call);
void qemu_UpdateProcThreadAttribute(struct qemu_syscall *call);
void qemu_UpdateResourceA(struct qemu_syscall *call);
void qemu_UpdateResourceW(struct qemu_syscall *call);
void qemu_VerifyVersionInfoA(struct qemu_syscall *call);
void qemu_VerifyVersionInfoW(struct qemu_syscall *call);
void qemu_VerLanguageNameA(struct qemu_syscall *call);
void qemu_VerLanguageNameW(struct qemu_syscall *call);
void qemu_VirtualAlloc(struct qemu_syscall *call);
void qemu_VirtualAllocEx(struct qemu_syscall *call);
void qemu_VirtualFree(struct qemu_syscall *call);
void qemu_VirtualFreeEx(struct qemu_syscall *call);
void qemu_VirtualLock(struct qemu_syscall *call);
void qemu_VirtualProtect(struct qemu_syscall *call);
void qemu_VirtualProtectEx(struct qemu_syscall *call);
void qemu_VirtualQuery(struct qemu_syscall *call);
void qemu_VirtualQueryEx(struct qemu_syscall *call);
void qemu_VirtualUnlock(struct qemu_syscall *call);
void qemu_WaitCommEvent(struct qemu_syscall *call);
void qemu_WaitForDebugEvent(struct qemu_syscall *call);
void qemu_WaitForMultipleObjects(struct qemu_syscall *call);
void qemu_WaitForMultipleObjectsEx(struct qemu_syscall *call);
void qemu_WaitForSingleObject(struct qemu_syscall *call);
void qemu_WaitForSingleObjectEx(struct qemu_syscall *call);
void qemu_WaitNamedPipeA(struct qemu_syscall *call);
void qemu_WaitNamedPipeW(struct qemu_syscall *call);
void qemu_WerRegisterFile(struct qemu_syscall *call);
void qemu_WerRegisterMemoryBlock(struct qemu_syscall *call);
void qemu_WerRegisterRuntimeExceptionModule(struct qemu_syscall *call);
void qemu_WerSetFlags(struct qemu_syscall *call);
void qemu_WerUnregisterMemoryBlock(struct qemu_syscall *call);
void qemu_WideCharToMultiByte(struct qemu_syscall *call);
void qemu_WinExec(struct qemu_syscall *call);
void qemu_Wow64DisableWow64FsRedirection(struct qemu_syscall *call);
void qemu_Wow64EnableWow64FsRedirection(struct qemu_syscall *call);
void qemu_Wow64RevertWow64FsRedirection(struct qemu_syscall *call);
void qemu_WriteFile(struct qemu_syscall *call);
void qemu_WriteFileEx(struct qemu_syscall *call);
void qemu_WriteFileGather(struct qemu_syscall *call);
void qemu_WritePrivateProfileSectionA(struct qemu_syscall *call);
void qemu_WritePrivateProfileSectionW(struct qemu_syscall *call);
void qemu_WritePrivateProfileStringA(struct qemu_syscall *call);
void qemu_WritePrivateProfileStringW(struct qemu_syscall *call);
void qemu_WritePrivateProfileStructA(struct qemu_syscall *call);
void qemu_WritePrivateProfileStructW(struct qemu_syscall *call);
void qemu_WriteProcessMemory(struct qemu_syscall *call);
void qemu_WriteProfileSectionA(struct qemu_syscall *call);
void qemu_WriteProfileSectionW(struct qemu_syscall *call);
void qemu_WriteProfileStringA(struct qemu_syscall *call);
void qemu_WriteProfileStringW(struct qemu_syscall *call);
void qemu_WriteTapemark(struct qemu_syscall *call);
void qemu_WTSGetActiveConsoleSessionId(struct qemu_syscall *call);
void qemu_ZombifyActCtx(struct qemu_syscall *call);

#endif

#endif
