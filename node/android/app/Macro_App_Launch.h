
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
//MTK-չѶ�޸ıʼ�
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.0\]  ��װͼ�λ����棺
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.1\] .�������Launcher2��Launcher3�ı�ֽͬ��
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.2\] .����޸�ʹLauncher2���ļ���ͼ��������Ӧ�����Ʊ���ˮƽ
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.3\] android4.4 Launcher���������������Ӧ��ͼ���Ӧ�����ƣ�
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.4\] �����sprdLauncher2������һ��Ӧ��ͼ�ꣿ
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.5\] ���ʵ��Launcher2�в˵��б�����͸��Ч����
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.6\] �����launcher����һ������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.7\] .0LOCAL_OVERRIDES_PACKAGES������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.8\] �������Launcher�к��ӵȻ�����Ч��������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.9\] .��ΰ�SprdLaucher2��hotseatͼ����°Ѷ�Ӧ��Ӧ������item��ʾ������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.10\] //����޸�launcher��Ӧ��ͼ���������������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.11\] ����޸�launcher����Ļ��
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.12\] �����ӱ�ֽ��Դ����ֽ�б�?
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.13\] ��θ���launcher�е��Ӧ�õĸ�������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.14\] �������launcherʹ�ô��ڴ棿
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[1.15\] .��θ���ϵͳĬ��ǽֽ
//MTK-չѶ�޸ıʼ�
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.1\] .�������Ĭ��ҳ
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.2\] �������launcher3�е�������
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.3\] ��ε���ԭ��Launcher3�������search��Ĵ�С��
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.4\] �����˵�����Ӧ�ð�ָ��˳������ǰ�棿
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.5\] ���ȷ������HOME���沼��ʹ�õ����ĸ�default_workspace�ļ���
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.6\] ����滻������Ӧ����launcher����ʾ��ͼ�ꣿ
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.7\] //���ȥ��Launcher3�Ŀ�������ҳ�棿
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.8\] Ϊ��Launcher3����һЩ��ֽ�󣬱�ֽ��ʾ��Ԥ��ͼģ����
Save:SI\node\9820e\Macro_9820e_App_Launch.h \[2.9\] 6.0ƽ̨��Launcher3�Դ��ı�ֽ·����ʲô��

//apk ģ�� -- cmd:
Save:SI\node\9820e\Macro_9820e_Sys_Build.h \[3.1\] apk ģ�� -- cmd


/***********************************************************************/

MTK-չѶ�޸ıʼ�
[1.0]  ��װͼ�λ����棺
sudo apt-get install git-core git-gui



[1.1] .�������Launcher2��Launcher3�ı�ֽͬ��
//����SprdLauncher1��SprdLauncher2��֧�ַֿ�����������ֽ��������ֽ��
//���������ڻ�ȡ��ֽ��ʱ�򣬻��ȡ�����������ֽ���͡�
//Ŀǰԭ��Launcher2��ԭ��Launcher3��֧�ַֿ����ã�
//����Ҫ��֤ԭ��Launcher2��ԭ��Launcher3���ñ�ֽ��ʱ����������������һ�£�
//ֻ��Ҫ�����ڻ�ȡ��ֽ��ʱ�򣬻�ȡ�ı�ֽ����Ҳ��������ֽ���͡�

//�޸����£�
//�붨λ��KeyguardViewManager.java�е�maybeCreateKeyguardLocked������
frameworks\base\packages\Keyguard\src\com\android\keyguard\KeyguardViewManager.java WALLPAPER_LOCKSCREEN_TYPE
//	Drawable drawable = wm.getDrawable(WallpaperInfo.WALLPAPER_LOCKSCREEN_TYPE);
//	mCustomWallPaper = drawable;
��Drawable drawable = wm.getDrawable(WallpaperInfo.WALLPAPER_LOCKSCREEN_TYPE);
�޸�ΪDrawable drawable = wm.getDrawable(WallpaperInfo.WALLPAPER_MAINMENU_TYPE); 


[1.2] .����޸�ʹLauncher2���ļ���ͼ��������Ӧ�����Ʊ���ˮƽ
�붨Ϊ��/packages/apps/Launcher2/res/values/dimens.xml�ļ���
packages/apps/Launcher2/res/values/dimens.xml folder_icon_padding_top
���������ֵ���ɣ�
//  <dimen name="folder_icon_padding_top">2dp</dimen>


