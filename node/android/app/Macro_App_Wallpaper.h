
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h \[1.1\] ���þ�̬ǽֽ���ļ����������
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h \[1.2\] Wallpaper�����ĸ�������Ƶģ�
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h \[1.3\] App�����Ż���ʾǽֽ������




/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] ���þ�̬ǽֽ���ļ����������
ͨ��launcher���ļ���������ͼ���Ӧ��ѡ��ľ�̬ǽֽ�����ú����
frameworks\base\services\java\com\android\server\WallpaperManagerService.java 
����������

����ĵط�ΪWallpaperManagerService.java�ж�����ļ�WALLPAPER_FILE��,
android���汾֮�䣬����·��������

��android4.0.3Ϊ����
    static final File WALLPAPER_DIR = new File(
            "/data/data/com.android.settings/files");
    static final String WALLPAPER = "wallpaper";
    static final File WALLPAPER_FILE = new File(WALLPAPER_DIR, WALLPAPER);
  �����ļ���·��Ϊ /data/data/com.android.settings/files/wallpaper
  
ǽֽ������ļ���ʽΪbmp��
ִ������adb����,pull������̬ǽֽ�ļ�wallpaper�������ļ�����׺Ϊbmp(������Ϊwallpaper.bmp�����Ϳ�����PC���鿴ǽֽͼƬ��
adb pull /data/data/com.android.settings/files/wallpaper

����Ϊ��̬ǽֽ���ļ��С�ͼ���е�ԭͼƬ����ɾ������Ӱ��ǽֽ����ʾ��


[1.2] Wallpaper�����ĸ�������Ƶģ�
����Ǿ�̬ǽֽ������ϵͳ�Դ���ǽֽ,���ߴ��ļ�ϵͳ��ͼ��ѡ���ͼƬ�� �����������ͨ��WallpaperManager�Ľӿڰ�ͼƬ���ú󱣴浽WallpaperManagerService��
Ȼ����ImageWallpaper.javaͨ��WallpaperManager�Ľӿڰ�ͨ�����ú��ǽֽͼƬ�������������ƣ�draw����ǽֽ���ڡ�
����Ƕ�̬ǽֽ���ɶ�̬ǽֽ������MagicSmoke�����л��ơ�

?

[1.3] App�����Ż���ʾǽֽ������
Wallpaper��ϵͳ����Ĵ��ڣ�����WindowManagerServiceά������Ϊ�ض�Ӧ�õı�����ʾ��
���app�Ĵ�����������������WindowManager.LayoutParams.FLAG_SHOW_WALLPAPER�� ���ұ���͸����WindowManagerService���ڸ�App�Ĵ��ں�����ʾǽֽ��



/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








