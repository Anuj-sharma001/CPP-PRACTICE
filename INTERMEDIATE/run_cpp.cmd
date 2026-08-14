@echo off
setlocal
set SRC=%~1
set NAME=%~2
set EXE=%NAME%.exe

g++ -std=c++17 "%SRC%" -o "%EXE%" || exit /b 1
"%EXE%"