[1.3] android4.4 Launcher���������������Ӧ��ͼ���Ӧ�����ƣ�
��sprdLauncher2������
�붨λ��vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/CellLayout.java�ļ�:
vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/CellLayout.java addViewToCellLayout
Ȼ��λ��addViewToCellLayout������
//        if (child instanceof BubbleTextView) {
//            BubbleTextView bubbleChild = (BubbleTextView) child;
//            bubbleChild.setTextVisibility(!mIsHotseat);
//        }
�޸�Ϊ��
//        if (child instanceof BubbleTextView) {
//            BubbleTextView bubbleChild = (BubbleTextView) child;
//            bubbleChild.setTextVisibility(false);
//        }

		
[1.4] �����sprdLauncher2������һ��Ӧ��ͼ�ꣿ
//�����ذٶȵ�ͼΪ�����޸����£�
//�붨λ��/vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/LauncherModel.java�ļ���
//	����verifyApplications������
vendor/sprd/UniverseUI/SprdLauncher2/src/com/android/sprdlauncher2/LauncherModel.java void verifyApplications()
//    if (tmpInfos.isEmpty()) {
//        added.add(app);
//         }
�޸�Ϊ��
//    if (tmpInfos.isEmpty()) {
//        ComponentName cn = app.componentName;
//	     Log.e(TAG,"cn = "+cn);
//	     if(cn != null && !cn.equals("")){
//	        if(!cn.toString().equals("ComponentInfo{com.baidu.BaiduMap/com.baidu.BaiduMap.BaiduMap}")){
//	                  added.add(app);
//	        }
//	     }
//
//     }


[1.5] ���ʵ��Launcher2�в˵��б�����͸��Ч����
//Android4.4�е�Launcher2Ĭ��û�п����˵��б���͸��Ч��������ɫ����Ч������̫�ã������Ҫ�����˵�����͸��Ч�������Բο������޸���ʵ�֣�
packages/apps/Launcher2/res/layout/apps_customize_pane.xml AppsCustomizeTabHost

diff --git a/packages/apps/Launcher2/res/layout/apps_customize_pane.xml b/packages/apps/Launcher2/res/layout/apps_customize_pane.xml
index a9d7ded..70ee6b5 100644
--- a/packages/apps/Launcher2/res/layout/apps_customize_pane.xml
+++ b/packages/apps/Launcher2/res/layout/apps_customize_pane.xml
@@ -16,7 +16,7 @@
 <com.android.launcher2.AppsCustomizeTabHost
     xmlns:android="http://schemas.android.com/apk/res/android"
     xmlns:launcher="http://schemas.android.com/apk/res/com.android.launcher"
-    android:background="#FF000000">
+    android:background="#00000000">
     <LinearLayout
         android:id="@+id/apps_customize_content"
         android:orientation="vertical"
@@ -74,7 +74,7 @@
                 android:id="@+id/animation_buffer"
                 android:layout_width="match_parent"
                 android:layout_height="match_parent"
-                android:background="#FF000000"
+                android:background="#00000000"
                 android:visibility="gone" />

             <include
////////////////////////////////////
packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java void^onFinishInflate()
diff --git a/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java b/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java
index 225b056..076b14d 100644
--- a/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java
+++ b/packages/apps/Launcher2/src/com/android/launcher2/AppsCustomizeTabHost.java
@@ -32,6 +32,7 @@ import android.widget.LinearLayout;
 import android.widget.TabHost;
 import android.widget.TabWidget;
 import android.widget.TextView;
+import android.graphics.Color;

 import com.android.launcher.R;

@@ -138,6 +139,7 @@ public class AppsCustomizeTabHost extends TabHost implements LauncherTransitiona

         // Hide the tab bar until we measure
         mTabsContainer.setAlpha(0f);
+        mContent.setBackgroundColor(Color.argb(100, 0, 0, 0));
     }

     @Override
////////////////////////////////////
packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java void^dispatchDraw( )
diff --git a/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java b/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java
index 024bb37..cbc3a26 100644
--- a/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java
+++ b/packages/apps/Launcher2/src/com/android/launcher2/CellLayout.java
@@ -549,6 +549,7 @@ public class CellLayout extends ViewGroup {
             p.setXfermode(sAddBlendMode);
             mOverScrollForegroundDrawable.draw(canvas);
             p.setXfermode(null);
+            p.setDither(true);
         }
     }

////////////////////////////////////
packages/apps/Launcher2/src/com/android/launcher2/Launcher.java void^disableWallpaperIfInAllApps()
diff --git a/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java b/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java
index 56aa73b..51024f9 100644
--- a/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java
+++ b/packages/apps/Launcher2/src/com/android/launcher2/Launcher.java
@@ -2475,7 +2475,7 @@ public final class Launcher extends Activity
         if (isAllAppsVisible()) {
             if (mAppsCustomizeTabHost != null &&
                     !mAppsCustomizeTabHost.isTransitioning()) {
-                updateWallpaperVisibility(false);
+                updateWallpaperVisibility(true);
             }
         }
     }
