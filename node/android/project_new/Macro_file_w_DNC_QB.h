
基础路径设置:
Inward   = True
Backward = 50
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\apk_work\DNC_QB
base:\\




// 导出项目文件
//   Android Studio
AsFile:base:



app\build\outputs\apk\app\debug                 // 包大小:9M

build.gradle                                    // maven配置, gradle版本, kotlin版本
gradle.properties
gradlew
gradlew.bat
local.properties
LOS.iml
los.jks
settings.gradle

app\.gitignore
app\andresguard.gradle                          //混淆
app\app.iml
app\build.gradle                                // 
app\mapping.txt
app\proguard-rules.pro
app\seeds.txt
app\unused.txt
app\src\main\AndroidManifest.xml
app\src\main\AndroidManifest.xml  android.intent.action.MAIN	   // 入口Activity
app\src\main\assets\demo.html
app\src\main\java\com\dnc\loc\LosApplication.java                //
app\src\main\java\com\dnc\loc\blockchain\cypto\Hmac.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\GeneralDigest.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\Ripemd160.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\Sha256.java
app\src\main\java\com\dnc\loc\blockchain\cypto\digest\Sha512.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\CurveParam.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcCurve.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcDsa.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcFieldElement.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcPoint.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcSignature.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EcTools.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EosEcUtil.java
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EosPrivateKey.java                 // 私钥
app\src\main\java\com\dnc\loc\blockchain\cypto\ec\EosPublicKey.java                  // 公钥
app\src\main\java\com\dnc\loc\blockchain\cypto\types\EosByteWriter.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\EosType.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeAccountName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeActionName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeAsset.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeChainId.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypeName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypePermissionLevel.java
app\src\main\java\com\dnc\loc\blockchain\cypto\types\TypePermissionName.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\Base58.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\BitUtils.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\CryptUtil.java
app\src\main\java\com\dnc\loc\blockchain\cypto\util\HexUtils.java
app\src\main\java\com\dnc\loc\constant\CacheConst.java
app\src\main\java\com\dnc\loc\constant\RouteConst.java
app\src\main\java\com\dnc\loc\constant\SpConst.java
app\src\main\java\com\dnc\loc\data\eos\Callback.java
app\src\main\java\com\dnc\loc\data\eos\EosAccountManger.java
app\src\main\java\com\dnc\loc\data\eos\EosTransferManger.java      //9a.转账
app\src\main\java\com\dnc\loc\data\eos\listener\EosAccountRefListener.java
app\src\main\java\com\dnc\loc\data\eos\listener\EosListenerManger.java
app\src\main\java\com\dnc\loc\data\eos\model\ChainBlock.java
app\src\main\java\com\dnc\loc\data\eos\model\ChainInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\RequireFee.java
app\src\main\java\com\dnc\loc\data\eos\model\TransactionPushRequest.java
app\src\main\java\com\dnc\loc\data\eos\model\TransactionRequest.java
app\src\main\java\com\dnc\loc\data\eos\model\TransferMessageInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\UserAvailableList.java
app\src\main\java\com\dnc\loc\data\eos\model\UserTokenAvailable.java
app\src\main\java\com\dnc\loc\data\eos\model\UserTokenAvailableList.java
app\src\main\java\com\dnc\loc\data\eos\model\index\BannerInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\index\IndexMoreInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\index\NewsInfo.java
app\src\main\java\com\dnc\loc\data\eos\model\index\TitleInfo.java
app\src\main\java\com\dnc\loc\data\event\Event.java
app\src\main\java\com\dnc\loc\data\http\EosApi.java                //
app\src\main\java\com\dnc\loc\data\http\EosConst.java
app\src\main\java\com\dnc\loc\data\http\EosHttp.java
app\src\main\java\com\dnc\loc\data\http\EosInterceptor.java
app\src\main\java\com\dnc\loc\data\http\Http.java                //
app\src\main\java\com\dnc\loc\data\http\HttpApi.java             //
app\src\main\java\com\dnc\loc\data\http\HttpConst.java
app\src\main\java\com\dnc\loc\data\http\HttpErrorHandle.java
app\src\main\java\com\dnc\loc\data\http\HttpException.java
app\src\main\java\com\dnc\loc\data\http\HttpInterceptor.java
app\src\main\java\com\dnc\loc\data\http\HttpsPicasso.java
app\src\main\java\com\dnc\loc\data\http\model\Response.java
app\src\main\java\com\dnc\loc\data\model\AccountInfo.java
app\src\main\java\com\dnc\loc\data\model\AppInfo.java
app\src\main\java\com\dnc\loc\data\model\AppTokenInfo.java
app\src\main\java\com\dnc\loc\data\model\Args.java
app\src\main\java\com\dnc\loc\data\model\BaseUserInfo.java
app\src\main\java\com\dnc\loc\data\model\BonusInfo.java
app\src\main\java\com\dnc\loc\data\model\BonusItemInfo.java
app\src\main\java\com\dnc\loc\data\model\InviteInfo.java
app\src\main\java\com\dnc\loc\data\model\JsTransactionInfo.java
app\src\main\java\com\dnc\loc\data\model\Keys.java
app\src\main\java\com\dnc\loc\data\model\RechargeInfo.java
app\src\main\java\com\dnc\loc\data\model\
app\src\main\java\com\dnc\loc\data\model\ResultPageInfo.java     //参考
app\src\main\java\com\dnc\loc\data\model\TeamCountInfo.java
app\src\main\java\com\dnc\loc\data\model\TeamItemInfo.java
app\src\main\java\com\dnc\loc\data\model\TokenTransactionRecord.java
app\src\main\java\com\dnc\loc\data\model\UpdateInfo.java
app\src\main\java\com\dnc\loc\data\model\WalletInfo.java
app\src\main\java\com\dnc\loc\data\model\WalletBalance.java      //余额 ++
app\src\main\java\com\dnc\loc\data\model\WalletRecord.java       //创建记录 ++
app\src\main\java\com\dnc\loc\data\model\WalletName.java
app\src\main\java\com\dnc\loc\ui\aty\AboutAty.java
app\src\main\java\com\dnc\loc\ui\aty\BeAty.java                  // 9b.交易--BE兑换----------参考appBar
app\src\main\java\com\dnc\loc\ui\aty\CommissionActivity.java
app\src\main\java\com\dnc\loc\ui\aty\H5AppAty.java               // 9b.交易--webView
app\src\main\java\com\dnc\loc\ui\aty\MainActivity.java           // 8.main----
app\src\main\java\com\dnc\loc\ui\aty\MainBakActivity.java        // 8.main Bak----
app\src\main\java\com\dnc\loc\ui\aty\NewsDetailAty.java
app\src\main\java\com\dnc\loc\ui\aty\RouteFilterActivity.java    //Filter 主页
app\src\main\java\com\dnc\loc\ui\aty\ScanAty.java
app\src\main\java\com\dnc\loc\ui\aty\SplashActivity.java         //1.Splash -> AV_PATH_LOGIN
app\src\main\java\com\dnc\loc\ui\aty\TeamActivity.java
app\src\main\java\com\dnc\loc\ui\aty\TokenDetailAty.java
app\src\main\java\com\dnc\loc\ui\aty\TransactionAty.java         //9a.转账
app\src\main\java\com\dnc\loc\ui\aty\TransactionResultAty.java
app\src\main\java\com\dnc\loc\ui\aty\WithdrawAty.java
app\src\main\java\com\dnc\loc\ui\aty\account\
app\src\main\java\com\dnc\loc\ui\aty\account\AccountManageActivity.java              // 账号管理
app\src\main\java\com\dnc\loc\ui\aty\account\AccountSubAty.java
app\src\main\java\com\dnc\loc\ui\aty\account\AccountPay.java          //5.Create--等待支付
app\src\main\java\com\dnc\loc\ui\aty\account\AccountImport.java       //6.Import--导入 
app\src\main\java\com\dnc\loc\ui\aty\account\InviteFriendsActivity.java
app\src\main\java\com\dnc\loc\ui\aty\account\LoginAty.java            //2.Login--创建导入 FM_PHONE_LOGIN
app\src\main\java\com\dnc\loc\ui\aty\account\MyAccountAty.java
app\src\main\java\com\dnc\loc\ui\aty\account\AccountProgress.java     //4.Create----创建列表 activity_account_progress
app\src\main\java\com\dnc\loc\ui\aty\account\MyInviteCodeActivity.java
app\src\main\java\com\dnc\loc\ui\aty\account\AccountCreate.java       //3.Create----创建activity_account_create
app\src\main\java\com\dnc\loc\ui\aty\account\AccountTest.java         //3.Create----test ++ activity_account_test
app\src\main\java\com\dnc\loc\ui\aty\account\ResetPwdActivity.java
app\src\main\java\com\dnc\loc\ui\dialog\KfDialog.java
app\src\main\java\com\dnc\loc\ui\dialog\PurseInputDialog.java      // 密码输入对话框----------参考弹窗适配
app\src\main\java\com\dnc\loc\ui\dialog\RechargeDialog.java
app\src\main\java\com\dnc\loc\ui\dialog\WarnDialog.java
app\src\main\java\com\dnc\loc\ui\fm\AppFm.java                     //8.main-fm2
app\src\main\java\com\dnc\loc\ui\fm\
app\src\main\java\com\dnc\loc\ui\fm\CreateOkFm.java
app\src\main\java\com\dnc\loc\ui\fm\FindPwdFm.java
app\src\main\java\com\dnc\loc\ui\fm\FindPwdNextFm.java
app\src\main\java\com\dnc\loc\ui\fm\IndexFm.java                   //8.main-fm1 wallet  
app\src\main\java\com\dnc\loc\ui\fm\KeyCopyFm.java
app\src\main\java\com\dnc\loc\ui\fm\KeyImportFm.java
app\src\main\java\com\dnc\loc\ui\fm\PhoneLoginFm.java                  //3.Login----创建--xxx
app\src\main\java\com\dnc\loc\ui\fm\PwdLoginFm.java                    //2.Login--fm--xxx
app\src\main\java\com\dnc\loc\ui\fm\RegisterFm.java
app\src\main\java\com\dnc\loc\ui\fm\TeamListFm.java
app\src\main\java\com\dnc\loc\ui\fm\WalletImportFm.java
app\src\main\java\com\dnc\loc\ui\fm\WalletkeyImportFm.java         // fm 传参
app\src\main\java\com\dnc\loc\ui\fm\WalletFm.java                  //8.main-fm1  ++
app\src\main\java\com\dnc\loc\ui\fm\WalletWpdFm.java               // 创建公私钥
app\src\main\java\com\dnc\loc\ui\purse\fm\BalanceFm.java           //8.main-fm3
app\src\main\java\com\dnc\loc\ui\scan\CodeScanningUtil.java
app\src\main\java\com\dnc\loc\ui\scan\ImageScanningTask.java
app\src\main\java\com\dnc\loc\ui\widget\ShapedImageView.java
app\src\main\java\com\dnc\loc\ui\widget\ZxingViewFinderView.java
app\src\main\java\com\dnc\loc\ui\widget\
app\src\main\java\com\dnc\loc\ui\widget\HintPopupWindow.java     // ++
app\src\main\java\com\dnc\loc\utils\Sharetils.java               // ++ 需要更换 getPath
app\src\main\java\com\dnc\loc\utils\BindingUtils.java
app\src\main\java\com\dnc\loc\utils\Click.java
app\src\main\java\com\dnc\loc\utils\CopyUtils.java
app\src\main\java\com\dnc\loc\utils\EditInputFilter.java
app\src\main\java\com\dnc\loc\utils\EosUtils.java
app\src\main\java\com\dnc\loc\utils\GsonUtils.java
app\src\main\java\com\dnc\loc\utils\QrCreateUtils.java
app\src\main\java\com\dnc\loc\utils\RefValue.java
app\src\main\java\com\dnc\loc\utils\RxUtils.java
app\src\main\java\com\dnc\loc\utils\WebUtils.java
app\src\main\java\com\dnc\loc\vm\CommissionVM.java
app\src\main\java\com\dnc\loc\vm\NewWalletVM.java
app\src\main\java\com\dnc\loc\vm\TeamVM.java
app\src\main\java\com\dnc\loc\vm\
app\src\main\java\com\dnc\loc\vm\WalletVM.java                   // 钱包，创建公私钥
app\src\main\java\com\dnc\loc\vm\WalletTransaction.java          // 钱包交易，基类
app\src\main\java\com\dnc\loc\vm\WalletManage.java               // 钱包列表 WalletManage ++

