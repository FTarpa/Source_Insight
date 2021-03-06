
基础路径设置:
Inward   = True
TabOver  = True
Backward = 48
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\WebDav\wanandroid_kotlin
base:\\



AsFile:base:




.gitignore
build.gradle                                // maven配置, gradle版本, kotlin版本
gradle.properties
gradlew
gradlew.bat
LICENSE
README.md
settings.gradle
app\.gitignore
app\build.gradle
app\proguard-rules.pro
app\src\androidTest\java\com\yechaoa\wanandroid_kotlin\ExampleInstrumentedTest.kt
app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity
app\src\main\assets\fonts\mononoki-Regular.ttf

//名字太长，改短
kotlinPath = base:app\src\main\java\com\yechaoa\wanandroid_kotlin
kotlin:\\

kotlin:\adapter\ArticleAdapter.kt
kotlin:\adapter\CollectAdapter.kt
kotlin:\adapter\CommonViewPagerAdapter.kt
kotlin:\adapter\ProjectChildAdapter.kt
kotlin:\adapter\TreeAdapter.kt
kotlin:\app\App.kt
kotlin:\base\BaseActivity.kt
kotlin:\base\BaseBean.kt
kotlin:\base\BaseException.kt
kotlin:\base\BaseFragment.kt
kotlin:\base\BaseObserver.kt
kotlin:\base\BasePresenter.kt
kotlin:\base\BaseView.kt
kotlin:\bean\Article.kt
kotlin:\bean\Banner.kt
kotlin:\bean\Collect.kt
kotlin:\bean\Hotkey.kt
kotlin:\bean\Navi.kt
kotlin:\bean\Project.kt
kotlin:\bean\ProjectChild.kt
kotlin:\bean\Tree.kt
kotlin:\bean\User.kt
kotlin:\common\MyConfig.kt
kotlin:\http\
kotlin:\http\API.kt
kotlin:\http\DiskApi.kt                         //
kotlin:\http\DiskTask.kt                        //
kotlin:\http\DiskService.kt                     // Sardine
kotlin:\http\DiskTestBroadcast.kt               //   test
kotlin:\http\DiskTestCoroutine.kt               //   test
kotlin:\http\RetrofitService.kt                 // WEB Observable
kotlin:\http\interceptor\AddCookiesInterceptor.kt
kotlin:\http\interceptor\ReceivedCookiesInterceptor.kt
kotlin:\module\MainActivity.kt                  // Main
kotlin:\module\about\AboutActivity.kt
kotlin:\module\collect\CollectActivity.kt
kotlin:\module\collect\CollectPresenter.kt
kotlin:\module\collect\ICollectView.kt
kotlin:\module\detail\DetailActivity.kt         // WEB
kotlin:\module\home\HomeFragment.kt             // Fragment 1
kotlin:\module\home\HomePresenter.kt
kotlin:\module\home\IHomeView.kt
kotlin:\module\login\ILoginView.kt
kotlin:\module\login\LoginActivity.kt
kotlin:\module\login\LoginPresenter.kt
kotlin:\module\navi\INaviView.kt
kotlin:\module\navi\NaviFragment.kt             // Fragment 3
kotlin:\module\navi\NaviPresenter.kt
kotlin:\module\project\IProjectView.kt
kotlin:\module\project\ProjectFragment.kt       // Fragment 4
kotlin:\module\project\ProjectPresenter.kt
kotlin:\module\project\child\IProjectChildView.kt
kotlin:\module\project\child\ProjectChildFragment.kt
kotlin:\module\project\child\ProjectChildPresenter.kt
kotlin:\module\register\IRegisterView.kt
kotlin:\module\register\RegisterActivity.kt
kotlin:\module\register\RegisterPresenter.kt
kotlin:\module\search\ISearchView.kt
kotlin:\module\search\SearchActivity.kt
kotlin:\module\search\SearchPresenter.kt
kotlin:\module\splash\SplashActivity.kt         // 入口Activity
kotlin:\module\tree\ITreeView.kt
kotlin:\module\tree\TreeFragment.kt             // Fragment 2
kotlin:\module\tree\TreePresenter.kt
kotlin:\module\tree\child\ITreeChildView.kt
kotlin:\module\tree\child\TreeChildActivity.kt  // Tag
kotlin:\module\tree\child\TreeChildFragment.kt  // 
kotlin:\module\tree\child\TreeChildPresenter.kt // Tag WEB
kotlin:\utils\GlideImageLoader.kt