@@ -2648,7 +2648,7 @@ public final class Launcher extends Activity
                         hideDockDivider();
                     }
                     if (!animationCancelled) {
-                        updateWallpaperVisibility(false);
+                        updateWallpaperVisibility(true);
                     }

                     // Hide the search bar
@@ -2728,7 +2728,7 @@ public final class Launcher extends Activity
             dispatchOnLauncherTransitionPrepare(toView, animated, false);
             dispatchOnLauncherTransitionStart(toView, animated, false);
             dispatchOnLauncherTransitionEnd(toView, animated, false);
-            updateWallpaperVisibility(false);
+            updateWallpaperVisibility(true);
         }
     }

	 
[1.6] �����launcher����һ������
һ������Ӧ�õ�Ŀ¼��
��packages\apps\RamOptimizer\res\values\arrays.xml�ļ����жԲ���Ҫ�����Ӧ�ý������ã�
packages\apps\RamOptimizer\res\values\arrays.xml recent_keep_app
//    <!-- the name of app that we want to kill -->
//    <string-array name="recent_keep_app" translatable="false">
//	     <item>com.sprd.ramoptimizer</item>
//	     <item>com.android.sprdlauncher2</item>
//
//	      ...
//
//    </string-array>
	
packages\apps\RamOptimizer\res\values\arrays.xml recent_keep_service
//    <!-- the name of service that we want to kill -->
//    <string-array name="recent_keep_service" translatable="false">
//        <item>com.sprd.ramoptimizer</item>
//        <item>com.sprd.videoswallpapers</item>
//    </string-array>

��������Լ���Ӧ�ò��������Ѱ�����ӵ�recent_keep_app���鼴�ɡ�


[1.7] .0LOCAL_OVERRIDES_PACKAGES������
����android.mk�е�LOCAL_OVERRIDES_PACKAGES���˱�������ʹ���������ģ���޷��������ɵ�ϵͳ��,ʹ�ñ�ģ����Ϊ�滻��
������SprdLauncher2��android.mk��
������ LOCAL_OVERRIDES_PACKAGES := Launcher3
��ʹ����SprdLauncher2�Ĺ�������޷�����ԭ���� Launcher3��
vendor\sprd\UniverseUI\SprdLauncher2\android.mk LOCAL_OVERRIDES_PACKAGES
//		LOCAL_PACKAGE_NAME := SprdLauncher2
//		#LOCAL_CERTIFICATE := shared
//		LOCAL_CERTIFICATE := platform
//		LOCAL_OVERRIDES_PACKAGES := Launcher3


[1.8] �������Launcher�к��ӵȻ�����Ч��������
Launcher�л�����Ч���ļ��ڣ�
vendor\sprd\UniverseUI\SprdLauncher1\src\com\sprd\sprdlauncher1\effect\CrossEffect.java setAlpha
vendor\sprd\UniverseUI\SprdLauncher2\src\com\sprd\sprdlauncher2\effect\CrossEffect.java setAlpha
//	float mAlpha = 1.0F - Math.abs(offset);
//	transformation.setAlpha(mAlpha);
//	// viewiew.setAlpha(mAlpha);

���ӵ���Ч�����page��Ч��Ҫ����ALPHA�����ϣ���ΪALPHA���Ʊ����ʱ�ͱȽϳ������ԣ�
���������������Ч�����ȣ���ɾ����Ч��getTransformationMatrix�����й���ALPHA�仯�Ĵ��룺
�磺
CrossEffect.java�У�

ȥ�����´��룺
        float absOffset = Math.abs(offset);
        float mAlpha = 1.0F - absOffset * 0.4f;
        view.setAlpha(mAlpha);

		
[1.9] .��ΰ�SprdLaucher2��hotseatͼ����°Ѷ�Ӧ��Ӧ������item��ʾ������
//1.���������
vendor\sprd\UniverseUI\SprdLauncher2\src\com\android\sprdlauncher2\CellLayout.java bubbleChild
//	BubbleTextView bubbleChild = (BubbleTextView) child;
//	bubbleChild.setTextVisibility(!mIsHotseat);
//			��Ϊ bubbleChild.setTextVisibility(true);

vendor\sprd\UniverseUI\SprdLauncher2\src\com\android\sprdlauncher2\Workspace.java (FolderIcon)^child
//	 //Hide folder title in the hotseat
//	if (child instanceof FolderIcon) {
//		((FolderIcon) child).setTextVisible(false);
//	}
//	��Ϊ ((FolderIcon)child).setTextVisible(true);



