
����·������:
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// 1. ��������
Save:node\android\sys\Macro_Sys_Build.h \[1.1\] envsetup.sh---���ػ�������
Save:node\android\sys\Macro_Sys_Build.h \[1.2\] lunch---------ѡ�����ƽ̨
Save:node\android\sys\Macro_Sys_Build.h \[1.3\] make----------ִ�б���
Save:node\android\sys\Macro_Sys_Build.h \[1.4\] java----------ǩ��
Save:node\android\sys\Macro_Sys_Build.h \[1.5\] make idegen---����idegen
Save:node\android\sys\Macro_Sys_Build.h \[1.6\] make snod-----����img
Save:node\android\sys\Macro_Sys_Build.h \[1.7\] emulator------ģ����
Save:node\android\sys\Macro_Sys_Build.h \[1.8\] make sdk------����sdk
Save:node\android\sys\Macro_Sys_Build.h \[1.9\] 
Save:node\android\sys\Macro_Sys_Build.h \[1.10\] 
// 2. ����
Save:node\android\sys\Macro_Sys_Build.h \[2.1\] ����
Save:node\android\sys\Macro_Sys_Build.h \[2.2\] ����汾˵��
Save:node\android\sys\Macro_Sys_Build.h \[2.3\] ������
Save:node\android\sys\Macro_Sys_Build.h \[2.4\] 
// 3. adb ģ��
Save:node\android\sys\Macro_Sys_Build.h \[3.1\] adb shell
Save:node\android\sys\Macro_Sys_Build.h \[3.2\] adb -- Launcher3
Save:node\android\sys\Macro_Sys_Build.h \[3.3\] adb -- Settings
Save:node\android\sys\Macro_Sys_Build.h \[3.4\] adb -- SystemUI
Save:node\android\sys\Macro_Sys_Build.h \[3.5\] adb -- FMRadio
Save:node\android\sys\Macro_Sys_Build.h \[3.6\] adb -- framework
Save:node\android\sys\Macro_Sys_Build.h \[3.7\] adb -- services
Save:node\android\sys\Macro_Sys_Build.h \[3.8\] adb -- build.prop
Save:node\android\sys\Macro_Sys_Build.h \[3.9\] adb -- jpg
Save:node\android\sys\Macro_Sys_Build.h \[3.10\] adb -- other apk
Save:node\android\sys\Macro_Sys_Build.h \[3.11\] 
Save:node\android\sys\Macro_Sys_Build.h \[3.12\] 
Save:node\android\sys\Macro_Sys_Build.h \[3.13\] 
// 4. adb
Save:node\android\sys\Macro_Sys_Build.h \[4.1\] adb -- version
Save:node\android\sys\Macro_Sys_Build.h \[4.2\] adb -- չѶpac���
Save:node\android\sys\Macro_Sys_Build.h \[4.3\] ��α���ģ�� 
Save:node\android\sys\Macro_Sys_Build.h \[4.4\] ��α��� 	  3rdparty	 �µ�    ko 
Save:node\android\sys\Macro_Sys_Build.h \[4.5\] �����鿴��ǰ����ʱ��activity��״̬��Ϣ��
Save:node\android\sys\Macro_Sys_Build.h \[4.6\] getevent��ȡinput�ϱ��¼�
Save:node\android\sys\Macro_Sys_Build.h \[4.7\] android adb shell am pm �г�˵Ҫ��װ��packages
Save:node\android\sys\Macro_Sys_Build.h \[4.8\] Android ͨ��adb ��ǰ���뷨��Ϣ
Save:node\android\sys\Macro_Sys_Build.h \[4.9\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.10\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.11\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.12\] 
Save:node\android\sys\Macro_Sys_Build.h \[4.13\] 




[1.1] envsetup.sh---���ػ�������
cd 9820e/idh.code/
source build/envsetup.sh 

//	���ɼӵ�envsetup.sh���
//export JAVA_HOME=/usr/lib/jvm/java-7-openjdk-amd64/


