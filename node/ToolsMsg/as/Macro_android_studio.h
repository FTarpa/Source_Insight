
基础路径设置:
//basePath = F:\9820e
basePath = \\192.168.2.115\xiaoj\9820\idh.code

/***********************************************************************/

//目录[Num][Ca]:
//安装
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.1\] 安装jdk
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.2\] 安装 gradle
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.3\] Terminal 路径:
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.4\] ADB 路径:
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.5\] Git 路径:
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.6\] //groovy 路径:
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[1.7\] gradlew命令:
//配置
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[2.1\] 修改AS配置文件
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[2.2\] 生成AS项目配置文件
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[2.3\] 导入系统源代码至AS
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[2.4\] 配置AS的JDK、SDK
//as汉化包
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[3.1\] as汉化包
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[3.2\] 更新SDK
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[3.3\] android studio改变配色方案
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[3.4\] 工具栏添加常用按钮
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[3.5\] 文件乱码问题
//签名
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[5.1\] AppTest 签名
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[5.2\] 如何更改项目名称
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[5.3\] 导入 eclipse project
//一个app打包多个APK
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[6.1\] 一个app打包多个APK
Save:SI\node\ToolsMsg\as\Macro_android_studio.h \[6.2\] Android-Studio多个项目添加依赖同一个模块


/***********************************************************************/


[1.1] 安装jdk
C:\Program Files\Java\jdk1.8.0_05\lib

//env:
JAVA_HOME = C:\Program Files\Java\jdk1.8.0_05
path	 += %JAVA_HOME%\bin;%JAVA_HOME%\jre\bin;
CLASSPATH = .;%JAVA_HOME%\lib;%JAVA_HOME%\lib\tools.jar
//ver:
java -version


[1.2] 安装 gradle
//第1次自动下载, 下载路径:
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg
	
//配置环境变量，新建 GRADLE_HOME 为
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg\gradle-4.6
//然后在系统变量的Path里添加
%GRADLE_HOME%\bin
//配置完成后如果仍有问题，重启AS

//查看版本号:
gradlew -v
//	Gradle 4.6

	
[1.3] Terminal 路径:
//默认不用改
Setting—->Tools—–>Terminal—–>Shell Path:cmd.exe


[1.4] ADB 路径:
//系统变量的Path里添加
E:\save\android\sdk\platform-tools


[1.5] Git 路径:
//系统变量的Path里添加
D:\Program Files\Git\bin
//查看版本号:
git - -version


[1.6] //groovy 路径:
//系统变量的Path里添加
D:\groovy-2.4.12\bin
//查看版本号:
groovy -version


[1.7] gradlew命令:

1) 检查依赖并编译打包,即使你采用了多渠道打包,依然可以,可以生成所有的 apk。(涵盖 release 和 dubug)
gradlew build

2) 编译并打印日志
gradlew build --info

3) clean
gradlew clean

4) 编译并打包 debug 包
gradlew installDebug

5) 查看构建的版本
gradlew -v

6) 查看三方库依赖
gradlew -q app:dependencies

7) 查看详细的依赖信息
gradlew dependencies --info


//gradlew -v :  第一次运行这个命令，系统会帮我们下载gradle到本地，下载到的路径是：
//D:\android\android_studio\gradle\gradle-2.8
//gradlew assembleReleasF: 
//gradle build






/***********************************************************************/


[2.1] 修改AS配置文件
//在AS的bin目录下，打开studio64.vmoptions文件，修改成如下数值：
//C:\Program^Files\Android\Android^Studio\bin\studio64.exe
C:\Program^Files\Android\Android^Studio\bin\studio64.exe.vmoptions
//	-Xms256m
//	-Xmx1280m
//	-XX:ReservedCodeCacheSize=240m
//	-XX:+UseConcMarkSweepGC
修改成
//	-Xms1024m
//	-Xmx2048m


[2.2] 生成AS项目配置文件
//1、首先全局编译一次。 
//2、查看out/host/linux-x86/framework/idegen.jar是否存在； 
out/host/linux-x86/framework/idegen.jar
//若已不存在，先执行下面命令以生成它：
source build/envsetup.sh
lunch [选择刚全局编译时的参数]
mmm development/tools/idegen/
//3、执行以下命令以生成所需配置文件。
development/tools/idegen/idegen.sh
development/tools/idegen/templates/android.ipr


