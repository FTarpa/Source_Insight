//Ŀ¼[Num][Ca]:
// 1. androidĿ¼
Save:node\android\sys\Macro_Sys_File.h \[1.1\] androidĿ¼
// 2. system.img
Save:node\android\sys\Macro_Sys_File.h \[2.1\] Android��ѹsystem.img
Save:node\android\sys\Macro_Sys_File.h \[2.2\] oem persist sysinfo����������������ʲô��
// 3. androidĿ¼
Save:node\android\sys\Macro_Sys_File.h \[3.1\] AndroidԴ��Ŀ¼�ṹ���£�



/***********************************************************************/

[1.1] androidĿ¼
out\target\product\sp9820e_1h10\system\app
vendor\sprd\overlay\apn\apns-conf_8.xml
vendor\sprd\UniverseUI\SprdLauncher2
packages\apps\Settings





/***********************************************************************/



[2.1] Android��ѹsystem.img
android4.0֮��system.img�ļ���ʽΪext4�������Ҫ�޸�system.img�ļ������������ 
1.ubuntuϵͳ��׼������make_ext4fs��simg2img��mkusering.sh�� 
make_ext4fs��simg2img��mkusering.sh���������߿�����Դ�����֮��� out/host/linux_x86/binĿ¼�»�ȡ����������������Ƶ�ubuntuϵͳ/usr/binĿ¼�� 
2.��ѹsystem.imgΪsystem.img.ext4 
���simg2img system.img system.img.ext4 
3.����system.img.ext4����Ŀ¼tmp 
���mkdir tmp 
4.����system.img.ext4��tmpĿ¼ 
���mount -t ext4 -o loop system.img.ext4 tmp 
5.����tmpĿ¼�����������޸�tmp�е�Ŀ¼ 
6.��tmpĿ¼���Ϊ�µ�system.img 
���make_ext4fs -s -l 239M -a system system.img tmp 
����make_ext4fs��simg2img��mkusering.sh�Ĳ�������������ն���ֱ������������س��鿴��


[2.2] oem persist sysinfo����������������ʲô��

[ANSWER]
1. oem������Ϊȫ���ƹ��ܶ������һ�����������������˶�Ӧ��ͬ���ҵĸ������ò�������ĳЩ���ܿ��أ���Щ����Ҫ��򿪣���������Ҫ��رգ���ʱ����Ҫ�õ�oem.img���������Ҫ�������汾��?
2. systeminfo��ר��Ϊ�����system�������������ķ�����system���������ָ���system��������Դ�Ƿ񱻸��ģ�����apk��ɾ������ĳЩȨ�ޱ����ģ�Ŀ����Ϊ�˷�ֹsystem�����ĵ����ֻ�����ء���systeminfo�������һ��check.bin�ļ������ļ�����洢����system�ļ������Ӧ��sha1ֵ��?
3. persist���������ڱ���FRP(factory reset protcect)�����õ��ʺš�������ܱ�������Ϣ�������ڻָ��������ú���ա�?

����������������ɾ��.


/***********************************************************************/

[3.1] AndroidԴ��Ŀ¼�ṹ���£�

|-- Makefile
|-- abi ��applicationbinary interface��Ӧ�ó�������ƽӿڣ�����libgabi++.so��ؿ��ļ���
|-- art ��google��4.4�������������Dalvik������ʱ��
|-- bionic (Android��C library����C���ļ�)
|-- bootable ������������ش��룩
|-- build �����ϵͳ�������generic�Ȼ����������ð���
|-- cts ��Android�����Բ����׼���׼��
|-- dalvik ��dalvik JAVA�������
|-- developers (�������ã���ż�������)
|-- development ����������Ҫ��һЩ���̼����ߣ�
|-- device (�豸��ش��룬���Ǹ�������Ҫ���ú��޸ĵĴ���)
|-- docs (���ܿ�Դ����ĵ�)
|-- external ��androidʹ�õ�һЩ��Դ��ģ�飩
|-- frameworks �����Ŀ�ܡ���java��C++���ԣ�
|-- hardware �����ֳ��ҿ�Դ��Ӳ�������HAL���룩
|-- kernel (�����ں���ش���)
|-- libcore (���Ŀ����)
|-- libnativehelper (JNI�õ��Ŀ�)
|-- ndk (ndk���)
|-- out ��������ɺ�Ĵ������Ŀ¼��
|-- packages ��Ӧ�ó������
|-- pdk (google����������Ƭ���Ķ���)
|-- prebuilt ��x86��arm�ܹ���Ԥ�����һЩ��Դ��
|-- sdk ��sdk��ģ������
|-- tools �����ߣ�
|-- system ���ײ��ļ�ϵͳ�⡢Ӧ�ü��������C���ԣ�
|-- vendor �����̶��ƴ��룩