//2.�޸�hotseat.xml�����ļ���
packages\apps\Launcher2\res\layout-port\hotseat.xml
packages\apps\Launcher3\res\layout\hotseat.xml
vendor\sprd\UniverseUI\SprdLauncher1\res\layout\hotseat.xml
vendor\sprd\UniverseUI\SprdLauncher2\res\layout\hotseat.xml
//	  ������Ҫ���������磺
//
//	�޸�Ϊ
//	<com.android.sprdlauncher2.Hotseat
//	    xmlns:android="http://schemas.android.com/apk/res/android"
//	    xmlns:launcher="http://schemas.android.com/apk/res-auto/com.android.sprdlauncher2">
//	    <com.android.sprdlauncher2.CellLayout
//	        android:id="@+id/layout"
//	        android:layout_marginBottom="XXXdp"    //�޸�hotseat����ײ���λ��
//	        android:layout_width="wrap_content"
//	        android:layout_height="XXXdp"  // hotseat�߶�
//	        android:layout_gravity="center" />
//	</com.android.sprdlauncher2.Hotseat>


[1.10] //����޸�launcher��Ӧ��ͼ���������������
//������
//packages\apps\Launcher2\res\layout-land\workspace_screen.xml
//
//����
//packages\apps\Launcher2\res\layout-port\workspace_screen.xml

//packages\apps\Launcher2\res\layout\workspace_screen.xml
//packages\apps\Launcher3\res\layout\workspace_screen.xml
//vendor\sprd\UniverseUI\SprdLauncher2\res\layout\workspace_screen.xml
//
//�޸�������ӵ�����
//    launcher:shortAxisCells=��4��
//    launcher:longAxisCells=��4��
//
//�����Ե���һ�¸����������Һ����µı߾�
//    launcher:longAxisStartPadding=��65dip��
//    launcher:longAxisEndPadding=��65dip��
//    launcher:shortAxisStartPadding=��0dip��
//    launcher:shortAxisEndPadding=��0dip��


[1.11] ����޸�launcher����Ļ��
���ȣ���Launcher.java�������޸��ܵ�ҳ����Ĭ����ʾҳ��
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java SCREEN_COUNT
//    static final int SCREEN_COUNT = 5;
//    static final int DEFAULT_SCREEN = 2;//��һҳ�Ǵ�0��ʼ�����������ǰѵ�����ҳ����ΪĬ����ҳ  
��һ���Ƕ�����Ļ��������һ��������Ĭ�ϵ���ҳ��

��Σ�����Ҫ�޸� launcher.xml
packages\apps\Launcher2\res\layout-port\launcher.xml
//    <!-- The workspace contains 5 screens of cells -->
//    <com.android.launcher2.Workspace
//        android:id="@+id/workspace"
//        android:layout_width="match_parent"
//        android:layout_height="match_parent"
//        android:scrollbars="horizontal"
//        android:fadeScrollbars="true"
//        launcher:defaultScreen="2">
//        <include android:id="@+id/cell1" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell2" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell3" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell4" layout="@layout/workspace_screen" />
//        <include android:id="@+id/cell5" layout="@layout/workspace_screen" />
//    </com.android.launcher2.Workspace>

���������workspace_screen����������������޸ĵĲ�������ӻ���ɾ��workspace_screen��
���� launcher:defaultScreen="2">  �����defaultScreen.Ҫ�޸ĳɶ�Ӧ��ֵ��

���⣬�޸�Workspace.java�л�ȡ����ֵʱ��Ĭ����ҳ��ȷ���쳣�����Ĭ����ҳһ�� 
packages\apps\Launcher3\src\com\android\launcher3\Workspace.java  R.styleable.Workspace_defaultScreen
//        TypedArray a = context.obtainStyledAttributes(attrs, R.styleable.Workspace, defStyle, 0);
//        mDefaultScreen = a.getInt(R.styleable.Workspace_defaultScreen, 1);

��󣬶� res/xml�ļ���default_workspace.xml������Ӧ���޸ġ���������workspace��ʼ��ʾ��icon��widget��
packages\apps\Launcher2\res\xml\default_workspace.xml
packages\apps\Launcher3\res\xml\default_workspace.xml
vendor\sprd\operator\cmcc\nowcn\overlay\vendor\sprd\UniverseUI\SprdLauncher1\res\xml\default_workspace.xml
vendor\sprd\operator\cmcc\specA\overlay\vendor\sprd\UniverseUI\SprdLauncher1\res\xml\default_workspace.xml
vendor\sprd\operator\cucc\specA\overlay\vendor\sprd\UniverseUI\SprdLauncher2\res\xml\default_workspace.xml
vendor\sprd\UniverseUI\SprdLauncher1\res\xml\default_workspace.xml
vendor\sprd\UniverseUI\SprdLauncher2\res\xml\default_workspace.xml




