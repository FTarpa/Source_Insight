@echo off&setlocal EnableDelayedExpansion
set resDir=E:\save\SI_res\6531E
set scrSize=128x160

mkdir %resDir%\%scrSize%_SIM

set DestPath=F:\6531E_16A\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_128x160.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_128x160.zip=!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/no_sim/*.png -d  %resDir%\%scrSize%_SIM\!sbd_dir3!
unzip  -qjo  %%i  cc/MMI_RES_DEFAULT/IMAG/callog/IMAGE_CL_ALLLOG_SELECTED* -d  %resDir%\%scrSize%_SIM\!sbd_dir3!

)

pause
