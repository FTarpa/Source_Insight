
基础路径设置:
Inward   = True
Backward = 68
//
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\Demo\android_base
base:\\


// 简单索引
Save:node\android\project\Macro_file_demo.h   build.gradle
Save:node\android\project\Macro_file_demo.h   app\build.gradle
Save:node\android\project\Macro_file_demo.h   app\\src\\main\\AndroidManifest.xml
Save:node\android\project\Macro_file_demo.h   app\\src\\main\\res
Save:node\android\project\Macro_file_demo.h   Mvp:
Save:node\android\project\Macro_file_demo.h   mipmap:


// 获取文件列表
AsFile:base:


// git updata
_git_auto_updata\
_git_auto_updata\git_auto_updata.bat


README.md






build.gradle                                // maven配置, gradle版本, kotlin版本
build.gradle          aliyun                //    maven Bug
build.gradle          clean( )              //    clean

Git_NB.iml                                  // 模块配置, java-gradle, build目录, JDK版本
gradle.properties                           // 内存配置, AndroidX
gradlew                                     //
gradlew.bat                                 //
gradle\wrapper\                             //   刚下载的demo不删除可能报错
gradle\wrapper\gradle-wrapper.properties    // gradle版本(自动生成)
local.properties                            // SDK版本, Build Tools
README.md                                   //
settings.gradle                             // 多个app设置, modules name设置, 将所有模块都加载到当前Studio的工程目录中。

app\
app\.gitignore
app\app.iml
app\build.gradle                            // 模块配置, SDK版本, Build Tools版本, 生成aar/apk, 版本号与依赖关系 
app\build.gradle      sourceSets            //    源码路径
app\build.gradle      fileTree              //    引入jar
app\build.gradle      project( )            //    引入第三方Library库
app\build.gradle      kotlin_version        //    kotlin版本Bug
app\build.gradle      flatDir               //    引入aar文件 (app/libs/*.aar)
app\build.gradle      ext:'aar'             //    引入aar文件

app\proguard-rules.pro                      // 混淆配置文件
app\libs\                                   // 模块依赖的动态库（so文件）或者jar包
app\libs\libammsdk.jar
app\libs\arm64-v8a\lib...so                 //
app\libs\armeabi\lib...so
app\libs\x86\lib...so

app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN        // 入口Activity
app\src\main\AndroidManifest.xml  android:icon                      //    现在Android新建项目后会自动设置两个图标，icon和roundicon
app\src\main\assets\event.ttf
app\src\main\assets\

Mvp:
app\src\main\java\com\example\gitnb\                                //MVC:
app\src\main\java\com\example\gitnb\                                //   Model-View-Controller，即模型-视图-控制器
app\src\main\java\com\example\gitnb\                                //Mvp:
app\src\main\java\com\example\gitnb\                                //   Model-View-Presenter  模型-视图-层现器

app\src\main\java\com\example\gitnb\api\
app\src\main\java\com\example\gitnb\api\*.java
app\src\main\java\com\example\gitnb\api\                            // bean---------Model-----实体类
app\src\main\java\com\example\gitnb\account\                        // account------
app\src\main\java\com\example\gitnb\app\                            // app----------
app\src\main\java\com\example\gitnb\app\*.java
app\src\main\java\com\example\gitnb\config\                         // config-------
app\src\main\java\com\example\gitnb\entities\                       // entities-----
app\src\main\java\com\example\gitnb\launch\                         // launch-------
app\src\main\java\com\example\gitnb\main\                           // main---------
app\src\main\java\com\example\gitnb\model\                          // model--------
app\src\main\java\com\example\gitnb\model\*.java
app\src\main\java\com\example\gitnb\module\                         // module--------将界面层以功能模块分配包。
app\src\main\java\com\example\gitnb\module\*Activity.java
app\src\main\java\com\example\gitnb\module\Welcome3Activity.java    // 入口Activity
app\src\main\java\com\example\gitnb\module\MainActivity.java	    // 主页
app\src\main\java\com\example\gitnb\music\                          // music------
app\src\main\java\com\example\gitnb\module\custom\
app\src\main\java\com\example\gitnb\module\custom\*.java
app\src\main\java\com\example\gitnb\utils\
app\src\main\java\com\example\gitnb\utils\*.java
app\src\main\java\com\example\gitnb\widget\                         // View，Widget，ViewGroup和Layout
app\src\main\java\com\example\gitnb\widget\*.java
app\src\main\java\com\example\gitnb\Test\
app\src\main\java\com\example\gitnb\Test\DiskTestBroadcast.kt
app\src\main\java\com\example\gitnb\Test\DiskTestCoroutine.kt       // 