[1.12] �����ӱ�ֽ��Դ����ֽ�б�?
����� ��wallpaper_lake.jpgΪ��

//1.������ֽͼƬ wallpaper_lake.jpg��wallpaper_lake_small.jpg ����ӦĿ¼
packages/apps/Launcher2/res/drawable-��Ӧ����/wallpaper_lake.jpg
packages/apps/Launcher2/res/drawable-��Ӧ����/wallpaper_lake_small.jpg

//2.�� res/values-hdpi/wallpapers.xml �����wallpaper_lake��Ŀ
packages\apps\Launcher2\res\values\wallpapers.xml
packages\apps\Launcher3\res\values-nodpi\wallpapers.xml
//     <string-array name="wallpapers" translatable="false">
//+        <item>wallpaper_lake</item>
//          ..

��ʱ���������棬ѡ���ֽѡ��ͻ��ڱ�ֽ�б���һ���µı�ֽ��


[1.13] ��θ���launcher�е��Ӧ�õĸ�������
//workspace��idle��������ͼ��ĸ�������Ϊ��
packages/apps/Launcher2/res/drawable/pressed_application_background.9.png

//workspace��idle�������ѡ�еĸ���������
packages/apps/Launcher2/res/drawable-hdpi/focused_application_background.9.png

//Mainmenu�����˵������Ӧ�õĸ�������Ϊ��
packages/apps/Launcher2/res/drawable-hdpi/background_icon.9.png

Ĭ�ϵĸ��������ǵ�Ÿ�ʽ��png�ļ�������������Ӧ��ͬ�Ĳ��ִ�С��Ҳ�������ò��ǵ�ŵ�ͼƬ��
���������ͼƬʵ���Զ���ı���


[1.14] �������launcherʹ�ô��ڴ棿
��launcher��AndroidManifest.xml�п�������launcherʹ�ô�Ķ��ڴ棬����������һ���̶��ϱ����ڴ治����ֵ�out of memory��������launcherʹ�ô��ڴ���Ҫ���ĵ���������Ϊandroid:largeHeap��������ʾ��
packages\apps\Launcher2\AndroidManifest.xml android:largeHeap
packages\apps\Launcher3\AndroidManifest.xml android:largeHeap
//    <application
//        android:name="com.android.launcher2.LauncherApplication"
//        android:label="@string/application_name"
//        android:icon="@drawable/ic_launcher_home"
//        android:hardwareAccelerated="@bool/config_hardwareAccelerated"
//        android:largeHeap="@bool/config_largeHeap">
        
������values�ļ��е�config.xml���޸�largeHeap������ֵ��������ʾ��
packages\apps\Launcher3\res\values\config.xml config_largeHeap
//	<bool name="config_largeHeap">false</bool>


[1.15] .��θ���ϵͳĬ��ǽֽ
Ĭ��ǽֽλ����
frameworks/base/core/res/res/drawable-nodpi/default_wallpaper.jpg

��ͬ�ֱ��ʵ���Ŀ�ڶ�Ӧ��drawableĿ¼�¡� 

������Ĭ��ǽֽ��Ϊ����ǽֽ���������ѡ��ǽֽ����һ�£����ͬ���޸Ķ�Ӧlauncher�µ�ǽֽ�� 

launcher��ǽֽλ�ã�
packages/apps/Launcher2/res/drawable-nodpi/  



/***********************************************************************/
/****************************** code2 **********************************/
/***********************************************************************/

[2.1] .�������Ĭ��ҳ
res/values/config.xml
packages\apps\Launcher3\res\values\config.xml config_workspaceDefaultScreen
// 	<integer name="config_workspaceDefaultScreen">0</integer>

��Launcher3 ���棬��������һҳ����HOME ������ص�Ĭ��ҳ��


[2.2] �������launcher3�е�������
1. ��Launcher3/src/com/android/launcher3/Launcher.java��
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java updateGlobalIcons()
ע��updateGlobalIcons()�������ã���������
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java View^getQsbBar()
//	public View getQsbBar() {
//	    if (mQsbBar == null) {
//	        mQsbBar = mInflater.inflate(R.layout.search_bar, mSearchDropTargetBar, false);
//	-             mSearchDropTargetBar.addView(mQsbBar);
//	    }
//	+        mQsbBar.setVisibility(View.GONE);
//	    return mQsbBar;
//	}

//	@Override
//	public void bindSearchablesChanged() { //ע�͸÷�������
//	/*        boolean searchVisible = updateGlobalSearchIcon();
//	    boolean voiceVisible = updateVoiceSearchIcon(searchVisible);
//	    if (mSearchDropTargetBar != null) {
//	        mSearchDropTargetBar.onSearchPackagesChanged(searchVisible, voiceVisible);
//	    }
//	*/
//	}