app\src\main\res\color\
app\src\main\res\color\toolbar_bg_color.xml           //
app\src\main\res\color\btn_code_color.xml
app\src\main\res\drawable\
app\src\main\res\drawable\bg_result.9.png
app\src\main\res\drawable\edit_cursor_color.xml
app\src\main\res\drawable\icon_record_left.png
app\src\main\res\drawable\icon_record_right.png
app\src\main\res\drawable\selector_bottom_navigation.xml              //ic_home ic_home_black_24dp
app\src\main\res\drawable\selector_bottom_navigation2.xml             // test xx
app\src\main\res\drawable\selector_nav_wallet.xml             // nav
app\src\main\res\drawable\selector_nav_merchandise.xml        // nav
app\src\main\res\drawable\selector_nav_apply.xml              // nav
app\src\main\res\drawable\selector_nav_discover.xml           // nav
app\src\main\res\drawable\selector_checkbox.xml
app\src\main\res\drawable\selector_dialog_label.xml
app\src\main\res\drawable\selector_login_edit.xml
app\src\main\res\drawable\selector_tab_app.xml
app\src\main\res\drawable\selector_tab_index.xml
app\src\main\res\drawable\selector_tab_otc.xml
app\src\main\res\drawable\selector_tab_qbao.xml
app\src\main\res\drawable\shape_blue_radius_gradients.xml
app\src\main\res\drawable\shape_button_request.xml          //
app\src\main\res\drawable\shape_button_complete.xml         // 渐变
app\src\main\res\drawable\shape_button_record_normal.xml    // btn
app\src\main\res\drawable\shape_button_record_selected.xml  // btn
app\src\main\res\drawable\shape_button_n.xml         //shape 半圆
app\src\main\res\drawable\shape_button_p.xml         //shape 半圆
app\src\main\res\drawable\shape_button_s.xml         //shape 半圆创建中
app\src\main\res\drawable\shape_dailog_bg.xml
app\src\main\res\drawable\shape_edit_bg.xml         //shape 不填充圆角矩形边框
app\src\main\res\drawable\shape_edit_bg_solid.xml   //shape 填充圆角矩形边框
app\src\main\res\drawable\shape_qrcode_bg.xml       //shape 部分圆角
app\src\main\res\drawable\shape_main_bg.xml         //shape 部分圆角
app\src\main\res\drawable\shape_main_info_bg.xml    //
app\src\main\res\drawable\shape_logo_bg.xml         //shape 圆形背景
app\src\main\res\drawable\shape_label_right.xml
app\src\main\res\drawable\shape_login_dot.xml       //圆点
app\src\main\res\drawable\shape_login_edit.xml
app\src\main\res\drawable\shape_login_edit_clicked.xml
app\src\main\res\drawable\shape_oval.xml
app\src\main\res\drawable\shape_qr_bg.xml
app\src\main\res\drawable\shape_white_radius_bg.xml
app\src\main\res\layout\
app\src\main\res\layout\activity_about.xml
app\src\main\res\layout\activity_account_manage.xml
app\src\main\res\layout\activity_account_sub.xml
app\src\main\res\layout\activity_account_import.xml   //6.Import--导入
app\src\main\res\layout\activity_account_home.xml     //2.login--创建导入 ++
app\src\main\res\layout\activity_account_create.xml   //3.Create--创建 ++
app\src\main\res\layout\activity_account_test.xml     //3.Create--test ++progress rate
app\src\main\res\layout\activity_account_test_btn.xml
app\src\main\res\layout\activity_account_progress.xml //4.Create--创建列表
app\src\main\res\layout\activity_account_pay.xml      //5.Create--等待支付
app\src\main\res\layout\activity_be.xml
app\src\main\res\layout\activity_chapter_comments.xml
app\src\main\res\layout\activity_invite_friends.xml
app\src\main\res\layout\activity_main.xml             //8.main----
app\src\main\res\layout\activity_main_bak.xml         //8.main----bak
app\src\main\res\layout\activity_my_account.xml       //4.Create----xxx
app\src\main\res\layout\activity_my_commission.xml
app\src\main\res\layout\activity_my_invite_code.xml
app\src\main\res\layout\activity_my_team.xml
app\src\main\res\layout\activity_news_detail.xml
app\src\main\res\layout\activity_reset_pwd.xml
app\src\main\res\layout\activity_scan.xml
app\src\main\res\layout\activity_splash.xml    			//1.splash
app\src\main\res\layout\activity_transaction.xml
app\src\main\res\layout\activity_transaction_result.xml
app\src\main\res\layout\activity_web.xml
app\src\main\res\layout\activity_withdraw.xml
app\src\main\res\layout\dialog_account_pay.xml    //5.Create--等待支付 dialog
app\src\main\res\layout\dialog_kf.xml
app\src\main\res\layout\dialog_new_warn.xml
app\src\main\res\layout\dialog_recharge.xml
app\src\main\res\layout\dialog_wallet_pwd.xml
app\src\main\res\layout\dialog_warn.xml
app\src\main\res\layout\
app\src\main\res\layout\item_root_hintpopupwindow.xml                 //
app\src\main\res\layout\item_bonus.xml
app\src\main\res\layout\item_index_banner.xml
app\src\main\res\layout\item_index_more.xml
app\src\main\res\layout\item_index_news.xml
app\src\main\res\layout\item_index_title.xml
app\src\main\res\layout\item_record.xml               //4.Create --item
app\src\main\res\layout\item_wallet.xml               //8.dnc --item
app\src\main\res\layout\item_result.xml               //
app\src\main\res\layout\item_team.xml
app\src\main\res\layout\layout_account_create.xml     //3.Create input
app\src\main\res\layout\layout_account_progress.xml   //4.Create 创建列表 btn
app\src\main\res\layout\layout_account_pay.xml        //5.Create--等待支付
app\src\main\res\layout\layout_account_import.xml     //6.Import--导入
app\src\main\res\layout\layout_app_center_foot.xml
app\src\main\res\layout\layout_app_item.xml
app\src\main\res\layout\layout_aty_login.xml          //2.login--创建导入 --
app\src\main\res\layout\layout_aty_token_detail.xml
app\src\main\res\layout\layout_balance_token.xml
app\src\main\res\layout\layout_fm_balance.xml         //8.main----fm3
app\src\main\res\layout\layout_fm_create_ok.xml
app\src\main\res\layout\layout_fm_find_pwd.xml
app\src\main\res\layout\layout_fm_find_pwd_next.xml
app\src\main\res\layout\layout_fm_index.xml           //8.main----fm1 
app\src\main\res\layout\layout_fm_wallet.xml          //8.main----fm1 ++
app\src\main\res\layout\layout_fm_key_copy.xml
app\src\main\res\layout\layout_fm_key_import.xml
app\src\main\res\layout\layout_fm_list.xml            //8.main----fm2
app\src\main\res\layout\layout_fm_phone_login.xml     //3.Login----创建 --
app\src\main\res\layout\layout_fm_pwd_login.xml       //2.Login--fm-- --
app\src\main\res\layout\layout_fm_team_list.xml
app\src\main\res\layout\layout_fm_wallet_import.xml
app\src\main\res\layout\layout_fm_wallet_wpd.xml
app\src\main\res\layout\layout_inner_scan.xml
app\src\main\res\layout\layout_transaction_record_item.xml
app\src\main\res\navigation\nav_graph.xml         //
app\src\main\res\menu\
app\src\main\res\menu\bottom_navigation.xml       // main -> main_bar -> content -> bottom--menu
app\src\main\res\menu\main_toolbar.xml            // create -> menu -> setting
app\src\main\res\mipmap-h642dp-port-hdpi\
app\src\main\res\mipmap-h642dp-port-hdpi\image_splash.png                 // 1440X2960
app\src\main\res\mipmap-mdpi\
app\src\main\res\mipmap-mdpi\image_1.jpg
app\src\main\res\mipmap-mdpi\image_2.jpg
app\src\main\res\mipmap-mdpi\image_3.jpg
app\src\main\res\mipmap-mdpi\image_4.jpg
app\src\main\res\mipmap-mdpi\image_banner.png
app\src\main\res\mipmap-xhdpi\
app\src\main\res\mipmap-xhdpi\bg_app_top.png
app\src\main\res\mipmap-xhdpi\bg_invite_left_arrows.png
app\src\main\res\mipmap-xhdpi\bg_invite_right_arrows.png
app\src\main\res\mipmap-xhdpi\bg_my_invite_code.png
app\src\main\res\mipmap-xhdpi\bg_token_detail.png
app\src\main\res\mipmap-xhdpi\bg_white_shadow.9.png
app\src\main\res\mipmap-xhdpi\checkbox_checked.png
app\src\main\res\mipmap-xhdpi\checkbox_default.png
app\src\main\res\mipmap-xhdpi\icon_aty_back.png
app\src\main\res\mipmap-xhdpi\icon_aty_close.png
app\src\main\res\mipmap-xhdpi\icon_back_white.png
app\src\main\res\mipmap-xhdpi\icon_big_logo.png
app\src\main\res\mipmap-xhdpi\icon_dialog_logo.png
app\src\main\res\mipmap-xhdpi\icon_index_logo.png
app\src\main\res\mipmap-xhdpi\icon_invite_bg.png
app\src\main\res\mipmap-xhdpi\icon_invite_info_bg.png
app\src\main\res\mipmap-xhdpi\icon_kf.png
app\src\main\res\mipmap-xhdpi\icon_kf_white.png
app\src\main\res\mipmap-xhdpi\icon_kf_wx.png
app\src\main\res\mipmap-xhdpi\icon_payment.png
app\src\main\res\mipmap-xhdpi\icon_pay_qr_code.png
app\src\main\res\mipmap-xhdpi\icon_qr_scan.png
app\src\main\res\mipmap-xhdpi\icon_refresh.png
app\src\main\res\mipmap-xhdpi\icon_right.png
app\src\main\res\mipmap-xhdpi\icon_setting.png
app\src\main\res\mipmap-xhdpi\icon_small_arrow_right.png
app\src\main\res\mipmap-xhdpi\icon_small_arrow_right_white.png
app\src\main\res\mipmap-xhdpi\icon_transaction_records.png
app\src\main\res\mipmap-xhdpi\icon_transaction_records_dark.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\image_splash.png        // 720X1280
app\src\main\res\mipmap-xhdpi\tab_app.png
app\src\main\res\mipmap-xhdpi\tab_app_checked.png
app\src\main\res\mipmap-xhdpi\tab_app_nor.png
app\src\main\res\mipmap-xhdpi\tab_app_selected.png
app\src\main\res\mipmap-xhdpi\tab_index.png
app\src\main\res\mipmap-xhdpi\tab_index_checked.png
app\src\main\res\mipmap-xhdpi\tab_otc.png
app\src\main\res\mipmap-xhdpi\tab_otc_checked.png
app\src\main\res\mipmap-xhdpi\tab_qbao.png
app\src\main\res\mipmap-xhdpi\tab_qbao_checked.png
app\src\main\res\values\attr.xml
app\src\main\res\values\colors.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml                    //
app\src\main\res\xml\
app\src\main\res\xml\files.xml                        // ++

