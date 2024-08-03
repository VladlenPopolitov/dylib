#!/bin/sh
SET DIR=.\Debug
SET RESULTDIR=Windows10_x64
if exist  %DIR%\a2b2c.exe (
mkdir ..\%RESULTDIR%
cd %DIR%
.\a2b2c >../../%RESULTDIR%/a2b2c.txt
.\ac2b2c >../../%RESULTDIR%/ac2b2c.txt
.\ac2bc >../../%RESULTDIR%/ac2bc.txt
.\ac2bcw_wiw >../../%RESULTDIR%/ac2bcw_wiw.txt
.\ac2bcw_wi >../../%RESULTDIR%/ac2bcw_wi.txt
.\ac2bcw_w >../../%RESULTDIR%/ac2bcw_w.txt
.\acw2bcw_wiw >../../%RESULTDIR%/acw2bcw_wiw.txt
.\acw2bcw_wi >../../%RESULTDIR%/acw2bcw_wi.txt
.\acw2bcw_w >../../%RESULTDIR%/acw2bcw_w.txt


 ) else (
echo Run command in build directore as ..\runandsave.cmd
)