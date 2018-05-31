@echo off
color 02
title SUPERMEGAKRASSESHITHIERAMLAUFENDIGGAJOYOLOSWAG
IF EXIST C:\MinGW\bin SET PATH=%PATH%;C:\MinGW\bin

set files=

for /r %%i in (*.c) DO call :concat "%%i"
echo %files%
gcc %files% -o %dp0%anwendung
%dp0%anwendung
pause
goto :eof

:concat
set files=%files% %1% 
goto :eof