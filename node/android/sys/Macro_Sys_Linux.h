
����·������:
//basePath = 

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// 1.Linux ����
Save:node\android\sys\Macro_Sys_Linux.h \[1.1\] ����û���Ȩ��
Save:node\android\sys\Macro_Sys_Linux.h \[1.2\] samba�������� ...
Save:node\android\sys\Macro_Sys_Linux.h \[1.3\] ��װVMWare Tools
Save:node\android\sys\Macro_Sys_Linux.h \[1.4\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.5\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.6\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.7\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.8\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.9\] 
Save:node\android\sys\Macro_Sys_Linux.h \[1.10\] 
// 2.�鿴ϵͳ����
Save:node\android\sys\Macro_Sys_Linux.h \[2.1\] lscpu:��ʾcpu�ܹ���Ϣ
Save:node\android\sys\Macro_Sys_Linux.h \[2.2\] cat /proc/cpuinfo:�鿴CPU��ϸ��Ϣ
Save:node\android\sys\Macro_Sys_Linux.h \[2.3\] cat /proc/cpuinfo:�鿴CPU��ϸ��Ϣ
Save:node\android\sys\Macro_Sys_Linux.h \[2.4\] free -m: �ڴ�
Save:node\android\sys\Macro_Sys_Linux.h \[2.5\] df:�鿴Ӳ��ʹ�����
Save:node\android\sys\Macro_Sys_Linux.h \[2.6\] proc
Save:node\android\sys\Macro_Sys_Linux.h \[2.7\] 
Save:node\android\sys\Macro_Sys_Linux.h \[2.8\] 
Save:node\android\sys\Macro_Sys_Linux.h \[2.9\] 
Save:node\android\sys\Macro_Sys_Linux.h \[2.10\] 
// �������
Save:Help\Test\Macro_Test_Node_Num.h \[1.1\] 




[1.1] ����û���Ȩ��
# useradd �Cd /usr/sam -m sam

���������һ���û�sam������-d��-mѡ������Ϊ��¼��sam����һ����Ŀ¼/usr/sam��/usrΪĬ�ϵ��û���Ŀ¼���ڵĸ�Ŀ¼����

 

���赱ǰ�û���sam��������������޸ĸ��û��Լ��Ŀ��

# passwd

Old password:******

New password:*******

Re-enter new password:*******

 

����ǳ����û���������������ʽָ���κ��û��Ŀ��

# passwd sam

New password:*******

Re-enter new password:*******

 

>>�ο�1====================================

1������û�

������adduser�������һ����ͨ�û����������£�
#adduser tommy  //���һ����Ϊtommy���û�
#passwd tommy   //�޸�����
Changing password for user tommy.
New UNIX password:	   //����������������
Retype new UNIX password:  //�ٴ�����������
passwd: all authentication tokens updated successfully.
2������rootȨ��
����һ���޸� /etc/sudoers �ļ����ҵ�����һ�У���ǰ���ע�ͣ�#��ȥ��
## Allows people in group wheel to run all commands
%wheel	  ALL=(ALL)    ALL
Ȼ���޸��û���ʹ������root�飨wheel�����������£�
#usermod -g root tommy
�޸���ϣ����ڿ�����tommy�ʺŵ�¼��Ȼ�������� su - �����ɻ��rootȨ�޽��в�����
���������޸� /etc/sudoers �ļ����ҵ�����һ�У���root�������һ�У�������ʾ��
## Allow root to run any commands anywhere
root	ALL=(ALL)	  ALL
tommy	ALL=(ALL)	  ALL
�޸���ϣ����ڿ�����tommy�ʺŵ�¼��Ȼ�������� su - �����ɻ��rootȨ�޽��в�����

 


 

>>�ο�2====================================

��useradd�������û�����ֱ����sshԶ�̷��ʣ���Ҫ�޸�ssh�������
���£�
vi /etc/ssh/sshd_config 
���

