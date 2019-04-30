//目录[Num][Ca]:

/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置: [s][Cs]
basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

去掉拍照声音
搜索 camera_click
查找到 
frameworks/base/data/sounds/effects/ogg/camera_click.ogg
frameworks/base/data/sounds/effects/ogg/camera_click_48k.ogg
out/target/product/sp9820e_1h10/system/media/audio/ui/camera_click.ogg
media/frameworks-ext/base/data/sounds/effects/ogg/camera_click.ogg
media/frameworks-ext/base/data/sounds/effects/ogg/camera_click_ori.ogg
全部删除


预置APP(FAQ04300)

1 把APKK文件和Android.mk文件放在一个目录下，例如NYJC，一起放到alps/packages/apps中。
Android.mk内容：
LOCAL_PATH :=$(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE :=NYJC
LOCAL_MODULE_TAGS :=optional
LOCAL_SRC_FILES :=$(LOCAL_MODULE).apk
LOCAL_MODULE_CLASS :=APPS
LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
LOCAL_CERTIFICATE := PRESIGNED
include $(BUILD_PREBUILT)

2 开文件 build/target/product/${Project}.mk  （其中 ${Project}  表示工程
名）
将 NYJC  添加到 PRODUCT_PACKAGES  里面

5)    将从 Test.apk 解压出来的 so 库拷贝到
alps/vendor/mediatek/${Project}/artifacts/out/target/product/${Project}/sy
stem/lib/ 目录下，若无 so  库，则去掉此步；
6)    重新 build  整个工程


禁止休眠

1,由于代码的不一样，在JB2之前的code(就是android4.2之前的code),请参考如下的
修改：
在alps\frameworks\base\packages\SettingsProvider\res\values\defaults.xml中
设置def_screen_off_timeout为-1，即
<integer name="def_screen_off_timeout">-1</integer>
同时请注意，经由下面的操作，setting里面休眠时间的Never菜单才会出来：
修改alps\packages\apps\Settings\res\values\arrays.xml:
<!-- Display settings. The delay in inactivity before the screen is
turned off. These are shown ain a list dialog. -->
   <string-array name="screen_timeout_entries">
       <item>15 seconds</item>
       <item>30 seconds</item>
       <item>1 minute</item>
       <item>2 minutes</item>
       <item>10 minutes</item>
       <item>30 minutes</item>
       <item>never</item>
   </string-array>
   <!-- Do not translate. -->
  <string-array name="screen_timeout_values" translatable="false">
       <!-- Do not translate. -->
       <item>15000</item>
       <!-- Do not translate. -->
       <item>30000</item>
       <!-- Do not translate. -->
       <item>60000</item>
       <!-- Do not translate. -->
       <item>120000</item>
      <!-- Do not translate. -->
       <item>600000</item>
       <!-- Do not translate. -->
       <item>1800000</item>
        <item>-1</item>
   </string-array>
   修改对比语言value文件夹下的arrays.xml, 修改screen_timeout_entries对应
