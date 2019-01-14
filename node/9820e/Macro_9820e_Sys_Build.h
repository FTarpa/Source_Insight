
/***********************************************************************/
/****************************** 编译命令 *******************************/
/***********************************************************************/
编译命令:[Ca]

cd 9820e/idh.code/
source build/envsetup.sh 
lunch
kheader
make -j12 2>&1 | tee log.txt

lunch
//	1. aosp_arm-eng
//	2. aosp_x86-eng
//	3. aosp_mips-eng
//	...
//	17. C417MD_2h10_native-userdebug
//	18. sp9820e_2h10_native-userdebug
//	19. sp9820e_2h10_oversea-userdebug
//	20. sp9820e_2h10_watch-userdebug
//	21. sp9820e_2h10_dtag-userdebug



git reset --hard
git clean -f
git status 



java -version
sudo /etc/profile
sudo vim /etc/profile
touch /etc/profile
sudo touch /etc/profile
java -version
source /etc/profile
java -version


1. 编译源码 
diff -Nur Asrc Adest > test1.patch
cd Bdest 
patch -p1 <../test1.patch
diff -Nur Bsrc Bdest > test2.patch
patch -R -p1
几个提交间
git format-patch 前提交..后提交

对方用git am *.patch

没提交可以用git diff > *.patch不标准



//android目录
Save:SI\node\9820e\Macro_9820e_Sys_File.h  1.1 android目录



/***********************************************************************/
/******************************** adb **********************************/
/***********************************************************************/

[Num]目录
[1.1] 如何通过adb 获取应用的版本号
2017年10月16日 10:15:32 王大锤扛刀 阅读数：2543
 版权声明：本文为博主原创文章，未经博主允许不得转载。	https://blog.csdn.net/wangjicong_215/article/details/78246902
windows： 
adb shell pm dump com.android.dialer | findstr “versionName” 
linux： 
adb shell pm dump com.android.dialer | grep “versionName”





[1.2] android系统编译完成后，生成的都是系统的文件，如果用展讯的烧录工具一个一个的选中则非常麻烦，
下面介绍了一种把这些文件打包成pac包的形式的方法，细看命令比较长，原因是系统文件比较多，
我使用的都是绝对路径，可以对一个路径设置一个变量，这样就可以缩短命令行的长度了。 

//	perl customize/pac_8810/pac_8810.pl "mytest.pac" "VERSION_1.0" 
//	"customize/pac_8810/SC8810.xml" "sc8810_sp8810ga/fdl1.bin" 
//	"out/target/product/hsdroid/sps.images_eng/fdl2.bin" 
//	"sc8810_sp8810ga/nvitem_3500_9810.bin" 
//	"out/target/product/hsdroid/sps.images_eng/u-boot-spl-16k.bin" 
//	"out/target/product/hsdroid/sps.images_eng/u-boot-256M.bin" 
//	"sc8810_sp8810ga/vmjaluna.imagenkcbsp-sc8810_nodebug" 
//	"sc8810_sp8810ga/SC8800G_sc8810_modem_vlx.bin" 
//	"sc8810_sp8810ga/SC8810_DM_DSP.bin" 
//	"out/target/product/hsdroid/sps.images_eng/boot.img" 
//	"out/target/product/hsdroid/sps.images_eng/recovery.img" 
//	"out/target/product/hsdroid/sps.images_eng/system.img" 
//	"out/target/product/hsdroid/sps.images_eng/userdata.img" 
//	"sc8810_sp8810ga/HVGA_logo_256.bmp" ""
 我们在发布一个版本的时候，经常会遇见版本更新的非常小，比如只更换或删除某个apk，
这时如果对整个android代码进行编译的话，会非常浪费时间，严重影响工作效率，
我们可以手动替换某个apk，再用下面的方法使用mkyaffs2image生成一个img文件，
再使用上面那个命令对镜像文件进行打包，这样非常节省时间。

