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

//���
//�������android ��IntentService�첽����ѧϰ��
//����
//ͨ������Դ�����Ƿ��֣���IntentService�Ĺ��캯������Ҫ�����ṩһ��String ��������HandlerThread
frameworks\base\core\java\android\app\IntentService.java IntentService(String^name)
//	public IntentService(String name) {
//	    super();
//	    mName = name;
//	}

��ô���HanderThread ��ʲôʱ�򱻴������أ� 
ͨ��Դ�뷢����onCreate�����С� 
frameworks\base\core\java\android\app\IntentService.java void^onCreate()
//	@Override 
//	public void onCreate() { 
	// TODO: It would be nice to have an option to hold a partial wakelock 
	// during processing, and to have a static startService(Context, Intent) 
	// method that would launch the service & hand off a wakelock.
//
//	    super.onCreate();
//	    HandlerThread thread = new HandlerThread("IntentService[" + mName + "]");
//	    thread.start();
//
//	    mServiceLooper = thread.getLooper();
//	    mServiceHandler = new ServiceHandler(mServiceLooper);
//	}
�����濴��

HandlerThread thread = new HandlerThread(��IntentService[�� + mName + ��]��); 
��ͨ��new HandlerThread ������ΪmName���̡߳� 
���̵߳������Ǵ���handlerMessage ������ 
//	private final class ServiceHandler extends Handler { 
//		public ServiceHandler(Looper looper) { 
//			super(looper); 
//		}
//
//	    @Override
//	    public void handleMessage(Message msg) {
//	        onHandleIntent((Intent)msg.obj);
//	        stopSelf(msg.arg1);
//	    }
//	}

frameworks\base\core\java\android\app\IntentService.java void^onStart( )
//	@Override
//	public void onStart(Intent intent, int startId) {
//	    Message msg = mServiceHandler.obtainMessage();
//	    msg.arg1 = startId;
//	    msg.obj = intent;
//	    mServiceHandler.sendMessage(msg);
//	}








/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