AllowUsers root@192.168.1.32 admin
����û��ÿո����
>>�ο�3====================================
�������ͨ�û����root�û���Ȩ��ִ�в���������Ҫ֪��root�û����������root�û������л��أ���һ������sudo����ʵ���������.
Sudo�Ĺ������̣�
��1��root�û��༭/etc/sudoers�ļ�,���Ҫ�������ͨ�û���¼,��������ôһ�м�¼��root ALL=(ALL) ALL,�����к�����ӣ�Sam ALL=(ALL) ALL
(2) ��ôsam�û���ִ�в���ʱ,�����ִ�еĲ����Լ�û��Ȩ��,���ȥ/etc/sudoers�ļ��в����Ƿ��ж�Ӧ�ļ�¼,����еĻ�����ʱ���rootȨ��,ִ��ֻ��root����ִ�еĲ���.
ע�⣺�������ʾ��������,�����������sam�û�������,������root�û�������.���磺
Shell> sudo mkdir �Cp a/b/c/d
We trust you have received the usual lecture from the local System
Administrator. It usually boils down to these three things:
#1) Respect the privacy of others.
#2) Think before you type.
#3) With great power comes great responsibility.
Password: #�����������sam�û��Լ�������,������root������
����������
1) �༭/etc/sudoers�ļ�,ʹ��visudo����,
Shell> visudo
��ʵvisudo����Ҳ�ǵ���viȥ�༭sudoer�ļ���,�����ڱ���ʱ��ȥ������޸ĺ��ļ����﷨,��������ǲ��ܱ����,�������ֱ����vi���༭���ļ�,ǿ�Ʊ�����Ȼ�ɹ�,�����������
���������ﲢ���ܸ�����ʾ,Ҳ�͵����˺���sudo����Ĳ�����.
2) ��¼������
Sam ALL=(ALL) ALL
ʹ�����ʻ� ���������=�����Ա任����ݣ� �����´������
����������˼�� sam�û��������κεط���¼,�����л����κ��û������κβ���.���������ALL����д,ֻдΪ sam ALL=ALL,��Ĭ��ֻ���л�Ϊroot�û�.

 

>>�ο�4====================================

linux chown����������÷����--�ı䵵����������:

Ҫ�����ļ� program.c �������ߣ� chown jim program.c
program.c ���û�����Ȩ������Ӧ�õ� jim����Ϊ�����ߣ�jim ����ʹ�� chmod ���������ܾ������û����� program.c��

Ҫ��Ŀ¼ /tmp/src �������ļ��������ߺ������Ϊ�û� john ���� build��chown -R john:build /tmp/src

