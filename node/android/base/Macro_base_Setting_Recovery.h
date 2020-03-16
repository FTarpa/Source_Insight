//Ŀ¼[Num][Ca]:

/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
����·������: [s][Cs]
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

Android �ָ���������(recovery)


Android �ָ��������û�������
��1��ң����/��������ż�����������Ӧ�������ϵͳ��������ָ�����ѡ��Ҳ�ɴ����� // ������ϵͳ���õ�Ӧ�ô���Ϊ��
��2��ѡ��ָ���������֮�󣬾ͻᷢ�͹㲥��android.intent.action.MASTER_CLEAR�� ��// framework/base/core/res/AndroidManifest.xml
��3��MasterClearReceiver ����㲥 ��������android �����ش���������� ��
��4���� /cache/recovery/command �ļ���д�������ֶΣ�
��5������ϵͳ��

recovery ���뷽ʽ
��1�� ͨ����ȡ /cache �������ļ� /cache/recovery/command ���ݽ���?
��2��ͨ�������������� ��G1 ͨ��ͬʱ�� HOME �� �Ҷϼ���?
? ? ? ? ??�������ַ�ʽ���붼��Ҫ blob��֧��

����recovery ������
��1��blob �����ܴ� recovery ������װ���ں˺��ļ�ϵͳ?
��2��flash ������ cache ���� �� recovery ����?
��3����������ṩ recovery.img ��¼�� recovery ����



Android �Ĵ�������

�㲥����
frameworks/base/core/res/AndroidManifest.xml MasterClearReceiver
//	<receiver android:name="com.android.server.MasterClearReceiver"
//	    android:permission="android.permission.MASTER_CLEAR">
//	    <intent-filter
//	            android:priority="100" >
//	        <!-- For Checkin, Settings, etc.: action=MASTER_CLEAR -->
//	        <action android:name="android.intent.action.MASTER_CLEAR" />
//	 
//	        <!-- MCS always uses REMOTE_INTENT: category=MASTER_CLEAR -->
//	        <action android:name="com.google.android.c2dm.intent.RECEIVE" />
//	        <category android:name="android.intent.category.MASTER_CLEAR" />
//	    </intent-filter>
//	</receiver>

MasterClearReceiver���չ㲥android.intent.action.MASTER_CLEAR������һ���س���һ�´���
frameworks\base\services\java\com\android\server\MasterClearReceiver.java rebootWipeUserData
//	Thread thr = new Thread("Reboot") {
//	    @Override
//	    public void run() {
//	        try {
//	            RecoverySystem.rebootWipeUserData(context, shutdown, reason);
//	            Log.wtf(TAG, "Still running after master clear?!");
//	        } catch (IOException e) {
//	            Slog.e(TAG, "Can't perform master clear/factory reset", e);
//	        } catch (SecurityException e) {
//	            Slog.e(TAG, "Can't perform master clear/factory reset", e);
//	        }
//	    }
//	};
//	thr.start();
RecoverySystem?�����������������û����ݵĲ���

frameworks\base\core\java\android\os\RecoverySystem.java rebootWipeUserData
//	public static void rebootWipeUserData(Context context, boolean shutdown, String reason)
//	        throws IOException {
//	    UserManager um = (UserManager) context.getSystemService(Context.USER_SERVICE);
//	    if (um.hasUserRestriction(UserManager.DISALLOW_FACTORY_RESET)) {
//	        throw new SecurityException("Wiping data is not allowed for this user.");
//	    }
//	    final ConditionVariable condition = new ConditionVariable();
//	 
//	    Intent intent = new Intent("android.intent.action.MASTER_CLEAR_NOTIFICATION");
//	    intent.addFlags(Intent.FLAG_RECEIVER_FOREGROUND);
//	    context.sendOrderedBroadcastAsUser(intent, UserHandle.OWNER,
//	            android.Manifest.permission.MASTER_CLEAR,
//	            new BroadcastReceiver() {
//	                @Override
//	                public void onReceive(Context context, Intent intent) {
//	                    condition.open();
//	                }
//	            }, null, 0, null, null);
//	 
	    // Block until the ordered broadcast has completed.
