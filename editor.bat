@echo off

set ROOTDIR=%~dp0
set ROOTDIR=%ROOTDIR:~0,-1%

set PROJECT=Kuake
set PROJECT_DIR=%ROOTDIR%
set UPROJECT_PATH=%PROJECT_DIR%\%PROJECT%.uproject

set UE4_DIR=Q:\Unreal Engine\UE_4.26
set UE4EDITOR_EXE=%UE4_DIR%\Engine\Binaries\Win64\UE4Editor.exe
set BUILD_BAT=%UE4_DIR%\Engine\Build\BatchFiles\Build.bat

start "%UE4EDITOR_EXE%" "%UPROJECT_PATH%" -log