out/host/linux-x86/bin/mkyaffs2image -f out/target/product/hsdroid/sps.images_eng/system mysystem.img
out/host/linux-x86/bin/mkyaffs2image -f out/target/product/hsdroid/sps.images_eng/data myuserdata.img
在实际开发中，我们需要大量的阅读源码，从源码中寻找方法和灵感，这样对我们自身提高是非常有用的。

	

[1.3]如何编译模块 

     以 engtest 模块为例，编译过程： 

cd idh.code 
./mk sp6820a u adr external/sprd/engineeringmodel/engtest
./mk sp9820e_1h10 u adr external/sprd/engineeringmodel/engtest



      

     注意： 

     编译单独模块之前，确保进行过             new 或 pb，如果要编译的模块需要引用其他模块的编译结果，
     则必须要先进行       new 编译。     

     编译单独模块过程中，同样也会进行相应的                  ln 合并过程，默认编译完成后会断开之前建立的
     链接，可以使用-o=nsc       选项来保持链接现场，命令如下： 

              $ ./mk -o=nsc sp6820a u adr external/sprd/engineeringmodel/engtest 

      

[1.4]如何编译       3rdparty   下的    ko 

     以 tp 为例 

         $ cd idh.code 

         $ ./mk sp6820a u ko 3rdparty/tp/pixcir/ 

     需要确保    3rdparty/tp/pixcir/build.sh 的可执行权限 

[1.5]用来查看当前运行时，activity的状态信息。

adb shell dumpsys activity 包含信息项
通过adb shell dumpsys activity | findstr “ACTIVITY MANAGER” ，打印的信息如下：

[1.6] getevent获取input上报事件
1.指定某个设备：adb shell getevent -v /dev/input/event0 
eg: 
D:\Program Files (x86)\PowerCmd>adb shell getevent -v /dev/input/event1

bus: 0018 
vendor 0001 
product 0001 
version 0100 
name: “proximity” 
location: “proximity” 
id: “” 
version: 1.0.1 
0003 0019 00000000 
0000 0000 00000000 
0003 0019 00000001 
0000 0000 00000000

2.list上报事件：adb shell getevent -l

D:\Program Files (x86)\PowerCmd>adb shell getevent -l 
add device 1: /dev/input/event6 
name: “mtk-tpd-kpd” 
add device 2: /dev/input/event5 
name: “mtk-tpd” 
add device 3: /dev/input/event4 
name: “m_acc_input” 
add device 4: /dev/input/event3 
name: “m_alsps_input” 
add device 5: /dev/input/event2 
name: “hwmdata” 
add device 6: /dev/input/event0 
name: “ACCDET” 
add device 7: /dev/input/event1 
name: “mtk-kpd” 
/dev/input/event5: EV_ABS ABS_MT_TRACKING_ID 00000000 
/dev/input/event5: EV_KEY BTN_TOUCH DOWN 
/dev/input/event5: EV_ABS ABS_MT_TOUCH_MAJOR 00000001 
/dev/input/event5: EV_ABS ABS_MT_POSITION_X 000000e5 
/dev/input/event5: EV_ABS ABS_MT_POSITION_Y 000002d7 
/dev/input/event5: EV_SYN SYN_MT_REPORT 00000000 
/dev/input/event5: EV_SYN SYN_REPORT 00000000 
/dev/input/event5: EV_ABS ABS_MT_TRACKING_ID 00000000 
/dev/input/event5: EV_ABS ABS_MT_TOUCH_MAJOR 00000001 
/dev/input/event5: EV_ABS ABS_MT_POSITION_X 000000e5 
/dev/input/event5: EV_ABS ABS_MT_POSITION_Y 000002d7 
/dev/input/event5: EV_SYN SYN_MT_REPORT 00000000 
/dev/input/event5: EV_SYN SYN_REPORT 00000000 
/dev/input/event5: EV_ABS ABS_MT_TRACKING_ID 00000000


[1.7] android adb shell am pm 列出说要安装的packages
adb shell pm list packages //列出说要安装的packages

pm list packages: prints all packages, optionally only

those whose package name contains the text in FILTER. Options:

-f: see their associated file.

-d: filter to only show disbled packages.

-e: filter to only show enabled packages.

