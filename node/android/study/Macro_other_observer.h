
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_other_observer.h \[1.1\] Observable.zip
Save:node\android\study\Macro_other_observer.h \[1.2\] 
Save:node\android\study\Macro_other_observer.h \[1.3\] 
Save:node\android\study\Macro_other_observer.h \[1.4\] 
Save:node\android\study\Macro_other_observer.h \[1.5\] 
Save:node\android\study\Macro_other_observer.h \[1.6\] 
Save:node\android\study\Macro_other_observer.h \[1.7\] 
Save:node\android\study\Macro_other_observer.h \[1.8\] 
Save:node\android\study\Macro_other_observer.h \[1.9\] 
Save:node\android\study\Macro_other_observer.h \[1.10\] 
Save:node\android\study\Macro_other_observer.h \[1.11\] 
Save:node\android\study\Macro_other_observer.h \[1.12\] 
//
Save:node\android\study\Macro_other_observer.h \[2.1\] 
Save:node\android\study\Macro_other_observer.h \[2.2\] 
Save:node\android\study\Macro_other_observer.h \[2.3\] 
Save:node\android\study\Macro_other_observer.h \[2.4\] 
Save:node\android\study\Macro_other_observer.h \[2.5\] 
Save:node\android\study\Macro_other_observer.h \[2.6\] 
Save:node\android\study\Macro_other_observer.h \[2.7\] 
Save:node\android\study\Macro_other_observer.h \[2.8\] 
Save:node\android\study\Macro_other_observer.h \[2.9\] 
Save:node\android\study\Macro_other_observer.h \[2.10\] 
Save:node\android\study\Macro_other_observer.h \[2.11\] 
Save:node\android\study\Macro_other_observer.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Observable.zip
//
Observable.zip(getBaseBalance(accountName), getTokenBalance(accountName), getBalanceInquiry(accountName), getInfo(), (o1, o2, o3, o4) -> {
    if (o1.rows != null && o1.rows.size() > 0) {
    }
    if (o4 != null) {
    }
    return balanceMap;
}).compose(RxUtils.observableAsync()).subscribe(r -> {
    if (balanceMap != null && !balanceMap.isEmpty()) {
        isHttpError = false;
        if (listenerManger != null) listenerManger.balanceFlushed();
        if (listenerManger != null) listenerManger.blockFlushed();
        return;
    }
    isHttpError = true;
}, e -> {
    isHttpError = true;
    e.printStackTrace();
});



[1.2] 




[1.3] 




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





