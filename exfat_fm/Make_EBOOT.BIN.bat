@echo off
title Compiling File Manager
taskkill /IM cmd.exe /T /FI "WINDOWTITLE eq Administrator:*">NUL
cls

set PS3SDK=/c/Tools/PSDK3V2
set WIN_PS3SDK=C:/Tools/PSDK3V2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%WIN_PS3SDK%/ps3dev/bin;%WIN_PS3SDK%/ps3dev/ppu/bin;%WIN_PS3SDK%/ps3dev/spu/bin;%WIN_PS3SDK%/mingw/python27;%PATH%;
set PSL1GHT=%PS3SDK%/psl1ght
set PS3DEV=%PS3SDK%/ps3dev

echo.
make npdrm
echo.
if exist libsfm_ps3.a copy /Y libsfm_ps3.a ..\lib\libsfm_ps3.a
echo.

:quit
pause
cd ..
Make_EBOOT.BIN.bat