2. ��Launcher3/src/com/android/launcher3/DynamicGrid.java��   
packages\apps\Launcher3\src\com\android\launcher3\DynamicGrid.java launcher.getQsbBar()

    // Layout the search bar
    //ע����������
/*        View qsbBar = launcher.getQsbBar();
    LayoutParams vglp = qsbBar.getLayoutParams();
    vglp.width = LayoutParams.MATCH_PARENT;
    vglp.height = LayoutParams.MATCH_PARENT;
    qsbBar.setLayoutParams(vglp);
*/

3. ��Launcher3/res/values/dimens.xml��
packages\apps\Launcher3\res\values\dimens.xml dynamic_grid_search_bar_height
//    -    <dimen name="dynamic_grid_search_bar_height">48dp</dimen>
//    +    <dimen name="dynamic_grid_search_bar_height">18dp</dimen>

���±���󼴿ɿ���Ч����


[2.3] ��ε���ԭ��Launcher3�������search��Ĵ�С��
�޸����£�
��λ��/packages/apps/Launcher3/res/values/dimens.xml��
packages\apps\Launcher3\res\values\dimens.xml dynamic_grid_edge_margin
//	<dimen name="dynamic_grid_edge_margin">3dp</dimen>//�޸�������Ե���search����붥�����롣
//	<dimen name="dynamic_grid_search_bar_max_width">500dp</dimen>//search��Ŀ�ȣ�һ�㲻��Ҫ������
//	<dimen name="dynamic_grid_search_bar_height">48dp</dimen>//search��ĸ߶ȣ���Ҫ����Ϊ0��ɾ����ť��Ҫռ��һ���ֿռ䡣


[2.4] �����˵�����Ӧ�ð�ָ��˳������ǰ�棿
���res/values/arrays.xml����Ҫ�����Ӧ�ã������item ����һ��Ҫ��д��ȷ�������ƥ�䲻�ϣ��޷���������
packages\apps\Launcher3\res\values\arrays.xml

//	<?xml version="1.0" encoding="utf-8"?>
//	<resources>
//	<string-array name="apps_componentName" translatable="false">
//	    <item>ComponentInfo{com.android.vending/com.android.vending.AssetBrowserActivity}</item>
//	    <item>ComponentInfo{com.android.browser/com.android.browser.BrowserActivity}</item>
//	    <item>ComponentInfo{com.android.settings/com.android.settings.Settings}</item>
//	    <item>ComponentInfo{com.android.camera2/com.android.camera.CameraLauncher}</item>
//	    <item>ComponentInfo{com.android.mms/com.android.mms.ui.ConversationList}</item>
//	</string-array>
//	</resources>

src/com/android/launcher3/Utilities.java
packages\apps\Launcher3\src\com\android\launcher3\Utilities.java
//	+  import java.util.Arrays;
//	+  import java.util.List;
//
//	+    public static List<String> getAppsComponentName(final Context context) {
//	+        return Arrays.asList(context.getResources().getStringArray(R.array.apps_componentName));
//	+    }


src/com/android/launcher3/LauncherModel.java
//	 protected int mPreviousConfigMcc;
//	+    static List<String> appArray = new ArrayList<String>();
//	    LauncherModel(LauncherAppState app, IconCache iconCache, AppFilter appFilter) {
//	        ......
//	        mUserManager = UserManagerCompat.getInstance(context);
//	+       appArray = Utilities.getAppsComponentName(context);
//
//	    }
�������sortApps ������apps ��arrays.xml ������ԭ������������ϣ���arrays.xml ���õ�Ӧ�ð�˳������ǰ�档arrays.xml��û���漰����Ӧ�ã�����ԭ����˳��
public static final void sortApps(ArrayList<AppInfo> apps) {
    int length = appArray.size();
    List<AppInfo> assignApps = new ArrayList<AppInfo>();
    for(int i=0;i<length;i++) {
        assignApps.add(i, null);
    }
    for(AppInfo app : apps){
        for(int k=0; k<length; k++){
            if (app.componentName.toString().equals(appArray.get(k))) {
                assignApps.set(k,app );
                continue;
            }
        }
    }
    for (int i =length -1;i > -1 ;i--) {
      AppInfo app = assignApps.get(i);
      if(app != null){
          apps.remove(app);
          apps.add(0, app);
      }
  }
  Log.d(TAG ,"The Apps List after Sort!");
}


src/com/android/launcher3/AppsCustomizePagedView.java

