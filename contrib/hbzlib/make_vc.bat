@echo off
rem
rem $Id: make_vc.bat,v 1.6 2004/05/20 13:30:34 srobert Exp $
rem

if not exist obj md obj
if not exist obj\vc md obj\vc

:BUILD

   nmake -fmakefile.vc %1 %2 %3 > make_vc.log
   if errorlevel 1 goto BUILD_ERR

:BUILD_OK
   copy ..\..\lib\vc\hbzip.lib ..\..\lib > nul
   goto EXIT

:BUILD_ERR

   notepad make_vc.log

:EXIT
