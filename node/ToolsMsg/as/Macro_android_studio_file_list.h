
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
����·������:
basePath = D:\SVN\app\Calculator
//basePath = \\192.168.2.115\xiaoj\9820\idh.code


/***********************************************************************/
/******************************* file **********************************/
/***********************************************************************/

.gitignore
.gradle
.idea
app
build.gradle
//	������ʹ�õ�android gradle�����ָ������aar����apk�� 
//1) ��Ϊ��:
//	apply plugin: "com.android.library" 
//2) ����apk:
//	apply plugin: "com.android.application"
//3) ��·��:
//  classpath 'com.android.tools.build:gradle:3.2.0'
//4) �汾��:
//	android {
//	    defaultConfig {
//	        minSdkVersion 19
//	        targetSdkVersion 28
//	        versionCode 1
//	        versionName "1.0"
//	    }
//	}

CS_Home_JXJ1.iml
file.txt
gradle
gradle.properties
gradlew
gradlew.bat
library_new
local.properties
//	�������õ�ʹ�õ�Build Tools��SDK�汾����local.propertiesָ����SDKĿ¼�в����Ƿ���ƥ��İ汾��û�еĻ��ᱨ����ʾ��װSDK�ȡ�

settings.gradle
//	��������ȡsettings.gradle���ã�������ģ�鶼���ص���ǰStudio�Ĺ���Ŀ¼�С�

.gradle\4.6\...
.gradle\vcsWorkingDirs\gc.properties

.idea\caches
.idea\codeStyles
.idea\gradle.xml
//	gradle��Ϣ
.idea\libraries
.idea\misc.xml
.idea\modules.xml
//	������Щģ��
.idea\runConfigurations.xml
.idea\workspace.xml
//	��¼����ĸ�������
.idea\caches\build_file_checksums.ser
.idea\codeStyles\.xml
.idea\libraries\Gradle__android_..._jar.xml

app\.gitignore
app\app.iml
//	�ļ��ж�����ģ������������Ϣ����Facet��ȻΪjava-gradle������·��ΪbuildĿ¼��Դ��·����������·����Ϣ
app\build
//	�����в�������ʱ�ļ����������ɵ�apk�ļ���build/outputs/apkĿ¼��
app\build.gradle
//	[1.0] ----------------------------------
//	ģ�������ļ�������ģ����õ�SDK��Build Tools�汾�������ǿ��ļ���������apk�ļ�����Ϣ

//	[1.1] build.gradle ����:so�ļ�
//	#�����������(��˼�ǻ��libs�ļ��е���jniLibs�ļ��У�����ֱ����so����)
//	android {
//		sourceSets {
//		    main {
//		        jniLibs.srcDirs = ['libs']
//		    }
//		}
//	}


//	[1.2] build.gradle ����:Jar�ļ�
//	dependencies {
//	# һ��������libsĿ¼������jar�ļ�
//		compile fileTree(include: ['*.jar'], dir: 'libs')
//	# ��:
//		implementation fileTree(include: ['*.jar'], dir: 'libs')
//	# implementation �������������ݣ����� compile ������������
//	# ������һ����jar�ļ�
//	    compile files('libs/zxing.jar')
//	}


//	[1.3] build.gradle ����:������Library��
//	#1) ��������Library���ļ����Ƶ���Ŀ��Ŀ¼�£�����Ŀ��Ŀ¼�µ� settings.gradle �ļ���������������:
settings.gradle
//	include ':app', ':PullToRefresh'

//	#2)  Ȼ���app/build.gradle��������������:
app\build.gradle
//	compile project(':PullToRefresh')

//	#3  �Ƽ�����Ŀ��Ŀ¼���½�һ���ļ��У���extras�ļ��У�������Library���ļ������Ƶ����ļ��£�
//	#   ����ͳһ���������������������Ӧ������������:
//	include ':app', ':extras:PullToRefresh'
//	compile project(':extras:PullToRefresh')


//	[1.4] build.gradle ����:aar�ļ�
//	# aar��ʵҲ��һ��ѹ���ļ������jar�ļ������ܹ�����res��Դ�ļ��ȣ�aar�ļ������뷽ʽ������:
//	#1) Module��ʽ����
//	#   ѡ��File�˵������ߴ�Project Structure���棬����µ�Module��New Module������ѡ��Import .JAR/.AAR Package��
//	#   ѡ��Ŀ��aar�ļ����롣����֮������Ŀ��Ŀ¼�»��Զ�����һ���µ��ļ��з���aar�ļ����������ļ�����:
//	#   ����дͼƬ����
//	#   Ȼ���app moduleĿ¼�µ�build.gradle�����ļ����� dependencies ��������������ü���:
app\build.gradle
//	compile project(':qiniu-android-sdk-7.2.0')
//	#   ע��:�������뷽ʽ�޷��鿴aar�ļ��еĴ������Դ���ļ���

//	#2) libsĿ¼������
//	#   ��aar�ļ����Ƶ�app moduleĿ¼�µ�libs�ļ����У�Ȼ���app moduleĿ¼�µ�build.gradle�����ļ���
//	#   ��androidһ�����������:
//	repositories {
//	    flatDir {
//	        dirs 'libs'
//	    }
//	}
//	#   Ȼ������dependenciesһ�������:
//	compile(name:'qiniu-android-sdk-7.2.0', ext:'aar')


