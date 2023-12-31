@echo off
rem
rem $Id: make_b32.bat,v 1.2 2006/09/30 17:47:20 areainformatica Exp $
rem

if "%1" == "clean" goto CLEAN
if "%1" == "CLEAN" goto CLEAN

:BUILD

   D:\Borland\Bcc68\bin\make -fmakefile.bc %1 %2 %3 > make_b32.log
   if errorlevel 1 goto BUILD_ERR

:BUILD_OK

   copy ..\..\lib\b32\mysql.lib ..\..\lib\*.* > nul
   goto EXIT

:BUILD_ERR

   notepad make_b32.log
   goto EXIT

:CLEAN

   if exist ..\..\lib\b32\mysql.lib    del ..\..\lib\b32\mysql.lib
   if exist ..\..\lib\b32\mysql.bak    del ..\..\lib\b32\mysql.bak
   if exist ..\..\obj\b32\mysql.obj    del ..\..\obj\b32\mysql.obj
   if exist ..\..\obj\b32\tsqlbrw.c    del ..\..\obj\b32\tsqlbrw.c
   if exist ..\..\obj\b32\tmysql.c     del ..\..\obj\b32\tmysql.c
   if exist ..\..\obj\b32\tsqlbrw.obj  del ..\..\obj\b32\tsqlbrw.obj
   if exist ..\..\obj\b32\tmysql.obj   del ..\..\obj\b32\tmysql.obj
   if exist ..\..\obj\b32\mysqlrdd.obj del ..\..\obj\b32\mysqlrdd.obj
   if exist ..\..\obj\b32\mysqlrdd.c   del ..\..\obj\b32\mysqlrdd.c
   goto EXIT

:EXIT