[2.3] 导入系统源代码至AS
//1、此时在根目录下，就已经生成了android.ipr、android.iml，可以将整个源代码导入AS。 
./android.ipr
./android.iml
//2、（可选）设置模块过滤 
./android.iml excludeFolder
//有些不想导入AS的模块，可以通过在android.iml中加入excludeFolder，达到过滤效果。

//	<excludeFolder url="file://$MODULE_DIR$/.repo"/>
//	<excludeFolder url="file://$MODULE_DIR$/abi"/>
//	<excludeFolder url="file://$MODULE_DIR$/frameworks/base/docs"/>
//	<excludeFolder url="file://$MODULE_DIR$/art"/>
//	<excludeFolder url="file://$MODULE_DIR$/bionic"/>
//	<excludeFolder url="file://$MODULE_DIR$/bootable"/>
//	<excludeFolder url="file://$MODULE_DIR$/out"/>
//	<excludeFolder url="file://$MODULE_DIR$/pdk"/>
//	<excludeFolder url="file://$MODULE_DIR$/prebuilts"/>
//	<excludeFolder url="file://$MODULE_DIR$/sdk"/>
//	<excludeFolder url="file://$MODULE_DIR$/system"/>
//	<excludeFolder url="file://$MODULE_DIR$/tools"/>
//	<excludeFolder url="file://$MODULE_DIR$/trusty"/>
//	<excludeFolder url="file://$MODULE_DIR$/vendor"/>
//	...
//3、第一次导入时间有点长，耐心等待
在Android Studio 中打开 android.ipr文件


[2.4] 配置AS的JDK、SDK
//下面的这些操作，是为了让在看代码的时候，能够自由、正确地显示、跳转到相应的地方。 
//在上一步操作之后的等待期间刚好让我们来配置一下JDK和SDK。 
//在AS中参照下图Project Structure设置，在SDKs设置中加入必须的JDK，SDK。 
//创建一个新的JDK,可以取名为1.7(No Libraries)，然后删除classpath标签页下面的jar文件。 这样可以确保使用Android源码里的库文件。 

//https://blog.csdn.net/asahinokawa/article/details/79115381
...
	
//https://www.cnblogs.com/l2rf/p/6433773.html
setting->modules->android->del ...
setting->sdks->del ...
接着点击加号的JARs or directories
将你源码的frameworks及external和你用到的其他跳转目录添加到依赖中，然后apply即可。




/***********************************************************************/


[3.1] as汉化包
//as汉化包：
https://github.com/pingfangx/TranslatorX/wiki
C:\Program^Files\Android\Android^Studio\lib\resources_zh_CN_AndroidStudio_3.2.1_r1.jar


[3.2] 更新SDK
Tools –>SDK Manager->sdk19->apply 


[3.3] android studio改变配色方案
//1)先设置android studio下当前主题为Darcula。
//	在File->settings ->Appearance -> theme 设置主题为 Darcula。

//2)下载配色相关的jar包。
//	下载地址：github下载地址
//	https://github.com/OtaK/jetbrains-monokai-sublime
//
//3)在Android Studio中file->import setting 选择解压目录下的Monokai-Sublime.jar，
//	下面是如何导入 Monokai-sublime.jar 如图
//
//	在jetbrains-monokai-sublime-master里面选择对应的jar."OK"
//	勾选EditorColors ,"OK"。
//	重启Android studio.
//	重启后再 settings下选择 editor  ,选择 colors& Fonts,  "theme"右边菜单选择 Monkai-Sublime
//	点击Apply 后 ，ok,可以看到修改之后的效果了。


[3.4] 工具栏添加常用按钮
//显示 toolbar:
view->toolbar

//1.File --> Settings--> Appearance & Behavior --> Menus and Toolbars,
//在右侧的选项中选择 Main Toolbar 
D:\SVN\app\CS_Home_JXJ1\app\src\main\res\drawable-hdpi\mediaplay_loop.png.png


[3.5] 文件乱码问题
//1、IDE乱码
File > Settings > Appearance & Behavior > Appearance，
//	将default fonts改为Microsoft YaHei（改成其它SimHei,SimSun也行，但个人觉得雅黑好看些）。
//2、代码里设置中文，到了真机上TextView之类的控件上就显示为乱码，如：xxx.setText("中文")。
//	我现在加入的这个项目是由原来Eclipse创建的，一旦有乱码问题，同事就说把Properties里的编码改成GBK就可以了。
//	先不论他的对错，但他这么一改确实就不会乱码了，但由于我用的是Android Studio，那我该怎么办呢？
File > Settings > Editor > File Encodings 
//	Project Encoding改为UTF-8，
//	为了统一规范，我也将其它Encoding项也设置为UTF-8了。
选择“Apply”应用刚才的更改，然后重启Android Studio
//3、Gradle 乱码
//	最后，如果有朋友遇到Gradle提示中文乱码的问题，可以参考http://blog.csdn.net/sljjyy/article/details/11976099，我目前没有遇到过。






