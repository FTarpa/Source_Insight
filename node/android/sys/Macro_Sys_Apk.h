
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:node\android\sys\Macro_Sys_Apk.h \[1.1\] ���ȷ��apk��ǩ����





/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

ǩ��

[1.1] ���ȷ��apk��ǩ����
[SOLUTION]
Ԥ����vendor/.../system/app�����apk�ᱻǩ��ϵͳǩ����
���п��ܵ���apk����ǩ����һ�´Ӷ��޷����������簴�մ˷���Ԥ��Gmail��
�뵽��˾MTK online�ϣ�����FAQ���ؼ��֡�Ԥ��apk��������дandroid.mk�ķ�ʽԤ��apk��
android.mk�еĹؼ���һ���ǣ�

LOCAL_CERTIFICATE := PRESIGNED

ͬʱ������ʹ������command��ȷ��apkʹ�õ�key(����${your_apk}����apk������)��
jarsigner -verify -verbose -certs ${your_apk}>log.txt

log.txt����Email address��CN��?OU��?O��Ӧ����Ϣ����apkǩ����ص���Ϣ��



/***********************************************************************/
/******************************** APK **********************************/
/***********************************************************************/

*Accountprovider  �˺Ź�����
ApkManager.apk                        APK��װ������N�లװ����
advancedsettings.apk�߼�����
AlarmClock  ����
AndroidSyncServiceϵͳͬ������
AndroidUI  ���ᰮ����X10UI�������
appinstaller.apkapp��װ��
*ApplicationsProvider  ���������
AutoSettingDispatcher�Զ������޲�
bootinfo  ������Ϣ
Bluetooth.apk������ɾ�˾�û�������ˣ�
Browser  �Դ������
Bugreport.apk Bug����
btoppservice  �������÷���
Calculator  ϵͳ�Դ�������
Calendar  ϵͳ�Դ���������
CalendarProviderϵͳ�Դ�����������
*Camera  ϵͳ�Դ����
CapabilitySetupReceiver  ��������װ����
*CertInstaller.apk                      ֤�����
CdfInfoAccessorCDF��Ϣ������
*Contacts  ��ϵ�˴���
CredMgrServiceCredMgr����
*DefaultContainerService.apk        Ĭ��ͨѶ¼����
DeskClock.apk               �Դ����ӣ��õ��������ӵĿ�ɾ��
DigitalClock  ����ʱ��
*DownloadProvider  ���ع�����
*DrmProvider  DRM��Ϣ������
SPManager.apk        DSP��Ƶ�����˸缯�����������棬�Ҳ�̫ʹ�������ɾ��
EMAIL  ���ö�������
Emeual  ����ʲô�õ��Һ���֪�飩
EnhancedGooglesearchProvider  ��ǿ�ȸ�����������
Fcebook  ��������
FaceRecognition����ʶ�����MS���濴��Ƭ��ʱ����Թ�����ϵ�ˣ�
filemanager.apk�ļ�����
FileCopier  �ļ�������
Fota  FOTA�������
Generic-app-Installerȫ����APK��װ��
GlobalSearch  ȫ������
Gmail  �ȸ�MAIL
GmailProviderGMAIL������
Gallery3D.apk                3D����� ���������ٶ����ģ���ɾ��
GenieWidget.apk���������ţ����Լ������������ţ�ɾ�ˣ�
GoogleApps  �ȸ����
googlebackuptransport.apk
googlecheckin.apk
googlecheckinhelper.apk
GoogleFeedback.apk               ***����˵ɾ���󿪻�����ʾgooglefeedback.apk��������ɾ��ûʲô�����ã�
googlepartnersrtup.apk     Google���֣�ɾ��û�о������⣩
GoogleCalendarSyncAdapter.apk  �洢������Ϣ��ɾ��û�о������⣩
GoogleContactsSyncAdapter.apk  �洢��ϵ����Ϣ����Ӱ�쵽��ϵ��δɾ�����˸羫����Ѿ�ɾ�ˣ�
GoogleCheckin  �ȸ�ǩ�����
GoogleContactsProvider�ȸ���ϵ�˹�����
GooglePartnerSetup�ȸ��������
GoogleSearch  �ȸ�����
GoogleQuickSearchBox.apk      �ȸ�������ɾ��Ӱ�쵽��������������
GoogleServicesFramework.apk  ͬ��֧�ַ���ɾ�˲���ͬ����ϵ�ˣ����ܵ�¼google��
GoogleSettingProvider�ȸ����ù�����
GoogleSubscribedFeedsProvider  �ȸ�ͬ��������
GooglePinyinIME.apk               Googleƴ�������������뷨�Ŀ�ɾ��
gtalkserviceGTALK����
HTMLViewer  HTM�鿴��
hidialer.apk ���ܲ���
himarket.apk ��׿�г�
kickback.apk                         ��������
LearningClient
Launcher2.apk2.2ԭ�����棨��ADW��PRO�Ŀ�ɾ��ɾ���Ժ����������Ҫ�ڿ����Ժ�ӵ��԰�װ��91���㶹���ֶ��ɣ�
LiveWallpapersPicker.apk ��̬��ֽ����ɾ������G2����������ô����
im.apk    ��ʹͨѶ�������MSN��yahooͨ
implugin.apk
ImProvidergtalk������
Launcher  ��ҳ�����
MAPS  �ȸ��ͼ
MarketUpdater  �����г����³���
*MediaProvider  ý�������
Mediascape  ����������Mediascape
MediascapePluginManager  Media���������
MediaUploader  ý�������
MetadatacleanupԪ���������
MMS  ���źͲ��ų���
Moixer ���˵�moixer����
NUSIC  ԭ�����ֲ�����
nDuoaDialer.apkN�ದ�ţ���ɾ���Դ��ľͿ����ˣ�
nDuoaMarket.apkN���г�����ɾ�������г����ҹ��ˣ�
nDuoaSettings.apkN���������1����ò�Ҫɾ���ܲ���ĸ߼����ã��˸缯�������������棩
nDuoaSettingsAddon.apk    N���������2����ò�Ҫɾ���ܲ���ĸ߼����ã�
nDuoaSettingsHelper.apk    N���������3����ò�Ҫɾ���ܲ���ĸ߼����ã�
NetworkLocation�ݺ������ʾ�ص�
officesuite office�׼����ɿ�PDF
OneTimeInitializer.apk           ***���������壬ɾ��ûʲô�����ã�
*PackgeInstaller  APK��װ��
PcCompanionInstallerPcCompanion�İ�װ����������>Ӧ�ó���>������й�ѡ��ѡ��
*Phone  �绰����
Phonebook  �绰��
PhoneGuard.apk                 ������ʿ����ɾ����������ͨ�ȵģ�
PicoTts  ��������
PlaynowarenaPLAY NOW����
Playnowarena_updaterPLAY NOW�ĸ��³���
PNPWizard  PNP������
PrisonBreak.apk           Խ������ǽ�õģ�
Protips.apk              ***���������壬ɾ���޸����ã�
*QuickMgr.apk     һ�����ã�����menu�ĺ󵯳����Ǹ�����Ҫɾ��ɾ���Ժ󳤰�menu��FC��
Readsdcard  TF����ϵͳ��ȡ����
se-support-rachael���ᰮ���ŵİ�������
SemcCameraApplicationSE�������ǿ���򣨸��Դ���������������ģʽ��
SemcIme  ϵͳ�Դ����뷨
SemcSetupWiazard���ᰮ����������
SEMCTouchPalChinese���ᰮ�������Ĵ������뷨
SEMCTouchPalKrea���ᰮ���ź��ﴥ�����뷨
ServiceMenu  ����˵�
*Setting  ���ó���
*SettingProvider  ���ù������������ֻ��������һЩ�趨��
*SetupWizard  ��һ�ο����Ŀ�����
SnsContactImageCacheProvider  SNS��ϵ��ͷ�񻺴������
SMSPopup.apk�������ݣ����Ƕ�����ʱ�������Ǹ�����ʵ���Ǹ�������ܣ�����chomp�滻��
soundback.apk�������ܣ���ɾ��
SoundRecorder  ¼����
STK  SIM������
Street  �ȸ��ͼ�Ľ־�ģʽ
*superuser.apk        �����û�
systemupdater.apkϵͳ����
TALK  gtalk������� ����ɾ��ɾ��û�е����г��ϣ�
*TelephonyProvider  �绰������
Timescape  ����������Timesacpe
TimescapePluginManagerTimescape���������
TimescapeProivderTimescape������
TimesacpeTheme****   ������ɫ��Timescape����
TrackID   ������TrackID
Term.apk       �����նˣ���ɾ�����������飬��������ˢrecovery��
TtsService  �����������
Updater.apk                      ������������ɾ��
UserDictionaryProvider�û��ֵ������������ϵͳ�Դ����뷨���û��Զ�������������
Vending  �����г�
VoiceDialer  �������ų���
VoiceSearch  ������������
VpnService  ����ר��������
WebMediaProvider��ҳý�������
Wiper  �������ݳ��򣨻ָ����������õģ�
YouTube  ����������Youtube�ͻ���














