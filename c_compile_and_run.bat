@echo off
for %%i in (*.c) do (
	cd C:\MinGW\bin
	gcc "%~d0%~p0%%i" -o "%~d0%~p0%%~ni.exe"
	cd %~d0%~p0
	%%~ni.exe
)
pause