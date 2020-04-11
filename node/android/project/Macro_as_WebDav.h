
基础路径设置:
demoPath = D:\project\Android\Demo\Git_NB
demo:\\
basePath = D:\project\Android\WebDav\WebDav
base:\\

cmd_s:D:&cd D:\Save\SI\Cmd&cmd_getAsFileList demo:
cmd_s:D:&cd D:\Save\SI\Cmd&cmd_getAsFileList D:\project\Android\WebDav\WebDav


AsFile:base:
AsFile:demo:
AsFile:Save:Help\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 模块说明
Save:node\android\project\Macro_as_WebDav.h \[1.1\] demo------参数项目
Save:node\android\project\Macro_as_WebDav.h \[1.2\] gradle---model
Save:node\android\project\Macro_as_WebDav.h \[1.3\] gradle---lib
Save:node\android\project\Macro_as_WebDav.h \[1.4\] gradle---java
Save:node\android\project\Macro_as_WebDav.h \[1.5\] 
Save:node\android\project\Macro_as_WebDav.h \[1.6\] 
Save:node\android\project\Macro_as_WebDav.h \[1.7\] 
Save:node\android\project\Macro_as_WebDav.h \[1.8\] 
Save:node\android\project\Macro_as_WebDav.h \[1.9\] 
Save:node\android\project\Macro_as_WebDav.h \[1.10\] 
// 2. 启动说明
Save:node\android\project\Macro_as_WebDav.h \[2.1\] AndroidManifest.xml
Save:node\android\project\Macro_as_WebDav.h \[2.2\] Activity welcome
Save:node\android\project\Macro_as_WebDav.h \[2.3\] Activity login
Save:node\android\project\Macro_as_WebDav.h \[2.4\] Activity main
Save:node\android\project\Macro_as_WebDav.h \[2.5\] 
Save:node\android\project\Macro_as_WebDav.h \[2.6\] 
Save:node\android\project\Macro_as_WebDav.h \[2.7\] 
Save:node\android\project\Macro_as_WebDav.h \[2.8\] 
Save:node\android\project\Macro_as_WebDav.h \[2.9\] 
Save:node\android\project\Macro_as_WebDav.h \[2.10\]
// 3. 
Save:node\android\project\Macro_as_WebDav.h \[3.1\] 功能设计
Save:node\android\project\Macro_as_WebDav.h \[3.2\] 
Save:node\android\project\Macro_as_WebDav.h \[3.3\] 
Save:node\android\project\Macro_as_WebDav.h \[3.4\] 
Save:node\android\project\Macro_as_WebDav.h \[3.5\] 
Save:node\android\project\Macro_as_WebDav.h \[3.6\] 
Save:node\android\project\Macro_as_WebDav.h \[3.7\] 
Save:node\android\project\Macro_as_WebDav.h \[3.8\] 
Save:node\android\project\Macro_as_WebDav.h \[3.9\] 
Save:node\android\project\Macro_as_WebDav.h \[3.10\]
// base
Save:node\android\project\Macro_as_base.h
	




[1.1] demo------参数项目
//1) java版
https://github.com/donething/WebDav

demoPath = WebDav
demo:\\


//2) java版
https://github.com/thegrizzlylabs/sardine-android

https://github.com/aflx/Sardine-Android




[1.2] gradle---model
# 多个app
settings.gradle
//
// include ':app', ':xxx'
//

# model1
app\build.gradle  project
//
// implementation project(':Swipebacklayout')
//

# model2
xxx\build.gradle



[1.3] gradle---lib
app\build.gradle
Swipebacklayout\build.gradle




[1.4] gradle---java
build.gradle




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 


//
Save:node\Pythons\project\Macro_as_WebDav.h \[2.1\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[2.2\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[2.3\] 
// 
Save:node\Pythons\project\Macro_as_WebDav.h \[3.1\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[3.2\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[3.3\] 
// 
Save:node\Pythons\project\Macro_as_WebDav.h \[4.1\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[4.2\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[4.3\] 
// 
Save:node\Pythons\project\Macro_as_WebDav.h \[5.1\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[5.2\] 
Save:node\Pythons\project\Macro_as_WebDav.h \[5.3\] 
// 其他标号
Save:Help\Test\Macro_Test_Node_Num.h \[1.1\] 



[2.1] AndroidManifest.xml
# model1
app\src\main\AndroidManifest.xml  android.intent.action.MAIN
//  android.intent.action.MAIN
//      决定应用的入口Activity
//      若有多个，则先启动出现的第一个
//  android.intent.category.LAUNCHER
//      表示activity应该被列入系统的启动器(launcher)(允许用户启动它)
//      若有多个(成对出现)，会有多个图标显示在桌面上

	
# model2
Swipebacklayout\src\main\AndroidManifest.xml


[2.2] Activity welcome
# activity id
com.example.gitnb.module.Welcome3Activity

# layout
app\src\main\java\com\example\gitnb\module\Welcome3Activity.java
//	R.layout.welcome3

app\src\main\res\layout\welcome3.xml
//	@+id/buttonLeft

# intent
app\src\main\java\com\example\gitnb\module\Welcome3Activity.java  GitHubAuthorizeActivity
//      Intent intent = new Intent(Welcome3Activity.this, GitHubAuthorizeActivity.class);


[2.3] Activity login
# 网页版登录--ProgressWebView
https://github.com/login/oauth/authorize/?client_id=&state=2015&redirect_uri=https://github.com/Jeffmen/GitNB&scope=user,repo,gist,delete_repo,notifications
https://github.com/login/oauth/authorize/?client_id=&state=2015&redirect_uri=https://github.com/seefs/nlp_block&scope=user,repo,gist,delete_repo,notifications

# 授权--layout
app\src\main\java\com\example\gitnb\module\GitHubAuthorizeActivity.java
//	R.layout.activity_github_authorize

app\src\main\res\layout\activity_github_authorize.xml
//	@+id/buttonLeft

# AppBarLayout--滚动收缩
app\src\main\res\layout\toolbar_for_activity.xml



[2.4] Activity main
# layout
app\src\main\java\com\example\gitnb\module\MainActivity.java
//	R.layout.activity_main

app\src\main\res\layout\activity_main.xml
//	@+id/



[2.5] 
	


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 







[3.1] 功能设计
// 超级apk--设计
1.手势变复杂
保留:关闭，跳转

2.UI
左目录

3.基础功能
播放mp3
小说


4.手机功能
联系人


5.潜在功能
考试--驾车理论基础

// UI


[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 


[3.10] 




[4.1] 




[4.2] 




[4.3] 




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 






[5.1] 




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