-s: filter to only show system packages.

-3: filter to only show third party packages.

-i: see the installer for the packages.

-u: also include uninstalled packages.

adb shell pm list packages -f //列出安装的packages 并显示出apk包所在的位置 
eg：package:/system/priv-app/FMRadio/FMRadio.apk=com.android.fmradio 
eg: adb shell pm list packages -f “qiku”

adb shell pm list packages -d //列出被停用的应用 
eg：C:\Users\Administrator>adb shell pm list packages -d 
package:com.qiku.android.sos

adb shell pm list packages -e //列出启用的应用 
adb shell pm list packages -3 //列出安装的第三方应用，可以结合-3 -f查看具体apk的路径 
adb shell pm list packages -i //列出应用及包，并显示他的安装来源，null表示系统。 
eg:package:com.tencent.mobileqq installer=com.tencent.mobileqq 
adb shell pm list packages -u //列出为安装包应用信息

pm list permission-groups: prints all known permission groups.

pm list permissions: prints all known permissions, optionally only

those in GROUP. Options:

-g: organize by group.

-f: print all information.

-s: short summary.

-d: only list dangerous permissions.

-u: list only the permissions users will see.

adb shell pm list permission-groups //列出已知的权限组 
shell@sp9832a_3h10_volte:/ $ pm list permission-groups

permission group:com.android.qiku.permission-group.CONTACTS
permission group:android.permission-group.CONTACTS
permission group:android.permission-group.PHONE
permission group:com.android.qiku.permission-group.CALENDAR
permission group:android.permission-group.CALENDAR
permission group:android.permission-group.CAMERA
permission group:android.permission-group.SENSORS
permission group:android.permission-group.LOCATION
permission group:android.permission-group.STORAGE
permission group:android.permission-group.MICROPHONE
permission group:android.permission-group.SMS

pm list features: prints all features of the system. 
eg: 
C:\Users\Administrator>adb shell pm list features 
feature:reqGlEsVersion=0x20000 
feature:android.hardware.audio.output 
feature:android.hardware.bluetooth 
feature:android.hardware.bluetooth_le 
feature:android.hardware.camera 
feature:android.hardware.camera.any 
feature:android.hardware.camera.autofocus 
feature:android.hardware.camera.flash 
feature:android.hardware.camera.front 
feature:android.hardware.faketouch 
feature:android.hardware.location 
feature:android.hardware.location.gps 
feature:android.hardware.location.network 
feature:android.hardware.microphone

pm list users: 
eg: 
C:\Users\Administrator>adb shell pm list users 
Users: 
UserInfo{0:机主:13} running

pm path: print the path to the .apk of the given PACKAGE.//列出指定包名的apk的路径 感觉和pm list packages -f “pkgname”差不多 
eg： 
C:\Users\Administrator>adb shell pm path com.qiku.music 
package:/system/priv-app/QK_Music/QK_Music.apk

pm dump: print system state associated with the given PACKAGE //dump 指定应用的信息 包括版本号，安装时间，更新时间，权限等等。 
eg：C:\Users\Administrator>adb shell pm dump com.qiku.music >d:\music.log

pm install [-l] [-r] [-t] [-i INSTALLER_PACKAGE_NAME] [-s] [-f] PATH //安装指定目录的apk 
eg： 
pm install /data/3dijoy_fane.apk

pm get-install-location　　返回当前默认安装位置

　　返回值：

　　　　0　　auto

　　　　1　　内部存储

　　　　2　　外部存储

pm set-install-location　0|1|2　修改默认安装位置

pm clear “pkgname”//清除指定应用的数据，可以用于fota升级后，清空数据结合Runningtime


[1.7] Android 通过adb 当前输入法信息
adb shell ime list -s 
com.google.android.inputmethod.latin/com.android.inputmethod.latin.LatinIME 
com.google.android.apps.speechservices/com.google.android.voicesearch.ime.VoiceI 
nputMethodService
	
/***********************************************************************/
/******************************** other ********************************/
/***********************************************************************/
[Cs][Cf][Cg]


