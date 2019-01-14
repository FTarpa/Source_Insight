#!/bin/bash
# SUN:jicong.wang version 2.0

param=$1
path="http://192.168.1.233/svn/SPRD7731/trunk/MocorDroid6.0_Trunk_16b_rls1_W16.29.2"
rpath="http://192.168.1.233/svn/sprd7731/trunk/MocorDroid6.0_Trunk_16b_rls1_W16.29.2_SUNVOV/C7367/C7367_HWD"
gsm_path="http://192.168.1.233/svn/sprd7731/trunk/GSM/r11"

eng_version="sp7731c_c7367_fwvga_oversea-userdebug"
user_version="sp7731c_c7367_fwvga_oversea-user"
out_file="sp7731c_c7367_fwvga"

custom_list=(
"C7367_FWVGA_Driver_R8"
"C7367_FWVGA_R8_BengalHOTWAV_NOGPS_B1"
)


###################################################################################################
#
# call svn_function 
#
###################################################################################################
if [ ! -f "svn_function" ];then 
    svn export --force http://192.168.1.233/svn/sprd7731/trunk/DOC/svn_function
else
    echo "svn_function is exist!!!"
fi
echo "wangjicong $@"
source svn_function $@
