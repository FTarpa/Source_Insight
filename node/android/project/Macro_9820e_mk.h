
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:SI\node\9820e\Macro_9820e_mk.h \[1.1\] mk�����Ӧ��:
Save:SI\node\9820e\Macro_9820e_mk.h \[1.2\] ����apk��Android.mk����
Save:SI\node\9820e\Macro_9820e_mk.h \[1.3\] ��Щ������app���õ��ֻ�����ж��������ʱ����޷�����ʹ�á�



/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] mk�����Ӧ��:
packages\apps\Calculator\Android.mk LOCAL_PACKAGE_NAME := Calculator
//	LOCAL_PACKAGE_NAME := Calculator

build\target\product\generic_no_telephony.mk PRODUCT_PACKAGES
//	PRODUCT_PACKAGES := \
//		Calculator \

build\target\product\sdk.mk PRODUCT_PACKAGES
//PRODUCT_PACKAGES := \
//	Calculator \


[1.2] ����apk��Android.mk����
//	LOCAL_PATH := $(call my-dir)
//
//	include $(CLEAR_VARS)
//	LOCAL_MODULE := Zapya
//	LOCAL_MODULE_TAGS := optional
//	LOCAL_SRC_FILES := $(LOCAL_MODULE).apk
//	LOCAL_MODULE_CLASS := APPS
//	LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
//	LOCAL_CERTIFICATE := PRESIGNED
//#LOCAL_MODULE_PATH := $(TARGET_OUT)/vital-app
//#LOCAL_DEX_PREOPT := false
//	LOCAL_PREBUILT_JNI_LIBS:= @lib/armeabi/libcore.so \
//	@lib/armeabi/libdm_md5.so \
//	@lib/armeabi/libhyphenate.so \
//	@lib/armeabi/libjni.so \
//	@lib/armeabi/libobserver.so \
//	@lib/armeabi/libobserver21.so \
//	@lib/armeabi/libzbar.so
//
//	include $(BUILD_PREBUILT)

[1.3] ��Щ������app���õ��ֻ�����ж��������ʱ����޷�����ʹ�á�
��ɴ��������ԭ���������Ҫϵͳǩ�������⡣
//	include $(CLEAR_VARS)
//# Module name should match apk name to be installed
//	LOCAL_MODULE := HdPlayer
//	LOCAL_MODULE_TAGS := optional
//	LOCAL_SRC_FILES := HdPlayer/Signed_HDPlayerPhone433.apk
//	LOCAL_MODULE_CLASS := APPS
//	LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
//	LOCAL_CERTIFICATE := PRESIGNED
//	LOCAL_MODULE_PATH := $(TARGET_OUT)/priv-app
//	LOCAL_DEX_PREOPT := false
//	include $(BUILD_PREBUILT) 
������Ҫ�� 
LOCAL_CERTIFICATE := PRESIGNED �޸�Ϊ

LOCAL_CERTIFICATE := platform


/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








