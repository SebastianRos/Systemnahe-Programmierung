@echo off

setlocal EnableDelayedExpansion

for %%i in (*.c) do (
	echo %~dp0%%i
	SET files=!files! "%~dp0%%i" 
)
echo %files%
::cd C:\MinGW\bin
::gcc -o "%~dp0Anwendung"
::cd %~d0%~p0
::%~dp0Anwendung.exe
pause