/***********************************************************************/


[5.1] AppTest 签名
D:\SVN\app\APPTest1

//gradle版本: gradle-4.6-all
D:\SVN\app\APPTest1\gradle\wrapper\gradle-wrapper.properties
//	distributionPath=wrapper/dists
//	distributionUrl=https\://services.gradle.org/distributions/gradle-4.6-all.zip
//	zipStoreBase=GRADLE_USER_HOME

//导入jar包: 
D:\SVN\app\APPTest1\app\build.gradle
//	dependencies {
//		testImplementation 'junit:junit:4.12'
//		androidTestImplementation 'com.android.support.test:runner:1.0.2'
//		androidTestImplementation 'com.android.support.test.espresso:espresso-core:3.0.2'
//		implementation 'com.google.code.gson:gson:2.8.5'
//	}

//签名jks:
//1、方式1：通过Android Studio进行签名：
E:\save\android\ApkSigned\test.jks
//2、方式2：通过命令行的方式进行签名：
gradlew assembleRelease


//生成apk:
D:\SVN\app\APPTest1\app\release\app-release.apk


[5.2] 如何更改项目名称
右键->重构->rename
//	1. 关闭Android Studio 
//	2. 修改project所在路径的文件夹名字为[NewName]
//	3. 打开Android Stuido，import新的[NewName]路径工程(很重要,重新import工程，Android Studio会自动修改部分相关的project名字引用)
//	4. 修改根目录下的.iml文件名为[NewName].iml，及该文件中的external.linked.project.id=[NewName]
//	5. 修改.idea/modules.xml里面的
//	<module fileurl="file://$PROJECT_DIR$/[NewName].iml" filepath="$PROJECT_DIR$/[NewName].iml" />


[5.3] 导入 eclipse project
//File----new---import—选择一个eclipseproject（必须是这个project最顶层的文件夹）
//然后会报错：
//"There are unrecoverable errors which must be corrected first"
//然后这么改：把eclipse的project里面的the?project.properties
D:\SVN\app\CS_Home_JXJ\project.properties
//	target=android-21
//	android.library=false
//	android.library.reference.1=../library_new
删掉 android.library.reference.1=../appcompat_v7

然后引入到Android Studio里面
之后把这句话加入到app/build.gradle:
D:\SVN\app\CS_Home_JXJ1\cS_Home\build.gradle
//	dependencies{
//		compile project(':library_new')
//		compile files('libs/juhe_sdk_v_2_7.jar')
//		compile files('libs/org.json.jar')
//		compile files('libs/sun.misc.BASE64Decoder.jar')
//		compile files('libs/zxing.jar')
//		compile fileTree(include: ['*.jar'], dir: 'libs')

//	}

有可能导入之后，说SDK不支持你的版本。这个时候你可以安装相应的平台，
也可以修改app/build.gradle文件里面的额targetSDK版本，修改dependicies的版本


D:\SVN\app\CS_Home_JXJ1\cS_Home\build.gradle
//    compileSdkVersion 28
//    minSdkVersion 19
//    targetSdkVersion 28


//对比其他项目修改:
D:\SVN\app\CS_Home_JXJ1\.idea\gradle.xml
//	<option name="modules">
//	  <set>
//		<option value="$PROJECT_DIR$" />
//		<option value="$PROJECT_DIR$/cS_Home" />
//	  </set>
//	</option>
修改："$PROJECT_DIR$/cS_Home"

D:\SVN\app\CS_Home_JXJ1\.idea\modules.xml
//    <modules>
//      <module fileurl="file://$PROJECT_DIR$/CS_Home_JXJ1.iml" filepath="$PROJECT_DIR$/CS_Home_JXJ1.iml" />
//    </modules>

//对比其他项目修改:



/***********************************************************************/


[6.1] 一个app打包多个APK
//一个app打包多个APK
Save:SI\node\ToolsMsg\as\Macro_android_studio_app.h \[1.1\]


[6.2] Android-Studio多个项目添加依赖同一个模块
//Android-Studio多个项目添加依赖同一个模块
Save:SI\node\ToolsMsg\as\Macro_android_studio_app.h \[2.1\]



/***********************************************************************/
/***************************** as other  *******************************/
/***********************************************************************/






