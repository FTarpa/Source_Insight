@echo off&setlocal enabledelayedexpansion 

set saveFile=..\Cmd_TXT\si_filelist.h
set logFile=..\Cmd_TXT\si_log.h

set schDir=%1
::�滻, #�滻Ϊ�ո�
set schDir=%schDir:#= %
::����: F5����, F6���
set cmdType=%2
::�ַ�������
set fileLen=%3
set fileHead=%schdir%\%4

if "%cmdType%"=="6" (
	echo [file]: >%saveFile%
	echo=>>%saveFile%
	echo clear>>%saveFile%
	exit
)

echo [cmd]: >>%logFile%
echo "get file list: %1 %2 %3 %4">>%logFile%

echo [file]: >%saveFile%
echo %1 %4>>%saveFile%
echo=>>%saveFile%
echo [search result]: >>%saveFile%


::echo schdir = %schdir%>>%logFile%
::echo fileLen = %fileLen%>>%logFile%
::echo fileHead = %fileHead%>>%logFile%

if "%schdir%"=="" (
	exit
)

for /f "delims=" %%i   in ('dir  /b/a-d/s  %schDir%')  do (
	set curFile=%%i
	::echo curFile = !curFile!
	set curFile=!curFile:~0,%fileLen%!
	::echo curFile = !curFile!
	if "!curFile!"=="%fileHead%" (
		echo %%i
	)
)>>%saveFile%
::pause
