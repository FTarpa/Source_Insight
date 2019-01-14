
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/
Linux下查看系统配置
CPU
[1.1] lscpu:显示cpu架构信息

复制代码
[xxx@localhost ~]$ lscpu
//	Architecture:		   x86_64
//	CPU op-mode(s): 	   32-bit, 64-bit
//	Byte Order: 		   Little Endian
//	CPU(s): 			   12　　　　　　#总处理器核心数量
//	On-line CPU(s) list:   0-11
//	Thread(s) per core:    1 　　　　　　#每个核心支持的线程数量。1表示只支持一个线程，即不支持超线程
//	Core(s) per socket:    6 　　　　　　#每个处理器的核心数量
//	Socket(s):			   2 　　　　　　#处理器数量
//	NUMA node(s):		   1
//	Vendor ID:			   GenuineIntel
//	CPU family: 		   6
//	Model:				   44
//	Stepping:			   2
//	CPU MHz:			   1600.000
//	BogoMIPS:			   5333.54
//	Virtualization: 	   VT-x
//	L1d cache:			   32K
//	L1i cache:			   32K
//	L2 cache:			   256K
//	L3 cache:			   12288K
//	NUMA node0 CPU(s):	   0-11


//复制代码
//总处理器核心数量=处理器数量*每个处理器的核心数量*每个核心支持的线程数量。
//即:CPU(s) = Socket(s) * Core(s) * Thread(s)。

 

[1.2] cat /proc/cpuinfo:查看CPU详细信息
//	processor		: 0
//	vendor_id		: GenuineIntel
//	cpu family		: 6
//	model			: 44
//	model name		: Intel(R) Xeon(R) CPU			 X5650	@ 2.67GHz
//	stepping		: 2
//	microcode		: 0x1a
//	cpu MHz 		: 1600.000
//	cache size		: 12288 KB
//	physical id 	: 0
//	siblings		: 6
//	core id 		: 0
//	cpu cores		: 6
//	apicid			: 0
//	initial apicid	: 0
//	fpu 			: yes
//	fpu_exception	: yes
//	cpuid level 	: 11
//	wp				: yes
//	flags			: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx pdpe1gb rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx smx est tm2 ssse3 cx16 xtpr pdcm pcid dca sse4_1 sse4_2 popcnt aes lahf_lm ida arat epb dtherm tpr_shadow vnmi flexpriority ept vpid
//	bogomips		: 5333.59
//	clflush size	: 64
//	cache_alignment : 64
//	address sizes	: 40 bits physical, 48 bits virtual
//	power management:
...

# 查看物理CPU个数
cat /proc/cpuinfo | grep "physical id" | sort | uniq
//	physical id 	: 0
//	physical id 	: 1

# 查看每个物理CPU中core的个数(即核数)
cat /proc/cpuinfo | grep "cpu cores" | uniq
//	cpu cores		: 6

# 查看每个物理CPU中线程的个数
cat /proc/cpuinfo | grep "siblings" | uniq
//	siblings		: 6

# 查看逻辑CPU的个数
cat /proc/cpuinfo| grep "processor"
//	processor		: 0
//	processor		: 1
//	processor		: 2
//	processor		: 3
//	processor		: 4
//	processor		: 5
//	processor		: 6
//	processor		: 7
//	processor		: 8
//	processor		: 9
//	processor		: 10
//	processor		: 11

# 查看CPU型号
cat /proc/cpuinfo | grep "model name" | uniq
//	model name		: Intel(R) Xeon(R) CPU			 X5650	@ 2.67GHz
 

[1.3] free -m: 内存
查看/proc/meminfo或者使用free命令。free命令就是从meminfo中获取的信息。一般情况下，使用free就能得到我们想知道的信息:
//	              total       used       free     shared    buffers     cached
//	Mem:         32163      30946       1217          0       1715      26156
//	-/+ buffers/cache:       3074      29089
//	Swap:        32757         66      32691

//可以看出，内存大小是32G。

 

[1.4] lsblk:硬盘
1. lsblk:blk是block的缩写。列出块设备
//	NAME   MAJ:MIN RM	SIZE RO TYPE MOUNTPOINT
//	sda 	 8:0	0	1.8T  0 disk 
//	├─sda1	 8:1	0	1.8T  0 part /
//	├─sda2	 8:2	0	  1K  0 part 
//	└─sda5	 8:5	0	 32G  0 part [SWAP]

其中，TYPE=disk表示硬盘。可以看出，硬盘分为sda(和sdb)，一共1.8T。

 

[1.5] df:查看硬盘使用情况
//	df: `/var/lib/lightdm/.gvfs'': Permission denied
//	Filesystem		1K-blocks	   Used  Available Use% Mounted on
//	/dev/sda1	   1889710024 197131016 1596564212	11% /
//	udev			 16457404		  4   16457400	 1% /dev
//	tmpfs			  3293584	  12560    3281024	 1% /run
//	none				 5120		  0 	  5120	 0% /run/lock
//	none			 16467904		144   16467760	 1% /run/shm


所有行的Size全加起来，也能大概算出硬盘大小。


[1.6] proc
xiaoj@sbd66-ProLiant-SL390s-G7: cd /proc/
xiaoj@sbd66-ProLiant-SL390s-G7:/proc$ ls
//1     1629  1813   1977   26712  4    843  acpi         key-users      softirqs
//10    1633  1816   2      26994  41   849  asound       kmsg           stat
xiaoj@sbd66-ProLiant-SL390s-G7:/proc$ cat 1/status
//Name:   init
//State:  S (sleeping)
//Tgid:   1
//Ngid:   0
//Pid:    1
//PPid:   0
//TracerPid:      0
//Uid:    0       0       0       0
//Gid:    0       0       0       0
//FDSize: 64
//Groups:
//VmPeak:    24588 kB
//VmSize:    24588 kB
//VmLck:         0 kB
//VmPin:         0 kB
//VmHWM:      2528 kB
//VmRSS:      2264 kB
//VmData:     1116 kB
//VmStk:       136 kB
//VmExe:       152 kB
//VmLib:      2608 kB
//VmPTE:        68 kB
//VmSwap:      168 kB
//Threads:        1
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
//Seccomp:        0
//Cpus_allowed:   ffffffff
//Cpus_allowed_list:      0-31
//Mems_allowed:   00000000,00000001
//Mems_allowed_list:      0
//voluntary_ctxt_switches:        2458
//nonvoluntary_ctxt_switches:     395




/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








