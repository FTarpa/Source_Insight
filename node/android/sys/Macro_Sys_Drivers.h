
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:node\android\sys\Macro_Sys_Drivers.h



/***********************************************************************/
/****************************** drivers ********************************/
/***********************************************************************/

//lcd:
u-boot15/drivers/video/sprdfb/lcd/Makefile
u-boot15/drivers/video/sprdfb/sprdfb_panel.c

u-boot15/drivers/video/sprdfb/lcd/lcd_st7789v2_spi.c
	
u-boot15/drivers/video/sprdfb/sprdfb_spi.c
(spi�Ŀ�����Ҫ�޸������SPI_RS(ѡ�����ݻ�������)��)

u-boot15/include/configs/sp9820e_2c10.h
���������te�ż��spi_te_gpio����ҲҪ����te,�������ֿ��ٵ����


//IO����:
u-boot15/board/spreadtrum/sp9820e_2c10/pinmap-sp9820e.c
//BITS_PIN_AF(n) n=0,1,2,3���ܡ������幦�ܿɲο�SCxxxx_GPIO_Spec_Vxxx.xlsx
//BITS_PIN_DS��������������������
//BIT_PIN_WPUS����������ǿ������ǿ��ָ������ѡ����ֵ��С�ĵ��裩
//BIT_PIN_NULL���������� ?ûǿ����
//BIT_PIN_WPU���������� ?����(��ʼ��ƽΪ��)
//BIT_PIN_WPD���������� ������ʼ��ƽΪ��)
//BIT_PIN_NUL������������������Ҳ������
//BIT_PIN_SLP_AP�� ? ? ? ? ? ?����ʱ����AP��
//BIT_PIN_SLP_NUL���� ? ? ?����ʱ�޲�����Ҳ������
//BIT_PIN_SLP_WPU���� ? ? ����ʱ����
//BIT_PIN_SLP_WPU���� ? ? ����ʱ����
//BIT_PIN_SLP_OE������ ? ?����ʱ���
//BIT_PIN_SLP_IE������ ? ? ?����ʱ����
//BIT_PIN_SLP_Z������ ? ? ?����ʱ����


//����
gpio��Ϊ����
����ΪBITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},������ó�����ܵ��µ͵�����
//keypadģ��İ���
//KEYIN��ΪΪ��
//KEYOUT��Ϊ��
//��KEYOUT0,KEYIN2,��ô
//sprd,row = <0>;
//sprd,column = <2>;


4.��������������Audiotester,�ɲο�
https://wenku.baidu.com/view/e454011a580216fc700afdf3.html

5.������������ʱ���ɰ�װӦ��Vysor��������Ļ(ubuntuϵͳ�����ڹȸ��������װVysor���)


6.������С����
ֱ���޸�device/sprd/sharkle/xxx/xxx.xml��size�Ĵ�С(���ﵥλ��M)
device/sprd/sharkle/sp9820e_2h10/sp9820e_2h10.xml name="sp9820e_2h10"
// example:
//	<Block id="miscdata">
//		<Base>0x0</Base>
//		<Size>0x100000</Size>
//	</Block>


7.��������д
����uboot? make bootloader
��дuboot fastboot flash uboot u-boot-sign.bin

sudo fastboot -S 100M flash system system.img

8gpio��ldo����
cat /d/gpio���Բ鿴����״̬������gpio_request��û������ɹ����������ڵ�״̬(�����������ߵ�ƽ��͵�ƽ)
???? gpio-49 ?(? ? ? ? ? ? ? ? ? ?|xxxx1 ? ? ? ? ? ? ? ?)in(����)? hi(�ߵ�ƽ)
�� gpio-138 (?????????????????? |xxxx2 ? ? ? ? ? ? ? ? )out(���) lo(�͵�ƽ)
/d/regulator�ɲ鿴ldo��ʹ��������Լ����õ�������С��ѹ


9.����

*#*#83781#*#*,���빤��ģʽ(EngineerMode.apk)

*#*#83789#*#*,����ģʽ

*#*#2266#*#*,����sgps����


10.cat /proc/meminfoֻ�ܿ��������ڴ�����(�в���û������)


11.չѶ��վ
������ http://222.66.158.139:2008/cqweb/#
���� https://isupport.spreadtrum.com/iSupport/apply/faq_list#tab-


12.EXINT�Ĺܽ���Ӳ��ȥ���Ĺ���


13.�տ���,���ڴ�ӡһ���ֹͣ�����,�ҵ���Ӧ��dts�ļ�,��loglevel=1�ĳ�loglevel=8����adb shell,

echo 8 >/proc/sys/kernel/printk


14.�������ߵ͵�����ʱ��userdebug�汾Ҫ�ر�modem log,�����޷��������ߡ�


15.չѶƽ̨sysdump https://blog.csdn.net/wjky2014/article/details/84674813






/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/


kernel/drivers/rtc/rtc-sprd.c