的翻译。不用管那个msgid，只是google用来表示是他自己的资源而已，直接添加
<item >"不灭"</item>即可，请知悉。
2,若是android4.2的code,请在前面的修改基础上再修改下面的代码：
PowerManagerService.java
private void updateUserActivitySummaryLocked(long now, int dirty) {
.....
//change code here ==============
                     Slog.d(TAG,"mScreenOffTimeoutSetting
="+mScreenOffTimeoutSetting);
                     //if (mUserActivitySummary != 0 ) {
               if (mUserActivitySummary != 0 && mScreenOffTimeoutSetting
> 0) {
//change code here end ==============
                   Message msg =
mHandler.obtainMessage(MSG_USER_ACTIVITY_TIMEOUT);
                   msg.setAsynchronous(true);
                   mHandler.sendMessageAtTime(msg, nextTimeout);
               }
开机 关机动画
开机动画：
Zip路径：alps/mediatek/operator/OP02/prebuilt/bootanim/bootanimation/QHD/bootanimation.zip

关机动画：
Zip路径：alps/mediatek/operator/OP02/prebuilt/bootanim/shutanimation/QHD/shutanimation.zip 

开机动画严格意义上可以分为三个步骤：
1.开机第一屏
2.开机第二屏
3.开机动画

以MTK手机为例：
Boot logo：
1. 开机显示的顺序如下：
    boot logo（开机第一屏）   （logo.bin 中）
    Kernel logo（开机第二屏)  （system/media/images/boot_logo 文件）
    Boot animation(开机动画）（system/media/bootanimation.zip 文件）
2. boot logo和kernel log所用的图片资源在 mediatek/custom/common/uboot/logo 目录下。
    在ProjectConfig.mk中指定具体目录,比如BOOT_LOGO=wvga_XXX，表示用wvga_XXX目录下的资源，该目录下的资源都是bmp文件。
    在logo/update 文件中会调用tool/bmp_to_raw将bmp文件转换成raw文件，并且在make uboot时会将这些资源文件放到logo.bin 中。 
    Logo/update 针对wvga_XXX_kernel.bmp有特殊处理，将其转成raw文件并命名为/logo/boot_logo
    在mediatek/source/external/boot_logo_upater/Android.mk中会将boot_logo 文件放到out/target/product/system/media/images/boot_logo. 这样就放到了system.img中.
3. boot logo的显示: boot.img中加载logo.img中的boot 图片显示;
    Kernel logo的显示: init.rc 启动 service bootlogoupdater /system/bin/boot_logo_updater .
    boot_logo_updater这个可执行程序由boot_logo_updater.c 编译而成，其功能是从/system/media/images/boot_logo 中读出kernel_boot资源,并通过framebuffer直接显示到LCD上。
    注：可以根据logo/update中的脚本单独生成boot_logo文件（修改第二屏），然后用adb remount/adb push的方法直接放到手机里面观察效果。







1) 制作 bootanimation.zip 。制作方法举例如下：
  分别创建名为“ part0 ”和“ part1 ”的文件夹以及一个名为“ desc.txt ”文件。“ part0 ”中存储动画
的第一阶段的资源图片，“ part1 ”存储第二阶段的资源图片，注意图片为 png 格式。
 播放控制由“ desc.txt ”指定，内容如下：
   320 480 30
   p 1 0 part0
   p 0 0 part1
  各参数功能如下： ( 注意：desc.txt文本内容必须用单个空格隔开，且不能有多余空
行。)
 
 最后，将这三个组件通过存储压缩的方式压缩为 bootanimation.zip 文件即制作完成。压缩方式为存储。
2) 预置开机动画。预置的过程如下：
   将制作完成的 bootanimation.zip 文件放在工程的资源目录下，如
frameworks\base\data\sounds 目录下，修改 Android.mk 文件，通过以下语句将该压缩包打到
system\medial\ 路径下：
$(LOCAL_PATH)/bootanimation.zip:system/media/bootanimation.zip
  然后再次 build 工程即可。


三、关机动画：
1.  在 mediatek/config/${Project}/system.prop
添加代码 ro.operator.optr=CUST
2.  制作关机动画包 shutanimation.zip 。制作方法和 bootanimation.zip 类似，将制作完成的
shutanimation.zip 文件放在工程的资源目录下，如 frameworks\base\data\sounds 目录下，修改
Android.mk 文件，通过以下语句将该压缩包编译到 system\medial\ 路径下：
320 480 30
宽 高 每秒播放帧数
p 1 0 part0
标志符 循环次数 阶段切换间隔时间 对应目录名
p 0 0 part1
标志符 循环次数 阶段切换间隔时间 对应目录名
$(LOCAL_PATH)/shutanimation.zip:system/media/shutanimation.zip



修改LCD背光

以GPIO方式的背光修改：
1
Mdiatek/custom/prj/kernel/leds/mt65xx/Cust_leds.c

