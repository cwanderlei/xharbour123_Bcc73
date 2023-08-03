@echo off
rem 
rem $Id: make_vc.bat,v 1.1 2006/02/25 00:00:36 ronpinkas Exp $
rem 

:BUILD

   nmake /f makefile.vc %1 %2 %3 > make_vc.log
   if errorlevel 1 goto BUILD_ERR

:BUILD_OK

   copy ..\..\lib\vc\gtwvw.lib ..\..\lib >nul
   goto EXIT

:BUILD_ERR

   notepad make_vc.log

:EXIT

