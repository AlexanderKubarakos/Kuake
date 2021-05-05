@echo off

set ROOTDIR=%~dp0
set ROOTDIR=%ROOTDIR:~0,-1%

set PROJECT=Kuake
set PROJECT_DIR=%ROOTDIR%
set UPROJECT_PATH=%PROJECT_DIR%\%PROJECT%.uproject

set UE4_DIR=Q:\Unreal Engine\UE_4.26
set BUILD_BAT=%UE4_DIR%\Engine\Build\BatchFiles\Build.bat

call "%BUILD_BAT%" %PROJECT%Editor Win64 Development "%UPROJECT_PATH%" -waitmutex -NoHotReload 
