@echo off

REM setpath.bat 

REM Scripting Root - two directories above the current directory
set SCRPITING_ROOT=c:\ti\ccsv8\ccs_base\scripting\

echo %SCRPITING_ROOT%

REM add locations of dss.bat and loadti to PATH
set PATH=%PATH%;%SCRPITING_ROOT%\bin;%SCRPITING_ROOT%\examples\loadti

cd c:\Users\Simon Gurfunkel\Documents\LabVIEW_projects\LabVIEW-Universal-Transcriptor\Debuggers\MSP430\utils\
c:\ti\ccsv8\ccs_base\scripting\bin\dss.sh msp430_debug_server.js