//	    public void setApps(ArrayList<AppInfo> list) {
//	        if (!LauncherAppState.isDisableAllApps()) {
//	            ......
//	            SprdAppSortAddonStub.getInstance().sortApps(mApps);
//	+           LauncherModel.sortApps(mApps);//��ԭ������Ļ����ϣ��ٽ�arrays.xml�����õ�Ӧ�ð�˳������ǰ�档
//	            updatePageCountsAndInvalidateData();
//	        }
//	    }
//	    private void addAppsWithoutInvalidate(ArrayList<AppInfo> list) {
//	        ......
	        // SPRD: bug375932 2014-12-02 Feature customize app icon sort.
//	        SprdAppSortAddonStub.getInstance().sortApps(mApps);
//	+       LauncherModel.sortApps(mApps);//��ԭ������Ļ����ϣ��ٽ�arrays.xml�����õ�Ӧ�ð�˳������ǰ�档
//	    }


[2.5] ���ȷ������HOME���沼��ʹ�õ����ĸ�default_workspace�ļ���
 src/com/android/launcher3/DynamicGrid.java
packages\apps\Launcher3\src\com\android\launcher3\DynamicGrid.java

//ѡ���ĸ�default_workspace ��public DynamicGrid(Context context, Resources resources,int minWidthPx, int minHeightPx, int widthPx, int heightPx, int awPx, int ahPx)�е�minWidthPx ��minHeightPx �Լ��÷����д�����deviceProfiles �б�ء�               
//minWidthPx ��minHeightPx ֵת��Ϊdpi֮�� ��deviceProfiles �б�������бȽϣ�ѡ���뵱ǰ��Ļ��С��ӽ���deviceProfiles ��default_workSpace��Ϊ����Home����ʹ�õ�default_workspace��
//
//
//��ϸ�������£�
//src/com/android/launcher3/DynamicGrid.java��

        1.deviceProfiles �б����£�
        deviceProfiles.add(new DeviceProfile("Super Short Stubby",
                255, 300,  2, 3,  48, 13, (hasAA ? 3 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Shorter Stubby",
                255, 400,  3, 3,  48, 13, (hasAA ? 3 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Short Stubby",
                275, 420,  3, 4,  48, 13, (hasAA ? 5 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Stubby",
                255, 450,  3, 4,  48, 13, (hasAA ? 5 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Nexus S",
                296, 491.33f,  4, 4,  48, 13, (hasAA ? 5 : 5), 48, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Nexus 4",
                335, 567,  4, 4,  DEFAULT_ICON_SIZE_DP, 13, (hasAA ? 5 : 5), 56, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Nexus 5",
                359, 567,  4, 4,  DEFAULT_ICON_SIZE_DP, 13, (hasAA ? 5 : 5), 56, R.xml.default_workspace_4x4));
        deviceProfiles.add(new DeviceProfile("Large Phone",
                406, 694,  5, 5,  64, 14.4f,  5, 56, R.xml.default_workspace_5x5));
        // The tablet profile is odd in that the landscape orientation
        // also includes the nav bar on the side
        deviceProfiles.add(new DeviceProfile("Nexus 7",
                575, 904,  5, 6,  72, 14.4f,  7, 60, R.xml.default_workspace_5x6));
        // Larger tablet profiles always have system bars on the top & bottom
        deviceProfiles.add(new DeviceProfile("Nexus 10",
                727, 1207,  5, 6,  76, 14.4f,  7, 64, R.xml.default_workspace_5x6));
        deviceProfiles.add(new DeviceProfile("20-inch Tablet",
                1527, 2527,  7, 7,  100, 20,  7, 72, R.xml.default_workspace_4x4));

       2.���¼���MinWidth ��MinHeigh  ��λ��dpi��
        mMinWidth = dpiFromPx(minWidthPx, dm);
        mMinHeight = dpiFromPx(minHeightPx, dm);
      3.����mProfile��mProfile.defaultLayoutId ��������Home����ʹ�õ�default_workspace ��id��
        mProfile�е�defaultLayoutId ���ĸ�default_workspace ��DeviceProfile.java��

        mProfile = new DeviceProfile(context, deviceProfiles,
                mMinWidth, mMinHeight,
                widthPx, heightPx,
                awPx, ahPx,
                resources);



src/com/android/launcher3/DeviceProfile.java

//	    DeviceProfile(Context context,
//	                 ArrayList<DeviceProfile> profiles,
//	                  float minWidth, float minHeight,
//	                  int wPx, int hPx,
//	                  int awPx, int ahPx,
//	                  Resources res) { �����У�
       4.����Ļ��ߴ����ĵ㣨PointF xy = new PointF(width, height)���� deviceProfiles�е�w �� h �����ĵ㣨dimens = new PointF(widthDps, heightDps)�����бȽϣ�Ҳ���Ǵ�deviceProfiles �б����ҳ��͵�ǰ��Ļ��С��ӽ���deviceProfiles��
            DeviceProfile closestProfile = findClosestDeviceProfile(minWidth, minHeight, points);
         ......

       5.���ú͵�ǰ��Ļ��С��ӽ���deviceProfiles��default_workspace

               defaultLayoutId = closestProfile.defaultLayoutId; 


[2.6] ����滻������Ӧ����launcher����ʾ��ͼ�ꣿ
��launcher/src/com/android/launcher3/IconCache.java���޸ģ�
packages\apps\Launcher3\src\com\android\launcher3\IconCache.java CacheEntry^cacheLocked
private CacheEntry cacheLocked(ComponentName componentName, ResolveInfo info,    private CacheEntry cacheLocked(ComponentName componentName, ResolveInfo info,
        HashMap<Object, CharSequence> labelCache) {
    CacheEntry entry = mCache.get(componentName);
    if (entry == null) {
        entry = new CacheEntry();
        mCache.put(componentName, entry);
        ComponentName key = LauncherModel.getComponentNameFromResolveInfo(info);
        if (labelCache != null && labelCache.containsKey(key)) {
            entry.title = labelCache.get(key).toString();
        } else {
            entry.title = info.loadLabel(mPackageManager).toString();
            if (labelCache != null) {
                labelCache.put(key, entry.title);
            }
        }
        if (entry.title == null) {
            entry.title = info.activityInfo.name;
        }
        Drawable icon;
        int index = sysIndexOf(componentName.getClassName());
        Log.i("jxt", "index:"+index+",Name:"+componentName.getClassName());
        icon = getFullResIcon(info);
        if (index >= 0) {
            entry.icon = Utilities.createIconBitmap(icon, mContext);
        } else {
            entry.icon = Utilities.createIconBitmap(
                    /* SPRD: Feature 253522, Remove the application drawer view @{ */
                    // getFullResIcon(info), mContext);
                    icon, mContext, true);
        }
        /* �˴���Ϊ�滻ͼ�����  {@*/
        if("������Ӧ�õ�componentName".equals(componentName.toString())){
            entry.icon = BitmapFactory.decodeResource(mContext.getResources(), R.drawable.xxx);
        }

        /* @} */

    }
    return entry;
}   


[2.7] //���ȥ��Launcher3�Ŀ�������ҳ�棿
//�޸ķ������£�
//�붨λ��src/com/android/launcher3/LauncherClings.java�ļ���
//    class LauncherClings implements OnClickListener {
//         ......
//         private static final String TAG_CROP_TOP_AND_SIDES = "crop_bg_top_and_sides"
//
//-        private static final boolean DISABLE_CLINGS = false;
//+       private static final boolean DISABLE_CLINGS = true;


[2.8] Ϊ��Launcher3����һЩ��ֽ�󣬱�ֽ��ʾ��Ԥ��ͼģ����
Ԥ����ʱ��û������ʽת����������ʾ������
�����ñ�ֽ��ʱ��Ĭ���ǲ���jpeg��ʽת���ģ�����ת���������һЩ�����ñ�ֽ��ĳЩ�ԱȶȱȽϸߵı�ֽ����ʾ��ģ����

�޸ķ�����
Ĭ���޸�Ϊ����png��ʽת����

android6.0֮ǰ�İ汾�����������޸ģ�
��λ��/packages/apps/Launcher3/��WallpaperCropActivity.java�ļ�
1��String mOutputFormat = "jpg";//�޸�Ϊ"png"
2��
  protected static String getFileExtension(String requestFormat) {
        String outputFormat = (requestFormat == null)
                ? "jpg"//�޸�Ϊ"png"
                : requestFormat;
        outputFormat = outputFormat.toLowerCase();
        return (outputFormat.equals("png") || outputFormat.equals("gif"))
                ? "png" // We don't support gif compression.
                : "jpg";
   }

android6.0�İ汾�����������޸ģ�
��λ��/packages/apps/Launcher3/WallpaperPicker/src/com/android/gallery3d/common/BitmapCropTask.java�ļ�
if (crop.compress(CompressFormat.JPEG, DEFAULT_COMPRESS_QUALITY, tmpOut)) �޸�Ϊ��
if (crop.compress(CompressFormat.PNG, DEFAULT_COMPRESS_QUALITY, tmpOut))


[2.9] 6.0ƽ̨��Launcher3�Դ��ı�ֽ·����ʲô��
��6.0�У�ƽ̨�汾Ԥ����һЩ��ֽ��Դ�����·�����£�
��Դ�ļ��ڣ�
packages/apps/Launcher3/WallpaperPicker/res/drawable-xhdpi/

�ִ��ļ��ڣ�
packages/apps/Launcher3/WallpaperPicker/res/values-nodpi/wallpapers.xml 