app\src\main\res\drawable\ic_down.png
app\src\main\res\drawable\ic_home.png
app\src\main\res\drawable\ic_launcher_background.xml
app\src\main\res\drawable\ic_like_checked.png
app\src\main\res\drawable\ic_like_normal.png
app\src\main\res\drawable\ic_navi.png
app\src\main\res\drawable\ic_project.png
app\src\main\res\drawable\ic_share_black_24dp.xml
app\src\main\res\drawable\ic_tree.png
app\src\main\res\drawable\ic_up.png
app\src\main\res\drawable\selector_primary_oval.xml
app\src\main\res\drawable\shape_border_primary_oval.xml
app\src\main\res\drawable\shape_eaeaea_oval.xml
app\src\main\res\drawable\shape_oval_primary.xml
app\src\main\res\drawable\side_nav_bar.xml
app\src\main\res\drawable-v21\                  //ic_menu
app\src\main\res\drawable-v21\ic_menu_exit.xml
app\src\main\res\drawable-v21\ic_menu_favorite.xml
app\src\main\res\drawable-v21\ic_menu_info.xml
app\src\main\res\drawable-v21\ic_menu_search.xml
app\src\main\res\drawable-v21\ic_menu_share.xml
app\src\main\res\drawable-v24\ic_launcher_foreground.xml
app\src\main\res\layout\activity_about.xml
app\src\main\res\layout\activity_collect.xml
app\src\main\res\layout\activity_detail.xml
app\src\main\res\layout\activity_login.xml
app\src\main\res\layout\activity_main.xml
app\src\main\res\layout\activity_register.xml
app\src\main\res\layout\activity_search.xml
app\src\main\res\layout\activity_splash.xml
app\src\main\res\layout\activity_tree_child.xml
app\src\main\res\layout\app_bar_main.xml
app\src\main\res\layout\content_about.xml
app\src\main\res\layout\content_main.xml
app\src\main\res\layout\fragment_home.xml
app\src\main\res\layout\fragment_navi.xml
app\src\main\res\layout\fragment_project.xml
app\src\main\res\layout\fragment_project_child.xml
app\src\main\res\layout\fragment_tree.xml
app\src\main\res\layout\item_article.xml
app\src\main\res\layout\item_navi.xml
app\src\main\res\layout\item_project_child.xml
app\src\main\res\layout\item_tree.xml
app\src\main\res\layout\item_tree_item.xml
app\src\main\res\layout\layout_badge_view.xml
app\src\main\res\layout\nav_header_main.xml
app\src\main\res\menu\activity_main_drawer.xml  //ic_menu
app\src\main\res\menu\bottom_navigation.xml
app\src\main\res\menu\main_toolbar.xml
app\src\main\res\menu\menu_search.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher_round.xml
app\src\main\res\mipmap-hdpi\ic_launcher.png
app\src\main\res\mipmap-hdpi\ic_launcher_round.png
app\src\main\res\mipmap-mdpi\ic_launcher.png
app\src\main\res\mipmap-mdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_logo.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_logo.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\ic_logo.png
app\src\main\res\values\colors.xml
app\src\main\res\values\dimens.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml
app\src\main\res\xml\network_security_config.xml
app\src\test\java\com\yechaoa\wanandroid_kotlin\ExampleUnitTest.kt
screenshot\1.png
screenshot\2.png
screenshot\3.png
screenshot\4.png
screenshot\5.png
screenshot\6.png