//	    condition.block();
//	 
//	    String shutdownArg = null;
//	    if (shutdown) {
//	        shutdownArg = "--shutdown_after";
//	    }
//	 
//	    String reasonArg = null;
//	    if (!TextUtils.isEmpty(reason)) {
//	        reasonArg = "--reason=" + sanitizeArg(reason);
//	    }
//	 
//	    final String localeArg = "--locale=" + Locale.getDefault().toString();
//	    bootCommand(context, shutdownArg, "--wipe_data", reasonArg, localeArg);
//	}
���ǿ���ע�⵽������bootCommand��������ʱ����װ���� --wipe_data , --locale , ��Щ�������ǿ����ڲ鿴recovery log ( /cache/recovery/ *.log )��Ϣʱ����
//��Command: "/sbin/recovery" "--wipe_data" "--locale=zh_CN" ?,��ʵ��Ӧ��Ҳ����bootCommand ִ�е�����

frameworks\base\core\java\android\os\RecoverySystem.java void^bootCommand
//	private static void bootCommand(Context context, String... args) throws IOException {
//	    RECOVERY_DIR.mkdirs();  // In case we need it
//	    COMMAND_FILE.delete();  // In case it's not writable
//	    LOG_FILE.delete();
//	 
//	    FileWriter command = new FileWriter(COMMAND_FILE);
//	    try {
//	        for (String arg : args) {
//	            if (!TextUtils.isEmpty(arg)) {
	                // MStar Android Patch Begin
//	                String cmd = arg;
//	                String label = null;
//	                String uuid = null;
//	                if (cmd.startsWith("--update_package")) {
//	                    cmd = arg.substring(17, 23);
//	                    if (cmd.equals("/cache")) {
//	                        command.write("--uuid=mstar-cache");
//	                        command.write("\n");
//	                        command.write("--label=mstar-cache");
//	                        command.write("\n");
//	                    } else {
//	                        cmd = arg.substring(17, 28);
//	                        if (cmd.equals("/mnt/usb/sd")) {
//	                            cmd = arg.substring(17, 30);
//	                            uuid = "--uuid=" + getVolumeUUID(cmd).toString();
//	                            label = "--label=" + getVolumeLabel(cmd).toString();
//	                            command.write(uuid);
//	                            command.write("\n");
//	                            command.write(label);
//	                            command.write("\n");
//	                        } else {
//	                            if (cmd.equals("/mnt/sdcard")) {
//	                                uuid = "--uuid=" + getVolumeUUID(cmd).toString();
//	                                label = "--label=" + getVolumeLabel(cmd).toString();
//	                                command.write(uuid);
//	                                command.write("\n");
//	                                command.write(label);
//	                                command.write("\n");
//	                            } else {
//	                                cmd = arg.substring(17, 32);
//	                                if (cmd.equals("/mnt/usb/mmcblk")) {
//	                                    cmd = arg.substring(17, 35);
//	                                    uuid = "--uuid=" + getVolumeUUID(cmd).toString();
//	                                    label = "--label=" + getVolumeLabel(cmd).toString();
//	                                    command.write(uuid);
//	                                    command.write("\n");
//	                                    command.write(label);
//	                                    command.write("\n");
//	                                }
//	                            }
//	                        }
//	                    }
//	                }
	                // MStar Android Patch End
//	                command.write(arg);
//	                command.write("\n");
//	            }
//	        }
//	    } finally {
//	        command.close();
//	    }
//	 
	    // Having written the command file, go ahead and reboot
//	    PowerManager pm = (PowerManager) context.getSystemService(Context.POWER_SERVICE);
//	    pm.reboot(PowerManager.REBOOT_RECOVERY);
//	 
//	    throw new IOException("Reboot failed (no permissions?)");
//	}
�����ϴ��������bootCommand ��Ҫ����������������recovery���˴����Կ���COMMAND_FILE �����ļ� ?/cache/recovery/command  , �������װ�Ĳ�����Ϣ
д����ļ���������֮���ȡ���ļ�ʱ����recoveryģʽ���������ǿ���д���ļ�֮�󣬵���PowerManager ��reboot��ע�����PowerManager.REBOOT_RECOVERY
// Having written the command file, go ahead and reboot
PowerManager pm = (PowerManager) context.getSystemService(Context.POWER_SERVICE);
pm.reboot(PowerManager.REBOOT_RECOVERY);
 
frameworks\base\core\java\android\os\PowerManager.java void^reboot
//	public void reboot(String reason) {
//	    try {
//	        mService.reboot(false, reason, true);
//	    } catch (RemoteException e) {
//	    }
//	}
����ֽ��� PowerManagerService ��reboot����

