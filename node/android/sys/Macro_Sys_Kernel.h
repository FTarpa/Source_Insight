
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:node\android\sys\Macro_Sys_Kernel.h 



/***********************************************************************/

Դ�������ɺ������Ҫ�޸��ں����ã��ɲο����·���
������
make kernel-menuconfig
�󱣴�
make kernel-savedefconfig

���嶨��
kernel/Android.mk
kernel-savedefconfig: $(TARGET_KERNEL_CONFIG)
        cp $(TARGET_KERNEL_CONFIG) $(KERNEL_CONFIG_FILE)
kernel-menuconfig:
        $(hide) mkdir -p $(KERNEL_OUT)
        $(MAKE) -C $(KERNEL_DIR) $(KERNEL_MAKE_OPTION) menuconfig
һ��cpu���ں������ļ���
kernel/arch/xxxx/configs/xxx_defconfig
//kernel/arch/arm64/configs/sprd_sharkle_defconfig

�������ɺ�������ļ�
out/target/product/xxxxx/obj/KERNEL_OBJ/.config
//out/target/product/sp9820e_1h10/obj/u-boot15/.config
out/target/product/sp9820e_1h10/obj/KERNEL/.config


�Ա������ļ��нϴ�Ĳ���,ԭ������һ������������Kconfig�ļ���
�ں˻ὫKconfig�ļ������ü�����ȥ,��config USELIB,���ó�CONFIG_USELIB��
���Կ������ʱ�򣬿�ĳ��CONFIG_XXX_XXXX��ֵ��Ҫ�����յ������ļ�out/target/product/xxxxx/obj/KERNEL_OBJ/.config

��Andoird7.0��,ʹ��make menuconfig��һֱ������Ҫ�����ն�����export USE_NINJA=false��Ȼ����make menuconfig




/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








