@echo off
set PS3SDK=/c/Tools/PSDK3V2
set WIN_PS3SDK=C:/Tools/PSDK3V2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%WIN_PS3SDK%/ps3dev/bin;%WIN_PS3SDK%/ps3dev/ppu/bin;%WIN_PS3SDK%/ps3dev/spu/bin;%WIN_PS3SDK%/mingw/python27;%PATH%;
set PSL1GHT=%PS3SDK%/psl1ght
set PS3DEV=%PS3SDK%/ps3dev

if exist IRIS_MANAGER.SELF del IRIS_MANAGER.SELF>nul

echo.
make clean
echo.

pause