frameworks\base\services\java\com\android\server\power\PowerManagerService.java void^reboot
//	@Override // Binder call
//	public void reboot(boolean confirm, String reason, boolean wait) {
//	    mContext.enforceCallingOrSelfPermission(android.Manifest.permission.REBOOT, null);
//	    if (PowerManager.REBOOT_RECOVERY.equals(reason)) {
//	        mContext.enforceCallingOrSelfPermission(android.Manifest.permission.RECOVERY, null);
//	    }
//	 
//	    final long ident = Binder.clearCallingIdentity();
//	    try {
//	        shutdownOrRebootInternal(false, confirm, reason, wait);
//	    } finally {
//	        Binder.restoreCallingIdentity(ident);
//	    }
//	}

���Ž���shutdownOrRebootInternal
frameworks\base\services\java\com\android\server\power\PowerManagerService.java void^shutdownOrRebootInternal
//	private void shutdownOrRebootInternal(final boolean shutdown, final boolean confirm,
//	        final String reason, boolean wait) {
//	    if (mHandler == null || !mSystemReady) {
//	        throw new IllegalStateException("Too early to call shutdown() or reboot()");
//	    }
//	 
//	    Runnable runnable = new Runnable() {
//	        @Override
//	        public void run() {
//	            synchronized (this) {
//	                if (shutdown) {
//	                    ShutdownThread.shutdown(mContext, confirm);
//	                } else {
//	                    ShutdownThread.reboot(mContext, reason, confirm);
//	                }
//	            }
//	        }
//	    };
//	 
	    // ShutdownThread must run on a looper capable of displaying the UI.
//	    Message msg = Message.obtain(mHandler, runnable);
//	    msg.setAsynchronous(true);
//	    mHandler.sendMessage(msg);
//	 
	    // PowerManager.reboot() is documented not to return so just wait for the inevitable.
//	    if (wait) {
//	        synchronized (runnable) {
//	            while (true) {
//	                try {
//	                    runnable.wait();
//	                } catch (InterruptedException e) {
//	                }
//	            }
//	        }
//	    }
//	}
ShutdownThread��������������
	
frameworks\base\services\java\com\android\server\power\ShutdownThread.java void^reboot
//	public static void reboot(final Context context, String reason, boolean confirm) {
//	    mReboot = true;
//	    mRebootSafeMode = false;
//	    mRebootReason = reason;
//	    shutdownInner(context, confirm);
//	}
 
//	static void shutdownInner(final Context context, boolean confirm) {
	    // ensure that only one thread is trying to power down.
	    // any additional calls are just returned
//	    synchronized (sIsStartedGuard) {
//	        if (sIsStarted) {
//	            Log.d(TAG, "Request to shutdown already running, returning.");
//	            return;
//	        }
//	    }
//	 
//	    final int longPressBehavior = context.getResources().getInteger(
//	                    com.android.internal.R.integer.config_longPressOnPowerBehavior);
//	    final int resourceId = mRebootSafeMode
//	            ? com.android.internal.R.string.reboot_safemode_confirm
//	            : (longPressBehavior == 2
//	                    ? com.android.internal.R.string.shutdown_confirm_question
//	                    : com.android.internal.R.string.shutdown_confirm);
//	 
//	    Log.d(TAG, "Notifying thread to start shutdown longPressBehavior=" + longPressBehavior);
//	 
//	    if (confirm) {
//	        final CloseDialogReceiver closer = new CloseDialogReceiver(context);
//	        if (sConfirmDialog != null) {
//	            sConfirmDialog.dismiss();
//	        }
//	        sConfirmDialog = new AlertDialog.Builder(context)
//	                .setTitle(mRebootSafeMode
//	                        ? com.android.internal.R.string.reboot_safemode_title
//	                        : com.android.internal.R.string.power_off)
//	                .setMessage(resourceId)
//	                .setPositiveButton(com.android.internal.R.string.yes, new DialogInterface.OnClickListener() {
//	                    public void onClick(DialogInterface dialog, int which) {
//	                        beginShutdownSequence(context);
//	                    }
//	                })
//	                .setNegativeButton(com.android.internal.R.string.no, null)
//	                .create();
//	        closer.dialog = sConfirmDialog;
//	        sConfirmDialog.setOnDismissListener(closer);
//	        sConfirmDialog.getWindow().setType(WindowManager.LayoutParams.TYPE_KEYGUARD_DIALOG);
//	        sConfirmDialog.show();
//	    } else {
//	        beginShutdownSequence(context);
//	    }
//	}
beginShutdownSequence ������Ҫ�Ĺػ����̣� ��������ShutdownThread.run() , ���͹���㲥���رպ��ķ���������rebootOrShutdown������


recovery��������
����recovery�м���;����
��1������recoveryǰ��дmisc����������ʱ���ֱ仯��ֱ�ӽ���recoveryģʽ��
��2��д�ļ� /cache/recovery/command �ļ�������ʱ��ȥrecoveryģʽ�� // ����ģʽ��δ�ҵ�����recovery�ĵط���ֻ��������recovery���п�����
? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ?// ȡ/cache/recovery/command �ļ�����������������

MISC��������
Bootloader Control Block(BCB) ���recovery bootloader message���ṹ���£�
struct bootloader_message {
? ? char command[32];
? ? char status[32];
? ? char recovery[768];


? ? // The 'recovery' field used to be 1024 bytes. ?It has only ever
? ? // been used to store the recovery command line, so 768 bytes
? ? // should be plenty. ?We carve off the last 256 bytes to store the
? ? // stage string (for multistage packages) and possible future
? ? // expansion.
? ? char stage[32];
? ? char reserved[224];
};
command��������������ֵ
��boot-recovery������ʾrecovery���ڽ��л���ָʾbootloaderӦ�ý���recovery mode
��update--hboot/radio��:��־bootloader����fireware

recovery����
��recovery\n
<recovery command>\n
<recovery command>\n������ recovery commandΪCACHE:/recovery/command����


Recovery Case?
Factory reset���ָ��������ã�


1. �û�ѡ�񡰻ָ��������á�
2. ����ϵͳ����--wipe_data������д�� /cache/recovery/command
3. ϵͳ������������recoveryģʽ (sbin/recovery ?or /system/bin/recovery)
4. recovery get_args() ����boot-recovery���͡�--wipe_data��д��BCB
5. erase_root ��ʽ��DATA ����
6. erase_root ��ʽ��CACHE ����
7. finish_recovery ����BCB����
8. ����ϵͳ

OTA INSTALL (OTA����)
1. ����ϵͳϵ��OTA����/cache/some-filename.zip
2. ����ϵͳд��recovery���� ��--update_package=CACHE:some-filename.zip��
3. ����ϵͳ������recoveryģʽ
4. get_args()����boot-recovery���͡�--wipe_packkage=...��д��BCB
5. install_package ������
6. finish_recovery() ����BCB
7. **�����װ��ʧ��**prompt_and_wait()�ȴ��û�������ѡ��ALT+S����ALT+W������ظ���������
8. main() �������maybe_install_firmware_update()
? ? 1.������ﺬ��hboot/radio��fireware����������򷵻�
? ? 2.��"boot-recovery"��"--wipe_cache"д��BCB
? ? 3.��fireware imageд��cache����
? ? 4.��"update-readio/hboot"�͡�--wipe_date��д��BCB
? ? 5.����ϵͳ
? ? 6.bootloader�������fireware
? ? 7.bootloader��"boot-recovery"д��BCB
? ? 8.erase_root����CACHE����
? ? 9.���BCB
9. main ����reboot����ϵͳ




Recovery����λ��:bootable/recovery/ �����ļ�recovery.cpp


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/
�ָ������������
���������еĲ�������ҵ����ָ�������������� 
com.android.settings.MasterClear ������С� 
MasterClear.java �������ʵ��һ��Fragement��

public class MasterClear extends InstrumentedFragment {
    private static final String TAG = "MasterClear";

    private static final int KEYGUARD_REQUEST = 55;

    static final String ERASE_EXTERNAL_EXTRA = "erase_sd";

    private View mContentView;
    private Button mInitiateButton;
    private View mExternalStorageContainer;
    private CheckBox mExternalStorage;
1
2
3
4
5
6
7
8
9
10
11
12
����ָ�����������ʾ����

    private void showFinalConfirmation() {
        Bundle args = new Bundle();
        args.putBoolean(ERASE_EXTERNAL_EXTRA, mExternalStorage.isChecked());
        ((SettingsActivity) getActivity()).startPreferencePanel(MasterClearConfirm.class.getName(),
                args, R.string.master_clear_confirm_title, null, null, 0);
    }
1
2
3
4
5
6
7
MasterClearConfirm.java
    private Button.OnClickListener mFinalClickListener = new Button.OnClickListener() {

        public void onClick(View v) {
            if (Utils.isMonkeyRunning()) {
                return;
            }

            final PersistentDataBlockManager pdbManager = (PersistentDataBlockManager)
                    getActivity().getSystemService(Context.PERSISTENT_DATA_BLOCK_SERVICE);

            if (pdbManager != null && !pdbManager.getOemUnlockEnabled() &&
                    Settings.Global.getInt(getActivity().getContentResolver(),
                            Settings.Global.DEVICE_PROVISIONED, 0) != 0) {
                // if OEM unlock is enabled, this will be wiped during FR process. If disabled, it
                // will be wiped here, unless the device is still being provisioned, in which case
                // the persistent data block will be preserved.
                new AsyncTask<Void, Void, Void>() {
                    int mOldOrientation;
                    ProgressDialog mProgressDialog;

                    @Override
                    protected Void doInBackground(Void... params) {
                        pdbManager.wipe();
                        return null;
                    }

                    @Override
                    protected void onPostExecute(Void aVoid) {
                        mProgressDialog.hide();
                        getActivity().setRequestedOrientation(mOldOrientation);
                        doMasterClear();
                    }

                    @Override
                    protected void onPreExecute() {
                        mProgressDialog = getProgressDialog();
                        mProgressDialog.show();

                        // need to prevent orientation changes as we're about to go into
                        // a long IO request, so we won't be able to access inflate resources on flash
                        mOldOrientation = getActivity().getRequestedOrientation();
                        getActivity().setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_LOCKED);
                    }
                }.execute();
            } else {
                doMasterClear();
            }
        }
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
ͨ��PersistentDataBlockManager pdbManager���û�������ղ�����

PersistentDataBlockManager.java
    private IPersistentDataBlockService sService;
    /**
     * Zeroes the previously written block in its entirety. Calling this method
     * will erase all data written to the persistent data partition.
     * It will also prevent any further {@link #write} operation until reboot,
     * in order to prevent a potential race condition. See b/30352311.
     */
    public void wipe() {
        try {
            sService.wipe();
        } catch (RemoteException e) {
            onError("wiping persistent partition");
        }
    }
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
ͨ��IPersistentDataBlockService �����ҵ�PersistentDataBlockService�࣬����Ƕ�wipe�ľ���ʵ�ֽӿ�

