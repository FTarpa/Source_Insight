@echo off&setlocal EnableDelayedExpansion

mkdir E:\save\SI_res\mmi_res_128x160_SIM
set DestPath=F:\SBD_6531_12C_DA\project

for /f "delims=" %%i   in ('dir  /b/a-d/s  %DestPath%\.\mmi_res_128x160.zip')  do (

set sbd_dir1=%%i
call set  sbd_dir2=!!sbd_dir1:%DestPath%\=!!
set  sbd_dir3=!sbd_dir2:\mmi_res_128x160.zip=!

mkdir  E:\save\SI_res\mmi_res_128x160_SIM\!sbd_dir3!
unzip  -qjo  %%i  common/MMI_RES_DEFAULT/IMAG/StatusbarIcon/idle_prompt/IMAGE_IDLE_PROMPT_S*.png -d  E:\save\SI_res\mmi_res_128x160_SIM\!sbd_dir3!

)

pause