app\src\main\res\anim\
app\src\main\res\anim\*.xml

app\src\main\res\color\
app\src\main\res\color\selector.xml                                 //
app\src\main\res\color\*.xml

app\src\main\res\drawable\                                          //
app\src\main\res\drawable\shape.xml                                 // shape
app\src\main\res\drawable\selector.xml
app\src\main\res\drawable\
app\src\main\res\drawable\
app\src\main\res\drawable\
app\src\main\res\drawable\*.xml
app\src\main\res\drawable-hdpi\
app\src\main\res\drawable-v21\


mipmap:
//   mipmap目录的图标会 忽略屏幕密度，会去尽量匹配大一点的
//	 为了更好的显示效果，官方建议如下类型的图片资源可以放到mipmap目录。
//		Launcher icons.
//		Action bar and tab icons.
//		Notification icons
app\src\main\res\
app\src\main\res\mipmap-anydpi-v26
app\src\main\res\                           // 屏幕尺寸-------图标尺寸-----密度-----比例
app\src\main\res\mipmap-ldpi                // 320 *240       48 *48       < 120       3  系统会自动将 HDPI 尺寸的图标缩小到 1/2 进行匹配
app\src\main\res\mipmap-mdpi                // 480 *320       48 *48       < 160       4  
app\src\main\res\mipmap-hdpi                // 480 *800       72 *72       < 240       6  
app\src\main\res\mipmap-xhdpi               // 1280*720       96 *96       < 320       8  -----api>8
app\src\main\res\mipmap-xxhdpi              // 1920*1080      144*144     < 480      12   --当前手机
app\src\main\res\mipmap-xxxhdpi             // 3840*2160      192*192     < 640      16  

app\src\main\res\raw                        // APK打包，不压缩; 单层目录，通过 R.resID 访问
app\src\main\res\assets                     // APK打包，不压缩; 原始多层目录结构，通过 AssetManager 访问

app\src\main\res\layout\
app\src\main\res\layout\welcome3.xml		// 入口Activity
app\src\main\res\layout-small\
app\src\main\res\layout-normal\
app\src\main\res\layout-large\              // 在较大屏幕（例如 7 英寸以上）的设备上应用此布局, ----sdk<3.2
app\src\main\res\layout-xlarge\             // -----api>9
app\src\main\res\layout-sw600dp\            // 在最小宽度为 600 dp（7 英）的设备上应用此布局,----        --        -sdk>3.2
app\src\main\res\layout-1800x1080\          // 优先查找分辨率相同的布局


app\src\main\res\layout\                     // 总宽 300   ---参考某个项目
app\src\main\res\layout-sw320dp\             // 总宽 288               
app\src\main\res\layout-sw360dp\             // 总宽 328              
app\src\main\res\layout-sw400dp\             // 总宽 379              
app\src\main\res\layout-sw480dp\             // 总宽 447              
app\src\main\res\layout-sw600dp\             // 总宽 572              
app\src\main\res\layout-sw720dp\             // 总宽 772              
app\src\main\res\layout-sw768dp\             // 总宽 718？              
app\src\main\res\layout-sw800dp\             // 总宽 758              
app\src\main\res\layout-sw900dp\             // 总宽 838              
app\src\main\res\



app\src\main\res\menu\
app\src\main\res\raw\*.svg
app\src\main\res\values\arrays.xml
app\src\main\res\values\attrs.xml
app\src\main\res\values\color.xml
app\src\main\res\values\dimens.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml                                  // Theme
app\src\main\res\values-w820dp\dimens.xml
app\src\main\res\values-v21\dimens.xml                              // SDK21 Card边界设置


apk\
apk\app-release.apk
apk\*.png, *.gif


app\build                                   // 编译临时文件
build\outputs\apk                           // apk文件


.idea\
.idea\gradle.xml                            // gradle信息, 模块信息
.idea\libraries                             // androidx lib目录
.idea\misc.xml                              // jdk版本, class目录
.idea\modules.xml                           // 包含哪些模块, iml
.idea\runConfigurations.xml                 // ignored test Producers
.idea\workspace.xml                         // 记录了你的个人设置


# 总结，特殊目录设置
app\src\main\res\raw                        // 
app\src\main\res\assets                     // 缓存静态数据文件
app\libs\                                   // 程序依赖的native库
META-INF                                    // 存放应用程序签名和证书
classes.dex                                 // 编译生成dex可执行文件
resource.arsc                               // 资源配置文件

# 查看assets优先
https://blog.csdn.net/cchp1234/article/details/77750428


