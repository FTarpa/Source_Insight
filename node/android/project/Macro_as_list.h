
基础路径设置:
//basePath = 
basePath = D:\project\Android\Demo
base:\\
tmpPath = base:tmp
tmp:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 常用例子
Save:node\android\project\Macro_as_list.h \[1.1\] 汇总
Save:node\android\project\Macro_as_list.h \[1.2\] 主界面类(1)
Save:node\android\project\Macro_as_list.h \[1.3\] 
Save:node\android\project\Macro_as_list.h \[1.4\] 图表类(0)
Save:node\android\project\Macro_as_list.h \[1.5\] 图片类(1)
Save:node\android\project\Macro_as_list.h \[1.6\] 
Save:node\android\project\Macro_as_list.h \[1.7\] 游戏类(0)
Save:node\android\project\Macro_as_list.h \[1.8\] 新闻类(0)
Save:node\android\project\Macro_as_list.h \[1.9\] 书本类(0)
Save:node\android\project\Macro_as_list.h \[1.10\] 前端框架(0)
Save:node\android\project\Macro_as_list.h \[1.11\] 
Save:node\android\project\Macro_as_list.h \[1.12\] 
// 2. 参数项目
Save:node\android\project\Macro_as_list.h \[2.1\] demo-----------------模板
Save:node\android\project\Macro_as_list.h \[2.2\] Contents-------------万能App
Save:node\android\project\Macro_as_list.h \[2.3\] AndroidWebDav--------坚果云
Save:node\android\project\Macro_as_list.h \[2.4\] MaterialDrawer-------第3方侧滑菜单
Save:node\android\project\Macro_as_list.h \[2.5\] DrawerLayout---------官方侧滑
Save:node\android\project\Macro_as_list.h \[2.6\] kotlin
Save:node\android\project\Macro_as_list.h \[2.7\] Flutter
Save:node\android\project\Macro_as_list.h \[2.8\] dependencies---------插件整理
Save:node\android\project\Macro_as_list.h \[2.9\] MVN------------------
Save:node\android\project\Macro_as_list.h \[2.10\] 
Save:node\android\project\Macro_as_list.h \[2.11\] 
Save:node\android\project\Macro_as_list.h \[2.12\] other---------------丢弃的app
Save:node\android\project\Macro_as_list.h \[2.13\] other demo
Save:node\android\project\Macro_as_list.h \[2.14\] other Error demo
Save:node\android\project\Macro_as_list.h \[2.15\] 
Save:node\android\project\Macro_as_list.h \[2.16\] 
Save:node\android\project\Macro_as_list.h \[2.17\] 
Save:node\android\project\Macro_as_list.h \[2.18\] 
//参考标号:
Save:Help\\DefaultFile\\Macro_Node_Num.h
//as安装+配置
Save:node\android\install\Macro_android_studio.h




	



[1.1] 汇总
//Android 优秀开源项目汇总
https://github.com/SenhLinsh/Android-Hot-Libraries#android-hot-libraries


[1.2] 主界面类(1)
//侧滑菜单
Useful = False
//
https://github.com/mikepenz/MaterialDrawer
Save:node\android\project_demo\Macro_file_MaterialDrawer.h
//Save:node\android\project_demo\Macro_as_MaterialDrawer.h
	

//侧滑菜单
Useful = True
//
https://github.com/zsmb13/MaterialDrawerKt
Save:node\android\project_demo\
Save:node\android\project_demo\Macro_file_MaterialDrawerKt.h
Save:node\android\project_demo\Macro_as_MaterialDrawerKt.h
	

//官方的侧滑菜单DrawerLayout
Useful = True
//
https://github.com/shiburagi/Drawer-Behavior
Save:node\android\project_demo\Macro_file_DrawerBehavior.h


//第三方侧滑
Useful = False
//
https://github.com/jfeinstein10/SlidingMenu
https://www.cnblogs.com/liushilin/p/5617423.html



[1.3] 


[1.4] 


[1.5] 图片类(1)
// svg_icon
Useful = True
//	 
cd:tmp: git clone https://
//	
Save:node\android\project_old\Macro_file_svg_icon.h
Save:node\android\project_old\Macro_as_svg_icon.h
	


[1.6] 


[1.7] 游戏类(0)
//热更新

[1.8] 


[1.9] 


[1.10] 前端框架(0)
//mobile:Angular

//Mobile:Virtualview-Android
//  动态化UI框架


//zepto + frozenui + seajs

//bootstrap

//motion.js + H5

//PC: jq + bootstrap

//Web: extjs/sencha

//Webview: PhoneGap/Cordova
//Webview: Weex/React-Native
//Webview: Flutter
//  跨平台UI渲染引擎、小程序

//requirejs

//backbone




[1.11] 


[1.12] 


[1.13] 


[1.14] 


[1.15] 




[2.1] demo-----------------模板
// demo 
Save:node\android\project\Macro_as_demo.h