Static struct cust_mt65xx_led cust_led_list[MT65XX_LED_TYPE_TOTAL]={
{
......
{“lcd-backlight”,MT65XX_LED_MODE_GPIO,145,{0}},
};

2 
mediatek/paltform/mt6572/kernel/drivers/leds/Leds.c
mt_mt65xx_led_set_cust函数中
case MT65XX_LED_MODE_GPIO:
if（level==0）
{
 mt_set_gpio_out(cust->data,GPIO_OUT_ZERO);
}else{
mt_set_gpio_out(cust->data,GPIO_OUT_ONE);
}
return 1;


去掉烧写后首次开机提示
alps/packages/apps/Launcher3/src/com/android/launcher3/Launcher.java
注销 showFirstRunCling();


[FAQ00450]如何修改默认时间格式？
[DESCRIPTION]
 如何修改默认时间格式？ 
[SOLUTION]
1. 修改文件
alps\frameworks\base\packages\SettingsProvider\res\values\defaults.xml
   增加代码 <string name="time_12_24" translatable="false">24</string>
红色标记表示 24 小时制，也可以改为 12 （ 12 小时制）
2. 修改文件
alps\frameworks\base\packages\SettingsProvider\src\com\android\providers\s
ettings\DatabaseHelper.java
找到函数 loadSystemSettings () ，在函数中增加以下语句：
   loadStringSetting(stmt, Settings.System.TIME_12_24,
R.string.time_12_24);




MTK快速开机
\mediatek\config\hsimobile77_ics2\projectconfig.mk
MTK_IPO_SUPPORT=yes



电池修改

测量电池充满电压4.2v 用光电压大约3.15v
修改 alps/mediatek/custom/mt6572/kernel/battery/battery/cust_battery_meter.h

#define Q_MAX_POS_50 电池容量*1316/1307
#define Q_MAX_POS_25 电池容量
#define Q_MAX_POS_0 电池容量*1220/1307
#define Q_MAX_POS_10 电池容量*1162/1307

#define Q_MAX_POS_50_H_CURRENT 电池容量*1295/1307
#define Q_MAX_POS_25_H_CURRENT 电池容量*1270/1307
#define Q_MAX_POS_0_H_CURRENT 电池容量*1102/1307
#define Q_MAX_POS_10_H_CURRENT 电池容量*599/1307

#define OAM_D5 1 改为0

如何开关默认USB调试功能
\build\core\main.mk
搜索ro.debuggable 都改为ro.debuggable=1


问题描述：开机到第二阶段无限重启（开机共三个阶段）。
问题原因：CPU过温保护异常
解决方法： 关闭温度保护
           修改alps/mediatek/platform/mt6572/kernel/drivers/thermal/mtk_ts_cpu.c
		   注销29行，#define MTK_THERMAL_HW_PROTECT
		   
		   


喇叭杂音

framework/av/services/audioflinger/AudioFlinger.h文件
kDefaultStandbyTimeInNsec=seconds(3)改为0.6


修改EMMC
mediatek\custom\rtech72_we_72_kk\preloader/inc/custom_MemoryDevice.h文件
添加#define CS_PART_NUMBER[1] KMK5W000VM_B312
#define EMI_CLK[1] 266M

mediatek\build/tools/emigen/mt6572/MemoryDeviceList_MT6572.xls
增加 B312参数

B312 user版本关闭USB调试后 休眠唤醒死机

打印出MSDC0控制器的寄存器 SDC_CMD SDC_ARG分别存放发送的命令和参数.休眠唤醒第一步操作代码操作发送CMD 5 ARG1000.休眠唤醒失败的时候,LOG报错发送CMD5 ARG1000 ERROR -110.SDC_CMD 0x00000385 SDC_ARG 0x00000000.正常情况下SDC_CMD 0x00000385 SDC_ARG 0x00001000.
(原因未知,但是加上这两句打印就可以了):
修改文件alps/mediatek/platform/mt6572/kernel/drivers/mmc-host/sd.c
Msdc_command_start()函数中:
N_MSG(CMD, "CMD<%d><0x%.8x> Arg<0x%.8x>",opcode,rawcmd,cmd->arg);后面增加
ERR_MSG("CMD<%d><0x%.8x> Arg<0x%.8x>",opcode,rawcmd,cmd->arg);

sdc_send_cmd(rawcmd,rawarg);前面增加
ERR_MSG("msdc_command_start rawcmd=%x,rawarg=%x\n",rawcmd,rawarg);

关闭过热保护

mediatek/platform/mt6572/kernel/drivers/thermal/mtk_ts_cpu.c
注销 //#define MTK_THERMAL_HW_PROTECT

去掉屏幕虚拟按键
mediatek custom common resource_overlay frameworks base core res res values 


里面有一个config.xml，文件内config_showNav那个改成false就行 

打开串口后，休眠电流大

查看log，搜索uart：!!! CANNOT GET SLEEP ACK FROM UART !!!
mediatek\platform/mt6572/kernel/core/Mt_spm_pcm.c
spm_request_uart_to_sleep()函数中，等待获取ACK信号，获取不到return false
此处 全部注释 直接return 0


关闭串口log
1 编译成user版本
2 eng版本关闭串口log
alps/bootable/bootloader/lk/app/mt_boot/mt_boot.c
printk.disable_uart=1



User版本打开串口log:

alps/bootable/bootloader/lk/app/mt_boot/mt_boot.c的
boot_linux()函数：
if (!has_set_p2u) {
#ifdef USER_BUILD
   sprintf(cmdline,"%s%s",cmdline," printk.disable_uart=1");
#else
   sprintf(cmdline,"%s%s",cmdline," printk.disable_uart=0");
#endif
}
修改为：
if (!has_set_p2u) {
#ifdef USER_BUILD
   sprintf(cmdline,"%s%s",cmdline," printk.disable_uart=0 ignore_loglevel");
#else
   sprintf(cmdline,"%s%s",cmdline," printk.disable_uart=0");
#endif
}

关闭串口控制台(否则会影响串口的通信)
注释alps/mediatek/config/mt6572/init.rc
#on property:persist.uartconsole.enable=1
#write /proc/mtprintk 1

#on property:ro.debuggable=1
#start console

给串口权限

Alps/mediatek/config/rtech72_we_72_kk/init.project.rc
Chmod 0777 /dev/ttyMT1
Chmod 0777 /dev/ttyMT0

设置uart吐log口
在alps\mediatek\custom\$project\preloader\inc\cust_bldr.h
修改#define CFG_UART_LOG 这个宏定义，例如uart log需要从uart 1 吐出来，则
#define CFG_UART_LOG

打开串口adb 5442 uart开关adb 3302 user版本抓log 5246

修改充电电流	
Mediatek/custom/mt6572/kernel/battery/battery/cust_charging.h
#define NON_STD_AC_CHARGER_CURRENT CHARGE_CURRENT_500_00MA

修改默认语言
alps/mediatek/config/rtech72_we_72_kk/project_config.mk          MTK_PRODUCT_LOCALES =把zh_CN 复制到第一个 



[FAQ07302][LED]如何配置LCD背光和LED，调试方法
[FAQ08549]如何把"设置--安全--未知来源"默认
打开 
关机界面添加重启菜单
FAQ10004
自定义的重启菜单图标好像加载不上，换成关机的那个图标就好了。第五步添加reboot这段函数是有问题的，需要加上reason这个变量。shutdownthread.reboot(mcontex,reason,confirm);   reason 这个变量要自己添加定义final String reason;  这个变量的初始化是在代码的940多行的样子，添加reason赋值，reason = "zzzzz_global_action_power_reboot",重新rebuild就行了。（所赋的值是在values/string里面添加的字符串）。
系统内置第三方输入法apk
按照预置APP(FAQ04300)操作之后可能会出现编译好的system/app文件下无法生成.apk而是生成一个压缩包。此时在编译好的out/tartget/ProjectName/下有一个system的文件夹，把system文件夹copy到别的目录，在alps/mediate/build/tools/images/下有systemimage的解压和打包命令的bin文件
在system/app/文件夹删除LatinIMEI.apk和LatinIMEI.odex文件，把下载的xunfei.apk放到这个目录
把alps/mediate/build/tools/images/下make_ext4fs拷贝到system同级目录执行
./make_ext4fs –l 512M –s –a system  system.img  system 
重新打包system.img.此时系统自带的Latin输入法已经删除，输入法只有我们内置的讯飞输入法，系统会默认选择讯飞输入法，

此方法也可快速设置开关机动画和铃声。制作好的bootnaition和shutnation压缩包可直接放进system/media目录 重新打包system.img即可
定制设置菜单item 显示效果如图

 
文字显示的定义在alps/packages/apps/Settings/values-zh-rCN(不同的语言可设置不同的values)/strings。可直接修改文件汉字字符串的定义，如关于手机修改成关于终端。
删除设置菜单item，在alps/packages/apps/Setting/res/xml/setting_header.xml文件。如删除设置菜单，电池这一项，需注释代码
<!-- Battery -->


<!-- <header android:id="@+id/battery_settings" android:fragment="com.android.settings.fuelgauge.PowerUsageSummary" android:icon="@drawable/ic_settings_battery" android:title="@string/power_usage_summary_title" /> -->


<!-- Application Settings -->
修改完之后alps/packages/apps/Settings/AndroidMainfest.xml文件，可直接在alps目录执行./mk –t mm packages/apps/Settings 看log报错注释AndroidMainfest.xml对应header id的调用。 此命令会更新Setting.apk,在alps/out/target/retch72_we_72_kk/system/priv-app/下，可用adb push直接替换系统的Setting.apk重新开机看调试效果。
（对应item的string id可在alps/packages/apps/Setting/res/values-zh-rCN/strings.xml文件找到，然后在header文件搜索英文的string name ,编译Settings.apk时有时候Settings/src/com/android/settinfs/Setting.java文件有对应报错，应当予以注释）.

定制桌面app图标 效果如下
 
有时候客户会要求删除不需要的app，此类方法可以参考内置输入法的方式在system/app和system/priv-app/文件内删除对应的app然后重新打包即可，注意，Gallery2.apk不要删除，这是相机个图库的app删除之后会出现systemui和android phone的报错，此类图标需要隐藏，如果系统开机有Exchanges报错，需删除Exchanges.apk即可。
桌面隐藏某个app图标，如上述相机和图库的图标。
]
 