��: tomcat�İ�װĿ¼���������޸�(#chown -R user:group /usr/java/tomcat5.5) 




>>�ο�5====================================

linux����ӣ�ɾ�����޸ģ��鿴�û����û���

1��������

groupadd test

����һ��test��

2���޸���

groupmod -n test2 test

��test������Ӹĳ�test2

3��ɾ����

groupdel test2

ɾ�� ��test2

4���鿴��

a�����鿴��ǰ��¼�û����ڵ��� groups���鿴apacheuser������groups apacheuser

b�����鿴������ cat /etc/group

c�����е�linuxϵͳû��/etc/group�ļ��ģ����ʱ��������������

cat /etc/passwd |awk -F [:] ��{print $4}�� |sort|uniq | getent group |awk -F [:] ��{print $1}��

�����õ�һ��������getent,����ͨ����ID����������Ϣ,����������û�еĻ�,�Ǿͺ��Ѳ���,ϵͳ�����е�����.

�����û�����

1�������û�

�鿴���ƴ�ӡ?

[root@krlcgcms01 mytest]# useradd �Chelp

Usage: useradd [options] LOGIN

Options:

-b, �Cbase-dir BASE_DIR	   ���û���·����Ϊ�û��ĵ�¼Ŀ¼

-c, �Ccomment COMMENT		   ���û���ע��

-d, �Chome-dir HOME_DIR	   �����û��ĵ�¼Ŀ¼

-D, �Cdefaults 			   �ı�����

-e, �Cexpiredate EXPIRE_DATE �����û�����Ч��

-f, �Cinactive INACTIVE	   �û����ں���������Ч

-g, �Cgid GROUP			   ʹ�û�ֻ����ĳ����

-G, �Cgroups GROUPS		   ʹ�û�����ĳ����

-h, �Chelp 				   ����

-k, �Cskel SKEL_DIR		   ָ��������skelĿ¼

-K, �Ckey KEY=VALUE		   ���� /etc/login.defs �����ļ�

-m, �Ccreate-home			   �Զ�������¼Ŀ¼

-l, 						  �����û����뵽lastlog�ļ���

-M, 						  ���Զ�������¼Ŀ¼

-r, 						  ����ϵͳ�˺�

-o, �Cnon-unique			   �����û�ӵ����ͬ��UID

-p, �Cpassword PASSWORD	   Ϊ���û�ʹ�ü�������

-s, �Cshell SHELL			   ��¼ʱ���shell

-u, �Cuid UID				   Ϊ���û�ָ��һ��UID

-Z, �Cselinux-user SEUSER	   use a specific SEUSER for the SELinux user mapping

[root@krlcgcms01 mytest]# useradd --help

Usage: useradd [options] LOGIN

 

Options:

 -b, --base-dir BASE_DIR	   ���û���·����Ϊ�û��ĵ�¼Ŀ¼

 -c, --comment COMMENT		   ���û���ע��

 -d, --home-dir HOME_DIR	   �����û��ĵ�¼Ŀ¼

 -D, --defaults 			   �ı�����

 -e, --expiredate EXPIRE_DATE �����û�����Ч��

 -f, --inactive INACTIVE	   �û����ں���������Ч

 -g, --gid GROUP			   ʹ�û�ֻ����ĳ����

 -G, --groups GROUPS		   ʹ�û�����ĳ����

 -h, --help 				   ����

 -k, --skel SKEL_DIR		   ָ��������skelĿ¼

 -K, --key KEY=VALUE		   ���� /etc/login.defs �����ļ�

 -m, --create-home			   �Զ�������¼Ŀ¼

 -l,						   �����û����뵽lastlog�ļ���

 -M,						   ���Զ�������¼Ŀ¼

 -r,						   ����ϵͳ�˺�

 -o, --non-unique			   �����û�ӵ����ͬ��UID

 -p, --password PASSWORD	   Ϊ���û�ʹ�ü�������

 -s, --shell SHELL			   ��¼ʱ���shell

 -u, --uid UID				   Ϊ���û�ָ��һ��UID

 -Z, --selinux-user SEUSER	   use a specific SEUSER for the SELinux user mappinguseradd test

 

passwd test

�����û�test����һ��Ҫע��ģ�useradd����һ���û��󣬲�Ҫ���˸����������룬��Ȼ���ܵ�¼�ġ�

 

2���޸��û�

usermod -d /home/test -G test2 test

��test�û��ĵ�¼Ŀ¼�ĳ�/home/test��������test2�飬ע�������Ǵ�G��

gpasswd -a test test2 ���û�test���뵽test2��

gpasswd -d test test2 ���û�test��test2�����Ƴ�

 

3��ɾ���û�

userdel test

��test�û�ɾ��

 

4���鿴�û�

a�����鿴��ǰ��¼�û�

[root@krlcgcms01 ~]# w

[root@krlcgcms01 ~]# who

 

b�����鿴�Լ����û���

[root@krlcgcms01 ~]# whoami

 

c�����鿴�����û���Ϣ

[root@krlcgcms01 ~]# finger apacheuser

[root@krlcgcms01 ~]# id apacheuser

 

d�����鿴�û���¼��¼

[root@krlcgcms01 ~]# last �鿴��¼�ɹ����û���¼

[root@krlcgcms01 ~]# lastb �鿴��¼���ɹ����û���¼

 

e�����鿴�����û�

[root@krlcgcms01 ~]# cut -d : -f 1 /etc/passwd

[root@krlcgcms01 ~]# cat /etc/passwd |awk -F \: ��{print $1}��




[1.2] samba�������� ...




[1.3] ��װVMWare Tools
Virtualbox




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 




[2.1] lscpu:��ʾcpu�ܹ���Ϣ

���ƴ���
[xxx@localhost ~]$ lscpu
//  Architecture:			x86_64
//  CPU op-mode(s):		32-bit, 64-bit
//  Byte Order:			Little Endian
//  CPU(s):				12������������#�ܴ�������������
//  On-line CPU(s) list:	0-11
//  Thread(s) per core:	1 ������������#ÿ������֧�ֵ��߳�������1��ʾֻ֧��һ���̣߳�����֧�ֳ��߳�
//  Core(s) per socket:	6 ������������#ÿ���������ĺ�������
//  Socket(s): 			2 ������������#����������
//  NUMA node(s):			1
//  Vendor ID: 			GenuineIntel
//  CPU family:			6
//  Model: 				44
//  Stepping:				2
//  CPU MHz:				1600.000
//  BogoMIPS:				5333.54
//  Virtualization:		VT-x
//  L1d cache: 			32K
//  L1i cache: 			32K
//  L2 cache:				256K
//  L3 cache:				12288K
//  NUMA node0 CPU(s): 	0-11


//���ƴ���
//�ܴ�������������=����������*ÿ���������ĺ�������*ÿ������֧�ֵ��߳�������
//��:CPU(s) = Socket(s) * Core(s) * Thread(s)��



[2.2] cat /proc/cpuinfo:�鿴CPU��ϸ��Ϣ
//  processor		 : 0
//  vendor_id		 : GenuineIntel
//  cpu family 	 : 6
//  model			 : 44
//  model name 	 : Intel(R) Xeon(R) CPU 		  X5650  @ 2.67GHz
//  stepping		 : 2
//  microcode		 : 0x1a
//  cpu MHz		 : 1600.000
//  cache size 	 : 12288 KB
//  physical id	 : 0
//  siblings		 : 6
//  core id		 : 0
//  cpu cores		 : 6
//  apicid 		 : 0
//  initial apicid  : 0
//  fpu			 : yes
//  fpu_exception	 : yes
//  cpuid level	 : 11
//  wp 			 : yes
//  flags			 : fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 cx16 xtpr pdcm pcid dca sse4_1 sse4_2 popcnt aes lahf_lm ida arat epb dtherm tpr_shadow vnmi flexpriority ept vpid
//  bogomips		 : 5333.59
//  clflush size	 : 64
//  cache_alignment : 64
//  address sizes	 : 40 bits physical, 48 bits virtual
//  power management:
...

# �鿴����CPU����
cat /proc/cpuinfo | grep "physical id" | sort | uniq
//  physical id	 : 0
//  physical id	 : 1

# �鿴ÿ������CPU��core�ĸ���(������)
cat /proc/cpuinfo | grep "cpu cores" | uniq
//  cpu cores		 : 6

# �鿴ÿ������CPU���̵߳ĸ���
cat /proc/cpuinfo | grep "siblings" | uniq
//  siblings		 : 6

# �鿴�߼�CPU�ĸ���
cat /proc/cpuinfo| grep "processor"
//  processor		 : 0
//  processor		 : 1
//  processor		 : 2
//  processor		 : 3
//  processor		 : 4
//  processor		 : 5
//  processor		 : 6
//  processor		 : 7
//  processor		 : 8
//  processor		 : 9
//  processor		 : 10
//  processor		 : 11

# �鿴CPU�ͺ�
cat /proc/cpuinfo | grep "model name" | uniq
//  model name 	 : Intel(R) Xeon(R) CPU 		  X5650  @ 2.67GHz


[2.3] free -m: �ڴ�
�鿴/proc/meminfo����ʹ��free���free������Ǵ�meminfo�л�ȡ����Ϣ��һ������£�ʹ��free���ܵõ�������֪������Ϣ:
// 			   total	   used 	  free	   shared	 buffers	 cached
//  Mem:		  32163 	 30946		 1217		   0	   1715 	 26156
//  -/+ buffers/cache: 	  3074		29089
//  Swap:		  32757 		66		32691

//���Կ������ڴ��С��32G��



[2.4] lsblk:Ӳ��
1. lsblk:blk��block����д���г����豸
//  NAME	MAJ:MIN RM	 SIZE RO TYPE MOUNTPOINT
//  sda	  8:0	 0	 1.8T  0 disk 
//  ����sda1   8:1	 0	 1.8T  0 part /
//  ����sda2   8:2	 0	   1K  0 part 
//  ����sda5   8:5	 0	  32G  0 part [SWAP]

���У�TYPE=disk��ʾӲ�̡����Կ�����Ӳ�̷�Ϊsda(��sdb)��һ��1.8T��



[2.5] df:�鿴Ӳ��ʹ�����
//  df: `/var/lib/lightdm/.gvfs'': Permission denied
//  Filesystem 	 1K-blocks		Used  Available Use% Mounted on
//  /dev/sda1		1889710024 197131016 1596564212  11% /
//  udev			  16457404		   4   16457400   1% /dev
//  tmpfs			   3293584	   12560	3281024   1% /run
//  none				  5120		   0	   5120   0% /run/lock
//  none			  16467904		 144   16467760   1% /run/shm


�����е�Sizeȫ��������Ҳ�ܴ�����Ӳ�̴�С��


[2.6] proc
xiaoj@sbd66-ProLiant-SL390s-G7: cd /proc/
xiaoj@sbd66-ProLiant-SL390s-G7:/proc$ ls
//1	 1629  1813   1977	 26712	4	 843  acpi		   key-users	  softirqs
//10	 1633  1816   2 	 26994	41	 849  asound	   kmsg 		  stat
xiaoj@sbd66-ProLiant-SL390s-G7:/proc$ cat 1/status
//Name:   init
//State:  S (sleeping)
//Tgid:   1
//Ngid:   0
//Pid:    1
//PPid:   0
//TracerPid:	   0
//Uid:    0	   0	   0	   0
//Gid:    0	   0	   0	   0
//FDSize: 64
//Groups:
//VmPeak:	  24588 kB
//VmSize:	  24588 kB
//VmLck:		  0 kB
//VmPin:		  0 kB
//VmHWM:	   2528 kB
//VmRSS:	   2264 kB
//VmData:	   1116 kB
//VmStk:		136 kB
//VmExe:		152 kB
//VmLib:	   2608 kB
//VmPTE:		 68 kB
//VmSwap:		168 kB
//Threads: 	   1
//SigQ:   0/257146
//SigPnd: 0000000000000000
//ShdPnd: 0000000000000000
//SigBlk: 0000000000000000
//SigIgn: 0000000000001000
//SigCgt: 00000001a0016623
//CapInh: 0000000000000000
//CapPrm: 0000001fffffffff
//CapEff: 0000001fffffffff
//CapBnd: 0000001fffffffff
//Seccomp: 	   0
//Cpus_allowed:   ffffffff
//Cpus_allowed_list:	   0-31
//Mems_allowed:   00000000,00000001
//Mems_allowed_list:	   0
//voluntary_ctxt_switches: 	   2458
//nonvoluntary_ctxt_switches:	   395




[2.7] 


[2.8] 


[2.9] 


[2.10] 


// 
Save:node\android\sys\Macro_Sys_Linux.h \[3.1\] 
Save:node\android\sys\Macro_Sys_Linux.h \[3.2\] 
Save:node\android\sys\Macro_Sys_Linux.h \[3.3\] 
// 
Save:node\android\sys\Macro_Sys_Linux.h \[4.1\] 
Save:node\android\sys\Macro_Sys_Linux.h \[4.2\] 
Save:node\android\sys\Macro_Sys_Linux.h \[4.3\] 
// 
Save:node\android\sys\Macro_Sys_Linux.h \[5.1\] 
Save:node\android\sys\Macro_Sys_Linux.h \[5.2\] 
Save:node\android\sys\Macro_Sys_Linux.h \[5.3\] 



[3.1] 


[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 


[3.10] 




[4.1] 




[4.2] 




[4.3] 




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 






[5.1] 




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