[2.2] Contents
// WebDav
Useful = False
//	
https://github.com/seefs/Contents
Save:node\android\project\Macro_file_Contents.h
Save:node\android\project\Macro_as_Contents.h



[2.3] AndroidWebDav
// 坚果云 WebDav
Useful = False
//	 用的 thegrizzlylabs. 操作少.
cd:tmp: git clone https://github.com/zhao-pf/Android-WebDav
//	参考
https://www.cnblogs.com/robotpaul/p/12005045.html
//	
Save:node\android\project_demo\Macro_file_WebDav_Android.h
Save:node\android\project_demo\Macro_as_WebDav_Android.h


// thegrizzlylabs(库)
Useful = False
//	java版
cd:tmp: git clone https://github.com/thegrizzlylabs/sardine-android
//	原版
cd:tmp: git clone https://github.com/aflx/Sardine-Android
//
base:SardineAndroid
Save:node\android\project_demo\Macro_file_WebDav_Sardine.h


// tuacy WebDav(2 years ago)
Useful = False
//	 可以显示文件, 版本老, 图片是png用不上, 代码也用不上
cd:tmp: git clone https://github.com/tuacy/WebDav
//	
Save:node\android\project_demo\Macro_file_WebDav_tuacy.h
Save:node\android\project_demo\Macro_as_WebDav_tuacy.h


//易码－私人云笔记 2
E-mail：gtshine@gmail.com



[2.4] MaterialDrawer
//侧滑菜单
Useful = True
//
https://github.com/zsmb13/MaterialDrawerKt
Save:node\android\project_demo\
Save:node\android\project_demo\Macro_file_MaterialDrawerKt.h
Save:node\android\project_demo\Macro_as_MaterialDrawerKt.h



[2.5] DrawerLayout
//官方的侧滑菜单DrawerLayout
Useful = True
//
https://github.com/shiburagi/Drawer-Behavior
Save:node\android\project_demo\Macro_file_DrawerBehavior.h
Save:node\android\project_demo\Macro_as_DrawerBehavior.h



[2.6] kotlin
// wanandroid_kotlin
Useful = True
//   MD + Retrofit + RxJava + MVP + AndroidX
cd:tmp: git clone https://github.com/yechaoa/wanandroid_kotlin
//  描述
https://blog.csdn.net/yechaoa/article/details/104050231
https://blog.csdn.net/yechaoa/article/details/105294162
//  
Save:node\android\project_demo\Macro_file_wanandroid_kotlin.h
Save:node\android\project_demo\Macro_as_wanandroid_kotlin.h



[2.7] Flutter
// Flutter
Useful = True
//   
https://github.com/yechaoa/wanandroid_flutter
https://github.com/yechaoa/wanandroid_mini
https://blog.csdn.net/yechaoa/article/details/101557768
https://blog.csdn.net/yechaoa/article/details/95043005



[2.8] dependencies --------插件整理
// 插件整理
https://blog.csdn.net/yechaoa/article/details/72870470
// YUtils小工具
//	 MD5加密
https://blog.csdn.net/yechaoa/article/details/68953307



[2.9] MVN------------------
//AndroidMVP
Useful = True
//	Retrofit
cd:tmp: git clone https://github.com/Ninja2005/AndroidMVP
//  底部菜单
Save:node\android\project_demo\Macro_file_AndroidMVP.h


//AndroidMVP--feng
Useful = True
//	java 文件用 kotlin
cd:tmp: git clone https://github.com/fengol123/AndroidMVP
//  ButterKnife 绑定View,    Adapter,  rx.Subscription联网,    推送(annotations layout
//  SwipeRefreshLayout 下拉刷新
Save:node\android\project_demo\Macro_file_AndroidMVPfeng.h

	
//MvpApp
Useful = False
//	版本过时，不过东西比较多
cd:tmp: git clone https://github.com/Rukey7/MvpApp
//
Save:node\android\project_demo\Macro_file_MvpApp.h
//  mvp 文件说明...
Save:node\android\project_demo\Macro_as_MvpApp.h



[2.10] 



[2.11] 



[2.12] other --------------丢弃的app
//GitNb
Save:node\android\project_demo\Macro_file_GitNb.h


[2.13] other demo
//
Useful = False
//	
cd:tmp: git clone https://github.com/yechaoa/wanandroid_kotlin
//  
Save:node\android\project_demo\Macro_file_otherDemo.h
Save:node\android\project_demo\Macro_as_otherDemo.h










[2.14] other Error demo
//	报错--未定义
cd:tmp: git clone https://github.com/animeshroydev/DataDrop

//	kotlin---API 'variant.getJavaCompiler()' error
cd:tmp: git clone https://github.com/qinghuaAndroid/WanAndroid-qh



[2.15] 



[2.16] 


[2.17] 


[2.18] 


[2.19] 


[2.20] 


[2.21] 


[2.22] 