ui_base\.gitignore
ui_base\build.gradle                            // yatoooon屏幕适配,
ui_base\proguard-rules.pro
ui_base\ui_base.iml

ui_base\src\androidTest\java\com\zlw\base\ExampleInstrumentedTest.java
ui_base\src\main\AndroidManifest.xml
ui_base\src\main\java\com\zlw\base\ui\adapter\BaseListViewAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\BasePositionAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\BaseRecyclerAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\PositionContent.java
ui_base\src\main\java\com\zlw\base\ui\adapter\ReusePagerAdapter.java
ui_base\src\main\java\com\zlw\base\ui\adapter\TabPagerAdapter.java
ui_base\src\main\java\com\zlw\base\ui\aty\BaseToolBarActivity.java
ui_base\src\main\java\com\zlw\base\ui\aty\BaseBarActivity.java            // ++Bar
ui_base\src\main\java\com\zlw\base\ui\aty\BaseActivity.java
ui_base\src\main\java\com\zlw\base\ui\aty\InitAppInterface.java
ui_base\src\main\java\com\zlw\base\ui\aty\LocaleSettingContextWrapper.java
ui_base\src\main\java\com\zlw\base\ui\aty\RxLifeAndSwipeBackAty.java
ui_base\src\main\java\com\zlw\base\ui\fm\BaseFragment.java
ui_base\src\main\java\com\zlw\base\ui\fm\BaseListFragment.java
ui_base\src\main\java\com\zlw\base\ui\listentry\EntryAdapter.java
ui_base\src\main\java\com\zlw\base\ui\listentry\EntryTypedAdapter.java
ui_base\src\main\java\com\zlw\base\ui\listentry\EntryViewHolder.java
ui_base\src\main\java\com\zlw\base\ui\listentry\ListEntryViewHolder.java
ui_base\src\main\java\com\zlw\base\ui\utils\BindingUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\BubbleUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\ColorUtil.java
ui_base\src\main\java\com\zlw\base\ui\utils\Countdown.java
ui_base\src\main\java\com\zlw\base\ui\utils\FileSize.java
ui_base\src\main\java\com\zlw\base\ui\utils\IoUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\LifecycleCallbacks.java
ui_base\src\main\java\com\zlw\base\ui\utils\LoadingProgress.java
ui_base\src\main\java\com\zlw\base\ui\utils\PhotosHelper.java
ui_base\src\main\java\com\zlw\base\ui\utils\RecycleBitmapInLayout.java
ui_base\src\main\java\com\zlw\base\ui\utils\RecyclerViewHelper.java
ui_base\src\main\java\com\zlw\base\ui\utils\RecycleViewUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\RxUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\ScreenUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\StatusBarUtils.java            // ++
ui_base\src\main\java\com\zlw\base\ui\utils\UIToast.java
ui_base\src\main\java\com\zlw\base\ui\utils\ViewUtils.java
ui_base\src\main\java\com\zlw\base\ui\utils\ZFile.java
ui_base\src\main\java\com\zlw\base\ui\vm\BaseViewModel.java
ui_base\src\main\java\com\zlw\base\ui\widget\CircleImageView.java