 private final IBinder mService = new IPersistentDataBlockService.Stub() {
        @Override
        public int write(byte[] data) throws RemoteException {
            enforceUid(Binder.getCallingUid());

            // Need to ensure we don't write over the last byte
            long maxBlockSize = getBlockDeviceSize() - HEADER_SIZE - 1;
            if (data.length > maxBlockSize) {
                // partition is ~500k so shouldn't be a problem to downcast
                return (int) -maxBlockSize;
            }

            DataOutputStream outputStream;
            try {
                outputStream = new DataOutputStream(new FileOutputStream(new File(mDataBlockFile)));
            } catch (FileNotFoundException e) {
                Slog.e(TAG, "partition not available?", e);
                return -1;
            }

            ByteBuffer headerAndData = ByteBuffer.allocate(data.length + HEADER_SIZE);
            headerAndData.putInt(PARTITION_TYPE_MARKER);
            headerAndData.putInt(data.length);
            headerAndData.put(data);

            synchronized (mLock) {
                if (!mIsWritable) {
                    IoUtils.closeQuietly(outputStream);
                    return -1;
                }

                try {
                    byte[] checksum = new byte[DIGEST_SIZE_BYTES];
                    outputStream.write(checksum, 0, DIGEST_SIZE_BYTES);
                    outputStream.write(headerAndData.array());
                    outputStream.flush();
                } catch (IOException e) {
                    Slog.e(TAG, "failed writing to the persistent data block", e);
                    return -1;
                } finally {
                    IoUtils.closeQuietly(outputStream);
                }

                if (computeAndWriteDigestLocked()) {
                    return data.length;
                } else {
                    return -1;
                }
            }
        }

        @Override
        public byte[] read() {
            enforceUid(Binder.getCallingUid());
            if (!enforceChecksumValidity()) {
                return new byte[0];
            }

            DataInputStream inputStream;
            try {
                inputStream = new DataInputStream(new FileInputStream(new File(mDataBlockFile)));
            } catch (FileNotFoundException e) {
                Slog.e(TAG, "partition not available?", e);
                return null;
            }

            try {
                synchronized (mLock) {
                    int totalDataSize = getTotalDataSizeLocked(inputStream);

                    if (totalDataSize == 0) {
                        return new byte[0];
                    }

                    byte[] data = new byte[totalDataSize];
                    int read = inputStream.read(data, 0, totalDataSize);
                    if (read < totalDataSize) {
                        // something went wrong, not returning potentially corrupt data
                        Slog.e(TAG, "failed to read entire data block. bytes read: " +
                                read + "/" + totalDataSize);
                        return null;
                    }
                    return data;
                }
            } catch (IOException e) {
                Slog.e(TAG, "failed to read data", e);
                return null;
            } finally {
                try {
                    inputStream.close();
                } catch (IOException e) {
                    Slog.e(TAG, "failed to close OutputStream");
                }
            }
        }

        @Override
        public void wipe() {
            enforceOemUnlockPermission();

            synchronized (mLock) {
                int ret = nativeWipe(mDataBlockFile);

                if (ret < 0) {
                    Slog.e(TAG, "failed to wipe persistent partition");
                } else {
                    mIsWritable = false;
                    Slog.i(TAG, "persistent partition now wiped and unwritable");
                }
            }
        }

        @Override
        public void setOemUnlockEnabled(boolean enabled) {
            // do not allow monkey to flip the flag
            if (ActivityManager.isUserAMonkey()) {
                return;
            }
            enforceOemUnlockPermission();
            enforceIsOwner();

            synchronized (mLock) {
                doSetOemUnlockEnabledLocked(enabled);
                computeAndWriteDigestLocked();
            }
        }

        @Override
        public boolean getOemUnlockEnabled() {
            enforceOemUnlockPermission();
            return doGetOemUnlockEnabled();
        }

        @Override
        public int getDataBlockSize() {
            enforcePersistentDataBlockAccess();

            DataInputStream inputStream;
            try {
                inputStream = new DataInputStream(new FileInputStream(new File(mDataBlockFile)));
            } catch (FileNotFoundException e) {
                Slog.e(TAG, "partition not available");
                return 0;
            }

            try {
                synchronized (mLock) {
                    return getTotalDataSizeLocked(inputStream);
                }
            } catch (IOException e) {
                Slog.e(TAG, "error reading data block size");
                return 0;
            } finally {
                IoUtils.closeQuietly(inputStream);
            }
        }

        private void enforcePersistentDataBlockAccess() {
            if (mContext.checkCallingPermission(Manifest.permission.ACCESS_PDB_STATE)
                    != PackageManager.PERMISSION_GRANTED) {
                enforceUid(Binder.getCallingUid());
            }
        }

        @Override
        public long getMaximumDataBlockSize() {
            long actualSize = getBlockDeviceSize() - HEADER_SIZE - 1;
            return actualSize <= MAX_DATA_BLOCK_SIZE ? actualSize : MAX_DATA_BLOCK_SIZE;
        }
    };
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
�����ҵ� int ret = nativeWipe(mDataBlockFile)�����沽���ǵ���cpp�ķ����ˡ� 
frameworks/base/services/core/jni/com_android_server_PersistentDataBlockService.cpp

    int wipe_block_device(int fd)
    {
        uint64_t range[2];
        int ret;
        uint64_t len = get_block_device_size(fd);

        range[0] = 0;
        range[1] = len;

        if (range[1] == 0)
            return 0;

        ret = ioctl(fd, BLKSECDISCARD, &range);
        if (ret < 0) {
            ALOGE("Something went wrong secure discarding block: %s\n", strerror(errno));
            range[0] = 0;
            range[1] = len;
            ret = ioctl(fd, BLKDISCARD, &range);
            if (ret < 0) {
                ALOGE("Discard failed: %s\n", strerror(errno));
                return -1;
            } else {
                ALOGE("Wipe via secure discard failed, used non-secure discard instead\n");
                return 0;
            }

        }

        return ret;
    }

    static jlong com_android_server_PersistentDataBlockService_getBlockDeviceSize(JNIEnv *env, jclass, jstring jpath)
    {
        const char *path = env->GetStringUTFChars(jpath, 0);
        int fd = open(path, O_RDONLY);

        if (fd < 0)
            return 0;

        return get_block_device_size(fd);
    }