//	[1.5] build.gradle ����:jcenter��maven�ֿ��ļ�
//	#1) ����Ŀ��Ŀ¼��build.gradle�ļ�����Ӳֿ⣬��:
build.gradle
//	buildscript {
//	    repositories {
//	        jcenter()
//	    }
//	    dependencies {
//	        classpath 'com.android.tools.build:gradle:2.1.0'
//	    }
//	}
// 
//	allprojects {
//	    repositories {
//	        jcenter()
//	    }
//	}
// 
//	task clean(type: Delete) {
//	    delete rootProject.buildDir
//	}
//	#2) Ȼ���ٸ���Module��build.gradle�����ļ���dependencies�������������
//	#   ��ʽΪ��compile ��name:version���࣬��:
app\build.gradle
//	dependencies {
//		compile 'com.squareup.okhttp3:okhttp:3.2.0'
//	}



settings.gradle
//	include ':app', ':PullToRefresh'
//	# Ȼ���app/build.gradle��������������:
app\build.gradle
//	compile project(':PullToRefresh')
//	# �Ƽ�����Ŀ��Ŀ¼���½�һ���ļ��У���extras�ļ��У�������Library���ļ������Ƶ����ļ��£�
//	# ����ͳһ���������������������Ӧ������������:
//	include ':app', ':extras:PullToRefresh'
//	compile project(':extras:PullToRefresh')


app\libs
//	ģ�������Ķ�̬�⣨so�ļ�������jar���ļ���
//	���so:
app\libs\arm64-v8a\lib...so
app\libs\armeabi\lib...so
app\libs\x86\lib...so
//  soҲ���Է���:app\src\main\jniLibs\armeabi\libJNMLib_jni.so

app\proguard-rules.pro
//	���������ļ�
app\src
//	Դ��Ŀ¼������JavaԴ���롢��Դ�ļ���AndroidManifest�ļ���

app\build\
app\src\androidTest
app\src\main
app\src\test
app\src\androidTest\java
app\src\androidTest\java\com\example\administrator\cs_home_jxj1\ExampleInstrumentedTest.java

app\src\main\AndroidManifest.xml
//	1) [2.1] apk/sdk�汾��������app\build.gradle��
//	2) roundIcon:
//		����Android�½���Ŀ����Զ���������ͼ�꣬icon��roundicon��
//		һ������ͨͼ�꣬һ����Բ��ͼ�ꡣ����Android�Դ�ģ��������ʱ��ʾ�õ�ͼ�����Բ��ͼ�ꡣ
�л�ϵͳ����Ϊ��������ʱ��actionbar����û�б�Ϊ�����������С�

app\src\main\java
app\src\main\res
app\src\main\java\com
app\src\main\java\com\example
app\src\main\java\com\example\administrator\cs_home_jxj1\MainActivity.java

app\src\main\res\drawable
app\src\main\res\drawable-v24
app\src\main\res\layout
app\src\main\res\mipmap-anydpi-v26
app\src\main\res\mipmap-hdpi
//	����ߴ�: 48 * 48
app\src\main\res\mipmap-mdpi
//	����ߴ�: 72 * 72
app\src\main\res\mipmap-xhdpi
//	����ߴ�: 96 * 96
app\src\main\res\mipmap-xxhdpi
//	����ߴ�: 144 * 144
app\src\main\res\mipmap-xxxhdpi
//	����ߴ�: 192 * 192

//	[3.1] Android�Է���mipmapĿ¼��ͼ��� ������Ļ�ܶȣ���ȥ����ƥ���һ��ģ�
//	Ȼ��ϵͳ�Զ���ͼƬ�������ţ��Ӷ��Ż���ʾ�ͽ�ʡ��Դ��ʹ������˵��mipmap��������
//	��Ŀǰ�İ汾��˵��mipmapҲû����ȫȡ��drawable����˼��
//	Ϊ�˸��õ���ʾЧ�����ٷ������������͵�ͼƬ��Դ���Էŵ�mipmapĿ¼��
//		Launcher icons.
//		Action bar and tab icons.
//		Notification icons



app\src\main\res\values
app\src\main\res\drawable\ic_launcher_background.xml
app\src\main\res\drawable-v24\ic_launcher_foreground.xml
app\src\main\res\layout\activity_main.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher_round.xml
app\src\main\res\mipmap-hdpi\ic_launcher.png
app\src\main\res\mipmap-hdpi\ic_launcher_round.png
app\src\main\res\mipmap-mdpi\ic_launcher.png
app\src\main\res\mipmap-mdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher_round.png
app\src\main\res\values\colors.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml
	
app\src\main\res\raw
app\src\main\res\assets
//	res/raw��assets������
//	������Ŀ¼�µ��ļ����ᱻ�����APK�����Ҳ������κε�ѹ������
//	assets��res/raw��ͬ�����ڣ�assets֧��������ȵ���Ŀ¼��
//	��Щ�ļ����������κ���ԴID��ֻ��ʹ��AssetManager����Ե�·����ȡ�ļ���
//	�������ԭʼ�ļ������ļ���νṹ������Կ��ǽ�ĳЩ��Դ������assetsĿ¼�¡�

app\src\test\java\com\example\administrator\cs_home_jxj1\ExampleUnitTest.java

gradle\wrapper
gradle\wrapper\gradle-wrapper.jar
gradle\wrapper\gradle-wrapper.properties

library_new\build.gradle
library_new\libs
library_new\lint.xml
library_new\src
library_new\libs\jpush-sdk-release1.6.4.jar
library_new\src\main
library_new\src\main\AndroidManifest.xml
library_new\src\main\java
library_new\src\main\res
library_new\src\main\java...
library_new\src\main\res\layout
library_new\src\main\res\values
library_new\src\main\res\layout\slidingmenumain.xml
library_new\src\main\res\values\attrs.xml
library_new\src\main\res\values\ids.xml
