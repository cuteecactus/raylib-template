@echo off
mingw32-make clean
mingw32-make
if exist game.exe (
    game.exe
) else (
    echo Build failed! Check for errors.
pause
)