    static int com_android_server_PersistentDataBlockService_wipe(JNIEnv *env, jclass, jstring jpath) {
        const char *path = env->GetStringUTFChars(jpath, 0);
        int fd = open(path, O_WRONLY);

        if (fd < 0)
            return 0;

        return wipe_block_device(fd);
    }
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
�������֮��Ĵ�������
��MasterClearConfirm���У�ϵͳͨ��AsyncTask ����������ݺ󣬻�doMasterClear������


    private void doMasterClear() {
        Intent intent = new Intent(Intent.ACTION_MASTER_CLEAR);
        intent.addFlags(Intent.FLAG_RECEIVER_FOREGROUND);
        intent.putExtra(Intent.EXTRA_REASON, "MasterClearConfirm");
        intent.putExtra(Intent.EXTRA_WIPE_EXTERNAL_STORAGE, mEraseSdCard);
        getActivity().sendBroadcast(intent);
        // Intent handling is asynchronous -- assume it will happen soon.
    }
1
2
3
4
5
6
7
8
9
10
����ϵͳ����Intent.ACTION_MASTER_CLEAR �㲥�� 
frameworks/base/services/core/java/com/android/server/MasterClearReceiver.java 
��������㲥����


public class MasterClearReceiver extends BroadcastReceiver {
    private static final String TAG = "MasterClear";

    @Override
    public void onReceive(final Context context, final Intent intent) {
        if (intent.getAction().equals(Intent.ACTION_REMOTE_INTENT)) {
            if (!"google.com".equals(intent.getStringExtra("from"))) {
                Slog.w(TAG, "Ignoring master clear request -- not from trusted server.");
                return;
            }
        }

        final boolean shutdown = intent.getBooleanExtra("shutdown", false);
        final String reason = intent.getStringExtra(Intent.EXTRA_REASON);
        final boolean wipeExternalStorage = intent.getBooleanExtra(
                Intent.EXTRA_WIPE_EXTERNAL_STORAGE, false);

        Slog.w(TAG, "!!! FACTORY RESET !!!");
        // The reboot call is blocking, so we need to do it on another thread.
        Thread thr = new Thread("Reboot") {
            @Override
            public void run() {
                try {
                    RecoverySystem.rebootWipeUserData(context, shutdown, reason);
                    Log.wtf(TAG, "Still running after master clear?!");
                } catch (IOException e) {
                    Slog.e(TAG, "Can't perform master clear/factory reset", e);
                } catch (SecurityException e) {
                    Slog.e(TAG, "Can't perform master clear/factory reset", e);
                }
            }
        };

        if (wipeExternalStorage) {
            // thr will be started at the end of this task.
            new WipeAdoptableDisksTask(context, thr).execute();
        } else {
            thr.start();
        }
    }

    private class WipeAdoptableDisksTask extends AsyncTask<Void, Void, Void> {
        private final Thread mChainedTask;
        private final Context mContext;
        private final ProgressDialog mProgressDialog;

        public WipeAdoptableDisksTask(Context context, Thread chainedTask) {
            mContext = context;
            mChainedTask = chainedTask;
            mProgressDialog = new ProgressDialog(context);
        }

        @Override
        protected void onPreExecute() {
            mProgressDialog.setIndeterminate(true);
            mProgressDialog.getWindow().setType(WindowManager.LayoutParams.TYPE_SYSTEM_ALERT);
            mProgressDialog.setMessage(mContext.getText(R.string.progress_erasing));
            mProgressDialog.show();
        }

        @Override
        protected Void doInBackground(Void... params) {
            Slog.w(TAG, "Wiping adoptable disks");
            StorageManager sm = (StorageManager) mContext.getSystemService(
                    Context.STORAGE_SERVICE);
            sm.wipeAdoptableDisks();
            return null;
        }

        @Override
        protected void onPostExecute(Void result) {
            mProgressDialog.dismiss();
            mChainedTask.start();
        }

    }
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
���������reboot�����Ѿ�ʮ����Ҫ��ʽ��SD����������
--------------------- 
���ߣ����󴸿��� 
��Դ��CSDN 
ԭ�ģ�https://blog.csdn.net/wangjicong_215/article/details/78094801 
��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�





/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