KK:
1. 请修改LauncherModel.java的loadAllApps()方法，如下：
......
// Create the ApplicationInfos
for (int i = 0; i < apps.size(); i++) {
ResolveInfo app = apps.get(i);
// This builds the icon bitmaps.
mBgAllAppsList.add(new AppInfo(packageManager, app,
mIconCache, mLabelCache));
}
//mtk add begin
mBgAllAppsList.removePackage("packageName");
//mtk add end
mBgAllAppsList.reorderApplist();
......
Package name 可在对应app的文件AndroidMainfest.java内看到，如com.android.camer、con.android.gallery3d等
Backuprestor（备份与恢复）此项删除不了，找办法中
 
App开机定义成launcher启动
那个app做成launcher的方法你告诉我下吧

<category android:name="android.intent.category.HOME" />
                <category android:name="android.intent.category.DEFAULT" />
这个添加在
 
注释的地方
淡蓝色的 
禁止下拉菜单
然后禁止下拉菜单
这个 app 页面 多吗
需要在每个 activity中添加  代码 
 http://www.jb51.net/article/78227.htm

删除下拉菜单某个item
/frameworks/base/packages/SystemUI/src/com/android
此文件下有一个QuickSettings.java 在此文件下可以看到parent.addView(imeTile);
比如删除此项直接注释掉这句话就行。直接搜这个  parent.addView  就可以找到全部，然后删除想要删除的某个item即可








/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