[1.2] lunch---------ѡ�����ƽ̨
lunch
// ----> 9
//	1. aosp_arm-eng
//	2. aosp_x86-eng
//	3. aosp_mips-eng
//	4. vbox_x86-eng
//	5. sp9820e_1h10_native-userdebug
//	6. sp9820e_1h10_multilanguage-userdebug
//	7. sp9820e_1h10_oversea-userdebug
//	8. sp9820e_2h10_native-userdebug
//	9. sp9820e_2h10_oversea-userdebug


[1.3] make----------ִ�б���
make -j12 2>&1 | tee log.txt
//make -j36 2>&1 | tee build.log

//���� image
gedit device/rockchip/rk29sdk/BoardConfig.mk
//�����ں�kernel.img��·��:TARGET_PREBUILT_KERNEL := ./Image  

make prebuild
cd kernel/
make kernel.img -j4
cd ..
make
make -j8
./mkimage.sh ota        ����WINDOWS���ߴ����update.img ���±���frameworks/base��frameworks/ex
./mkimage        ��һЩapk����������Դ�ȵȴ������image�ļ�
out/target/product/rk3188
rockdev/Image-rk3188/


[1.4] java----------ǩ��
java -version

//ǩ��apk
java -jar out/host/linux-x86/framework/signapk.jar	build/target/product/security/platform.x509.pem build/target/product/security/platform.pk8 ~/Settings.apk ~/output.apk


[1.5] make idegen
make snod
make idegen    ��Ŀ¼
mm development/tools/idegen/
sh ./development/tools/idegen/idegen.sh
out/host/linux-x86/framework        --idegen.jar


[1.6] img
//�����µ�system.img
make snod

//����services 
make services


[1.7] emulatorģ����
//	����ģ����
export ANDROID_PRODUCT_OUT=out/target/product/angler/
cd ./out/host/linux-x86/bin 
./emulator

//	����Androidģ����
./run_emulator.sh


[1.8] make sdk����sdk
export MTK_PROJECT_CONFIGS=/home/work/xj/alps/device/bror/br6737m_35g_s_m0/ProjectConfig.mk
make update-api        Ҫ��git/repo
make PRODUCT-sdk-sdk -j8
lunch sdk-eng 
make sdk 
out/target/product/generic
vendor/widevine


[1.9] 


[1.10] 


[2.1] ����

Open E:\desktop\9820E\RESEARCHDOWNLOAD_R20.0.0001\Bin\ResearchDownload.exe
E:\desktop\9820E\RESEARCHDOWNLOAD_R20.0.0001\Bin\ResearchDownload.exe


2����Ŀ¼
out\target\product\sp9820e_2h10
������ļ�����������Ŀ¼
RESEARCHDOWNLOAD_R20.0.0001\Bin\ImageFiles\_DownloadFiles8652673��
E:\desktop\9820E\RESEARCHDOWNLOAD_R20.0.0001\Bin\ImageFiles\_DownloadFiles8652673


3���ڹ�����������ѡ��Packet�����


[2.2] ����汾˵��
//adb install ~
Failure [INSTALL_FAILED_UPDATE_INCOMPATIBLE]
�����ûroot��

///////2   adb ����ֱ�� push
 �����ʱ�� �������汾
userdebug
user
eng��Ȩ����ߣ�

ֻ��eng�汾�Ĳž��е��Ե�ȫ������ 


[2.3] ������
��������Ҫ����
��1����apk��ѹ�����Ա��zipѹ���ļ��ٽ�ѹ��
��2���ҵ�classes.dex�ļ����� dex2jar���� ����dex�ļ�ת����jar�ļ������� d2j-dex2jar classes.dex
��3���� jd-gui ���ߣ���jar�ļ�ת����java����
��4���� apktool ����������������ȵػ�ԭAPK�ļ��е�9-patchͼƬ�����֡��ַ����ȵ�һϵ�е���Դ������ apktool d Demo.apk

