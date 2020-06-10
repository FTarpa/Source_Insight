
基础路径设置:
//basePath = 
basePath = D:\project\Android\
base:\\
tmpPath = base:tmp
tmp:\\
tmp2Path = base:tmp2
tmp2:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\install\Macro_android_tool.h \[1.1\] Layout-------------布局视察器
Save:node\android\install\Macro_android_tool.h \[1.2\] DDMS---------------查看程序使用时所运行的线程信息
Save:node\android\install\Macro_android_tool.h \[1.3\] 
Save:node\android\install\Macro_android_tool.h \[1.4\] etc1tool-----------转换成pkm图片 格式
Save:node\android\install\Macro_android_tool.h \[1.5\] Lint---------------清除未使用图片资源
Save:node\android\install\Macro_android_tool.h \[1.6\] Webp 图片
Save:node\android\install\Macro_android_tool.h \[1.7\] 
Save:node\android\install\Macro_android_tool.h \[1.8\] 
Save:node\android\install\Macro_android_tool.h \[1.9\] 
Save:node\android\install\Macro_android_tool.h \[1.10\] SecureCRT
Save:node\android\install\Macro_android_tool.h \[1.11\] 
Save:node\android\install\Macro_android_tool.h \[1.12\] 
//  2.Plugins Tool
Save:node\android\install\Macro_android_tool.h \[2.1\] Android Size Analyzer
Save:node\android\install\Macro_android_tool.h \[2.2\] 
Save:node\android\install\Macro_android_tool.h \[2.3\] 
Save:node\android\install\Macro_android_tool.h \[2.4\] 
Save:node\android\install\Macro_android_tool.h \[2.5\] 
Save:node\android\install\Macro_android_tool.h \[2.6\] 
Save:node\android\install\Macro_android_tool.h \[2.7\] 
Save:node\android\install\Macro_android_tool.h \[2.8\] 
Save:node\android\install\Macro_android_tool.h \[2.9\] 
Save:node\android\install\Macro_android_tool.h \[2.10\] 
Save:node\android\install\Macro_android_tool.h \[2.11\] 
Save:node\android\install\Macro_android_tool.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Layout-------------布局视察器
//布局视察器工具，通过
Tools > Android > Layout Inspector可以查看具体某个Activity的布局情况




[1.2] DDMS---------------查看程序使用时所运行的线程信息
tools\DDMS: 查看程序使用时所运行的线程信息，网络使用率

// 如何模拟应用程序被杀掉？
最简单的方法是在DDMS中点击"Stop Porcess"杀掉你的程序，


//  adb shell
按Home按键退出你的程序；

在控制台，敲入如下命令（Windows系统下 WIN + R -> cmd -> 回车）

//	 # 找到该APP的进程ID
//	 adb shell ps
//	 # 找到你APP的报名
//	  
//	 # Mac/Unix: save some time by using grep:
//	 adb shell ps | grep your.app.package
//	  
//	 # 按照上述命令操作后，看起来是这样子的: 
//	 # USER      PID   PPID  VSIZE  RSS     WCHAN    PC         NAME
//	 # u0_a198   21997 160   827940 22064 ffffffff 00000000 S your.app.package
//	  
//	 # 通过PID将你的APP杀掉
//	 adb shell kill -9 21997
//	  
//	 # APP现在被杀掉啦


//  并不仅仅只有Application对象是这样的，
//	其它的单例或者公有静态类也有可能会由于系统内存而被杀掉，谨记。





[1.3] 
//tool--自带工具
android: update sdk  等
android avd:
platform-tools\dmtracedump:主要是把profiling生成的trace文件处理成一个图片文件，显示方法之间的调用关系
 platform-tools\uiautomatorviewer:它可以展示出当面屏幕所呈现的视图(View)的布局(Layout)以及其尺寸大小
 traceview:方法所占用的时间百分比
monitor: 大集合
monkeyrunner :压力测试
sqlite3
mksdcard
 
cmd &背后运行
platform-tools\adb




[1.4] etc1tool-----------转换成pkm图片 格式
//转换成pkm图片 格式
1.etc1tool.exe

//	是 android sdk自带的 工具 ，在 sdk/platform-tools/ etc1tool.exe 下
//
//	这个 工具 只要 将图片 拖到 这个 exe 上，就会 生成 一个 同名的 xxx.pkm 格式的 图片。
//
//	百度网盘下载地址:http://pan.baidu.com/s/1pJzeEEn