ui_base\src\main\res\anim\backin.xml
ui_base\src\main\res\anim\backout.xml
ui_base\src\main\res\anim\backupin.xml
ui_base\src\main\res\anim\backupout.xml
ui_base\src\main\res\anim\upin.xml
ui_base\src\main\res\anim\upout.xml
ui_base\src\main\res\anim\zoomin.xml
ui_base\src\main\res\anim\zoomout.xml
ui_base\src\main\res\drawable\shape_toolbar_bg.xml    //+++
ui_base\src\main\res\drawable\ic_index_dashboard.xml
ui_base\src\main\res\drawable\ic_progress_puzzle.xml
ui_base\src\main\res\drawable\loading_backgroud_icon.png
ui_base\src\main\res\drawable\progressbar.xml
ui_base\src\main\res\drawable\progress_circle_shape.xml
ui_base\src\main\res\drawable\selector_btn_retry.xml
ui_base\src\main\res\drawable\selector_btn_white0dp.xml
ui_base\src\main\res\drawable\selector_btn_yellow_0dp.xml
ui_base\src\main\res\drawable\shape_radius_translucent.xml
ui_base\src\main\res\drawable\vector_drawable_cry.xml
ui_base\src\main\res\drawable-xhdpi\download_continue.png
ui_base\src\main\res\drawable-xhdpi\download_suspended.png
ui_base\src\main\res\drawable-xhdpi\icon_close_black.png
ui_base\src\main\res\drawable-xhdpi\icon_empty_bg.png
ui_base\src\main\res\layout\common_loading.xml
ui_base\src\main\res\layout\empty_view.xml
ui_base\src\main\res\layout\error_view.xml
ui_base\src\main\res\layout\fragment_item.xml
ui_base\src\main\res\layout\fragment_item_list.xml
ui_base\src\main\res\layout\layout_empty.xml
ui_base\src\main\res\layout\layout_error.xml
ui_base\src\main\res\layout\layout_loading_progress.xml
ui_base\src\main\res\layout\list_footer.xml
ui_base\src\main\res\layout\loading_view.xml
ui_base\src\main\res\values\attr.xml
ui_base\src\main\res\values\colors.xml
ui_base\src\main\res\values\dimens.xml
ui_base\src\main\res\values\strings.xml
ui_base\src\main\res\values\styles.xml                // 自定义LoadingLayoutStyle
ui_base\src\test\java\com\zlw\base\ExampleUnitTest.java