[2.4] �ο�sh: 
//1.svn export android ����
//2.�Զ�����debug user�汾
//3.�Զ�check fota������Ҫ�õ���ʣ��ռ��С
Save:node\9820e\sh\Macro_custom.sh
Save:node\9820e\sh\Macro_svn_function.sh
//4.�����Ŀ�������
Save:node\9820e\sh\Macro_make.sh



[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 


[3.1] adb shell

cmd_w: D:&cd D:\android\as_SDK\platform-tools

adb remount
adb shell
cd /system/app
adb shell getevent -p

adb reboot bootloader
adb remount
adb shell

//install uninstall
adb push E:\apk\kidbbapp3.0.013.apk  /mnt/sdcard/apk
adb uninstall com.kidbbapp.com
adb install com.kidbbapp.com
adb uninstall com.seefs.shenqi
adb uninstall  com.litai.launcher
adb uninstall  com.android.launcher3  


[3.2] adb -- Launcher3
adb install   E:\����\Launcher3.apk


[3.3] adb -- Settings
adb install   F:\fShared\br6737m\system-app\Settings\Settings.apk
adb push	 F:\fShared\br6737m\system-app\Settings\Settings.apk   /mnt/sdcard/apk_us
adb push	 F:\fShared\br6737m\system\priv-app\Settings\Settings.apk	/mnt/sdcard/apk_us
adb uninstall	 Settings.apk
adb push     F:\fShared\br6737m\Settings4.apk   /mnt/sdcard/apk_us


[3.4] adb -- SystemUI
adb install   E:\android\apk_mt6572\SystemUI.apk
adb install   E:\android\apk_mt6572\SystemUI.apk
adb push	 E:\android\apk_mt6572\SystemUI.apk   /mnt/sdcard/
adb push	 E:\android\apk_mt6572\SystemUI.apk   /mnt/sdcard/
SystemUI_bak.apk
//Ҫ���ݣ�����������ˣ�
adb push E:\apk\sys_bak\Launcher3.apk  /system/app


[3.5] adb -- FMRadio
adb push	 E:\����\FMRadio.apk	 /system/priv-app/FMRadio
adb push	 E:\����\lib\libfmjni.so	 /system/lib/
adb push	 E:\����\lib64\libfmjni.so   /system/lib64/
adb uninstall    FmRadio.apk


[3.6] adb -- framework
adb push	 F:\fShared\angler\framework\framework.jar	/mnt/sdcard/aaa
adb pull   /system/framework/framework-res.apk E:\apk\sys_res\framework-res.apk
adb pull   /system/framework/framework2.jar E:\apk\sys_res\framework2.jar
adb pull   /system/framework/framework.jar E:\apk\sys_res\framework.jar

adb pull   /system/framework/framework-res.apk E:\apk\framework-res.apk
adb push  E:\apk\sys_res\framework-res.apk /system/framework/
adb push  E:\apk\framework2.jar /system/framework/
adb push  E:\apk\framework.jar /system/framework/


[3.7] adb -- services
adb push	 F:\fShared\angler\framework\services.jar  /mnt/sdcard/aaa


[3.8] adb -- build.prop
adb pull   /system/build.prop E:\apk\sys_error\build.prop
adb push E:\apk\sys_error\build.prop  /system/build.prop


[3.9] adb -- jpg
cp default_thumb.jpg com.litai.launcher/files/
ls default_thumb.jpg com.litai.launcher/files/
cp default_thumb.jpg com.android.launcher3/files/

adb push  E:\��Դ\��ֽ\default_thumb\default_thumb.jpg /data/data/com.android.launcher3/files/
adb pull   /data/data/com.android.launcher3/files/default_thumb.jpg E:\��Դ\��ֽ\default_thumb_new.jpg


[3.10] adb -- other apk
//install
cmd_w: adb install  E:\Desktop\SGIT\GitClub\apk\app-release.apk
cmd_w: ping dl.google.com


[3.11] 


[3.12] 


[3.13] 


[3.14] 



[4.1] adb -- version
//���ͨ��adb ��ȡӦ�õİ汾��
windows�� 
adb shell pm dump com.android.dialer | findstr ��versionName�� 
linux�� 
adb shell pm dump com.android.dialer | grep ��versionName��





[4.2] adb -- չѶpac���
androidϵͳ������ɺ����ɵĶ���ϵͳ���ļ��������չѶ����¼����һ��һ����ѡ����ǳ��鷳��
���������һ�ְ���Щ�ļ������pac������ʽ�ķ�����ϸ������Ƚϳ���ԭ����ϵͳ�ļ��Ƚ϶࣬
��ʹ�õĶ��Ǿ���·�������Զ�һ��·������һ�������������Ϳ������������еĳ����ˡ�?

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
?�����ڷ���һ���汾��ʱ�򣬾����������汾���µķǳ�С������ֻ������ɾ��ĳ��apk��
��ʱ���������android������б���Ļ�����ǳ��˷�ʱ�䣬����Ӱ�칤��Ч�ʣ�
���ǿ����ֶ��滻ĳ��apk����������ķ���ʹ��mkyaffs2image����һ��img�ļ���
��ʹ�������Ǹ�����Ծ����ļ����д���������ǳ���ʡʱ�䡣

out/host/linux-x86/bin/mkyaffs2image -f out/target/product/hsdroid/sps.images_eng/system mysystem.img
out/host/linux-x86/bin/mkyaffs2image -f out/target/product/hsdroid/sps.images_eng/data myuserdata.img
��ʵ�ʿ����У�������Ҫ�������Ķ�Դ�룬��Դ����Ѱ�ҷ�������У�������������������Ƿǳ����õġ�

	

[4.3] ��α���ģ�� 

     �� engtest ģ��Ϊ����������̣� 

cd idh.code 
./mk sp6820a u adr external/sprd/engineeringmodel/engtest
./mk sp9820e_1h10 u adr external/sprd/engineeringmodel/engtest



      

     ע�⣺ 

     ���뵥��ģ��֮ǰ��ȷ�����й�             new �� pb�����Ҫ�����ģ����Ҫ��������ģ��ı�������
     �����Ҫ�Ƚ���       new ���롣     

     ���뵥��ģ������У�ͬ��Ҳ�������Ӧ��                  ln �ϲ����̣�Ĭ�ϱ�����ɺ��Ͽ�֮ǰ������
     ���ӣ�����ʹ��-o=nsc       ѡ�������������ֳ����������£� 

              $ ./mk -o=nsc sp6820a u adr external/sprd/engineeringmodel/engtest 

      

[4.4] ��α���       3rdparty   �µ�    ko 

     �� tp Ϊ�� 

         $ cd idh.code 

         $ ./mk sp6820a u ko 3rdparty/tp/pixcir/ 

     ��Ҫȷ��    3rdparty/tp/pixcir/build.sh �Ŀ�ִ��Ȩ�� 

[4.5] �����鿴��ǰ����ʱ��activity��״̬��Ϣ��

adb shell dumpsys activity ������Ϣ��
ͨ��adb shell dumpsys activity | findstr ��ACTIVITY MANAGER�� ����ӡ����Ϣ���£�

[4.6] getevent��ȡinput�ϱ��¼�
1.ָ��ĳ���豸��adb shell getevent -v /dev/input/event0 
eg: 
D:\Program Files (x86)\PowerCmd>adb shell getevent -v /dev/input/event1

bus: 0018 
vendor 0001 
product 0001 
version 0100 
name: ��proximity�� 
location: ��proximity�� 
id: ���� 
version: 1.0.1 
0003 0019 00000000 
0000 0000 00000000 
0003 0019 00000001 
0000 0000 00000000

2.list�ϱ��¼���adb shell getevent -l

D:\Program Files (x86)\PowerCmd>adb shell getevent -l 
add device 1: /dev/input/event6 
name: ��mtk-tpd-kpd�� 
add device 2: /dev/input/event5 
name: ��mtk-tpd�� 
add device 3: /dev/input/event4 
name: ��m_acc_input�� 
add device 4: /dev/input/event3 
name: ��m_alsps_input�� 
add device 5: /dev/input/event2 
name: ��hwmdata�� 
add device 6: /dev/input/event0 
name: ��ACCDET�� 
add device 7: /dev/input/event1 
name: ��mtk-kpd�� 
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


[4.7] android adb shell am pm �г�˵Ҫ��װ��packages
adb shell pm list packages //�г�˵Ҫ��װ��packages

pm list packages: prints all packages, optionally only

those whose package name contains the text in FILTER. Options:

-f: see their associated file.

-d: filter to only show disbled packages.

-e: filter to only show enabled packages.

-s: filter to only show system packages.

-3: filter to only show third party packages.

-i: see the installer for the packages.

-u: also include uninstalled packages.

adb shell pm list packages -f //�г���װ��packages ����ʾ��apk�����ڵ�λ�� 
eg��package:/system/priv-app/FMRadio/FMRadio.apk=com.android.fmradio 
eg: adb shell pm list packages -f ��qiku��

adb shell pm list packages -d //�г���ͣ�õ�Ӧ�� 
eg��C:\Users\Administrator>adb shell pm list packages -d 
package:com.qiku.android.sos

adb shell pm list packages -e //�г����õ�Ӧ�� 
adb shell pm list packages -3 //�г���װ�ĵ�����Ӧ�ã����Խ��-3 -f�鿴����apk��·�� 
adb shell pm list packages -i //�г�Ӧ�ü���������ʾ���İ�װ��Դ��null��ʾϵͳ�� 
eg:package:com.tencent.mobileqq installer=com.tencent.mobileqq 
adb shell pm list packages -u //�г�Ϊ��װ��Ӧ����Ϣ

pm list permission-groups: prints all known permission groups.

pm list permissions: prints all known permissions, optionally only

those in GROUP. Options:

-g: organize by group.

-f: print all information.

-s: short summary.

-d: only list dangerous permissions.

-u: list only the permissions users will see.

adb shell pm list permission-groups //�г���֪��Ȩ���� 
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
UserInfo{0:����:13} running

pm path: print the path to the .apk of the given PACKAGE.//�г�ָ��������apk��·�� �о���pm list packages -f ��pkgname����� 
eg�� 
C:\Users\Administrator>adb shell pm path com.qiku.music 
package:/system/priv-app/QK_Music/QK_Music.apk

pm dump: print system state associated with the given PACKAGE //dump ָ��Ӧ�õ���Ϣ �����汾�ţ���װʱ�䣬����ʱ�䣬Ȩ�޵ȵȡ� 
eg��C:\Users\Administrator>adb shell pm dump com.qiku.music >d:\music.log

pm install [-l] [-r] [-t] [-i INSTALLER_PACKAGE_NAME] [-s] [-f] PATH //��װָ��Ŀ¼��apk 
eg�� 
pm install /data/3dijoy_fane.apk

pm get-install-location�������ص�ǰĬ�ϰ�װλ��

��������ֵ��

��������0����auto

��������1�����ڲ��洢

��������2�����ⲿ�洢

pm set-install-location��0|1|2���޸�Ĭ�ϰ�װλ��

pm clear ��pkgname��//���ָ��Ӧ�õ����ݣ���������fota������������ݽ��Runningtime


[4.8] Android ͨ��adb ��ǰ���뷨��Ϣ
adb shell ime list -s 
com.google.android.inputmethod.latin/com.android.inputmethod.latin.LatinIME 
com.google.android.apps.speechservices/com.google.android.voicesearch.ime.VoiceI 
nputMethodService



[4.9] 




[4.10] 




[4.11] 




[4.12] 
	
	
[4.13] 
	
	
[4.14] 
	
	
[4.15] 
	




