//Ŀ¼[Num][Ca]:

/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
����·������: [s][Cs]
basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/
ͨ����BatteryService.java�������֡� 
��ϵͳ���������仯ʱ��BatteryServiceͨ��sendIntentLocked ����֪�û����������仯��
frameworks\base\services\java\com\android\server\BatteryService.java void^sendIntentLocked()
//    private void sendIntentLocked() {
        //  Pack up the values and broadcast them to everyone
//        final Intent intent = new Intent(Intent.ACTION_BATTERY_CHANGED);
//        intent.addFlags(Intent.FLAG_RECEIVER_REGISTERED_ONLY
//                | Intent.FLAG_RECEIVER_REPLACE_PENDING);
//
//        int icon = getIconLocked(mBatteryProps.batteryLevel);
//
//        intent.putExtra(BatteryManager.EXTRA_STATUS, mBatteryProps.batteryStatus);
//
//        mHandler.post(new Runnable() {
//            @Override
//            public void run() {
//                ActivityManagerNative.broadcastStickyIntent(intent, null, UserHandle.USER_ALL);
//            }
//        });
//    }
����ϵͳ��������㲥������ʱ���ڷ���Ϊʲô����ͨ��

        IntentFilter intentFilter = new IntentFilter(Intent.ACTION_BATTERY_CHANGED);
        mBatteryLowReceiver = new BatteryLowReceiver();
        this.registerReceiver(mBatteryLowReceiver,intentFilter);

���������õ�ϵͳ��ǰ�����ء� 
��Ҫ����Ϊϵͳ���͵���פ���㲥��

        mHandler.post(new Runnable() {
            @Override
            public void run() {
                ActivityManagerNative.broadcastStickyIntent(intent, null, UserHandle.USER_ALL);
            }
        });

���û�ע��ACTION_BATTERY_CHANGED ʱ���ͻ��յ����һ�θı��intent�㲥��






/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