2.texture packer工具

//	做游戏开发的应该都知道的工具，这个工具提供了 转换成 pkm 格式的 功能
//
//	百度网盘下载地址：http://pan.baidu.com/s/1o6BXZ9g

3. ARM（GPU厂商） 出的 mail texture compression 工具， 这个工具 是 专业的  处理 pkm 格式的 工具。
//
//	它提供了 两种压缩模式 ： fast 和 slow ; fast 的效果 与 上面 两种工具的效果 差不多，但是 slow 模式的 效果 在 一些 渐变色 的图片上 ，效果 更好，更平滑~
//
//	而且 它支持了 将 图片  分成 pkm 图片 和 图片 的 透明度 图  两张图片 一次 导出。 这样 如果 我们 需要 将 pkm 图片 生成 透明度 提供了 来源~~~
//
//	以及将 pkm 可以 有透明度的 方法： http://malideveloper.arm.com/resources/sample-code/etcv1-texture-compression-and-alpha-channels/
//
//	百度网盘下载地址：http://pan.baidu.com/s/1yjqRc




[1.5] Lint---------------清除未使用图片资源
//查找并清除未使用图片资源
 通常使用AndroidStudio中自带的Lint工具来帮助我们查找未使用的图片资源，在AndroidStudio的菜单中选择Analyze->Inspecting Code即可进入Lint工具分析。
       分析过后，我们在结果列表中找到Unused resource这一栏打开，里面显示的都是未被使用的资源列表，用户可以参照来手动删除资源。


//使用tinypng优化Android的资源图片
官网：https://tinypng.com/




[1.6] Webp 图片
// Webp 图片
 Webp是由google开发支持的新型图片格式，同时提供有损和无损压缩。WebP最初在2010年发布，
	目标是在最小的压缩损失下，提供尤其是在网络上应用的开放图片格式，竞争JPEG。
	Webp可达到与jpg不相上下的图片质量，但是有着更小的文件，可以减少图片档的传送时间。
官方介绍：https://developers.google.com/speed/webp/docs/precompiled
具体使用可以参考该教程：https://blog.netsh.org/posts/convert-webp-file_1353.netsh.html


// 不要第三方包中的图片
 此外，我们所引入的第三方包中可能也引用了资源图片，但是其中的某些我们可能是不想要的，
比如ldpi和xxxhdpi，那么是否可以设置什么东西来让打包的时候剔除他们呢？是可以的，可以配置下build.gradle

defaultConfig {
    resConfigs "en", "de", "fr", "it"
    resConfigs "hdpi", "xhdpi", "xxhdpi"
}



//覆盖第三方库里的大图



//shape制作背景图
背景图（纯色背景、带边框、圆角）


//RotateDrawable
RotateDrawable 代替仅仅是方向不同的“内容相同”的图片


//layer-list
用layer-list来制作多层图片从而达到复用





shape
// 实心
<solid android:color="#ff9d77"/>
// 渐变
<gradient android:startColor="#ff8c00"
	android:endColor="#FFFFFF"
	android:angle="270" />
// 描边
<stroke android:width="2dp"
	android:color="#dcdcdc" />
// 圆角
<corners android:radius="2dp" />





[1.7] 




[1.8] 




[1.9] 




[1.10] SecureCRT
//tool--其他工具
// SecureCRT:
Save:node\ToolsMsg\Macro_SecureCRT.h
//SecureCRT.exe:
open: C:\Program^Files\VanDyke^Software\Clients\SecureCRT.exe
//	\\192.168.2.115\xiaoj



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] Android Size Analyzer

// size-analyzer
Useful = False
//	Retrofit
cd:tmp: git clone https://github.com/android/size-analyzer
//  
tmp:\\


// build 
./gradlew：analyzer：executableJar

// use 
java -jar analyzer/build/libs/analyzer.jar check-bundle <path-to-aab>
java -jar analyzer/build/libs/analyzer.jar check-project <path-to-project-directory>

// Plugin
./gradlew :studio_plugin:buildPlugin

//
您可以从Android Studio中“分析”菜单中的“分析应用程序大小...”菜单项中
调用当前加载的项目上的大小分析器。



[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





