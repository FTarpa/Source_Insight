

//私钥：
Private key: 5JxSJntjiLKSLNTjk5JtJqGdN1adV633Zynq2XybmAiXwztfwTN


//公钥：
Public key: EOS8FfDtyMZZKrJyoAah3W1rVrdHTEf9CmEGZZtpoSSncHXEKkWER




// 账号名称
http://119.28.128.52:8888/v1/history/get_key_accounts
{
	"public_key": "EOS7gGHW26GzRuH3KfUDh3fGE1ENhsKEzjQdrWr7L9V4kGgrbrRAz"
}
{
	"public_key": "EOS8FfDtyMZZKrJyoAah3W1rVrdHTEf9CmEGZZtpoSSncHXEKkWER"
}


// 余额
http://119.28.128.52:8888/v1/chain/get_table_rows
{
  "scope": "eosio",
  "code": "eosio",
  "table": "accounts",
  "table_key": "xrp.cash",
  "limit": 20,
  "json": true
}
{
  "scope": "eosio",
  "code": "eosio",
  "table": "accounts",
  "table_key": "dnc.test111",
  "limit": 20,
  "json": true
}


// ??? Token
http://119.28.128.52:8888/v1/chain/get_table_rows
{ 
	"scope": "eosio", 
	"code": "eosio", 
	"table": "bps", 
	"key": "xrp.cash",
	"json": true, 
	"limit": 1000 
}


// ??? Inquiry
http://119.28.128.52:8888/v1/chain/api/api_app.aspx?action=BalanceInquiry
http://119.28.128.52:8888/api/api_app.aspx?action=BalanceInquiry
{
	"name": "xrp.cash"
}


// ??? Info
http://119.28.128.52:8888/v1/chain/get_info



// 1) Be支付, 返回交易信息
EosTransferManger.getInstance().pay(pri, 
						inputDialog.action,    //"eosio"
						inputDialog.remark,    //"exchange BE"
						inputDialog.to,        //"exchange"  地址2
						inputDialog.quantity,  //"... DNC"  金额
						SPUtils.getInstance().getString(SpConst.WALLET_NAME),   //地址1
			)

// Be支付返回 -> 兑换BE成功
http://shop.rmb1.net:8080/api/api_app.aspx?action=ExchargeBE
          @Field("suaAmount")     String suaAmount,  //金额
          @Field("remark")        String remark,
//
D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\HttpApi.java  exchargeBE



// 2) 转帐
EosTransferManger.getInstance().pay(pri, 
						inputDialog.action,     //"eosio" 或 "eosio.token"
						inputDialog.remark,     //"..."
						inputDialog.to,         //"..."  地址2
						inputDialog.quantity,   //"... DNC"  金额
						SPUtils.getInstance().getString(SpConst.WALLET_NAME),    //地址1
			)

// 转帐返回 -> 无返回
http://shop.rmb1.net:8080/api/api_app.aspx?action=TradePurse
          @Field("name")     String name,       //地址
          @Field("balance")  String balance,    //余额
          @Field("currency") String currency,   // DNC
          @Field("payer")    String payer,      //地址2
          @Field("remitter") String remitter,   //汇款人
          @Field("money")    String money,      //金额(无DNC)
          @Field("transactionId") String transactionId,    //id+time
          @Field("remark")   String remar);     //remark
//
D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\HttpApi.java  TradePurse




// (1)转帐过程 -> 序列化数据
http://119.28.128.52:8888/v1/chain/abi_json_to_bin
{"action":"transfer","code":"eosio","args":{"from":"dnc.test111","memo":"exchange BE","quantity":"0.0100 EOS","to":"z2w41h5v534"}}
// 
// action: "eosio" 或 "eosio.token"
// args: 转帐信息
{
    "action":"transfer",
    "code":"eosio",
    "args":{
        "from":"dnc.test111",
        "memo":"exchange BE",
        "quantity":"0.0100 EOS",
        "to":"z2w41h5v534"
    }
}
{
    "action":"transfer",
    "code":"eosio",
    "args":{
        "from":"dnc.test111",
        "memo":"exchange BE",
        "quantity":"0.0100 EOS",
        "to":"exchange"
    }
}

D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\EosApi.java  json2bean


// (2)转帐过程 -> 获取区块链状态
http://119.28.128.52:8888/v1/chain/get_info
          无参数

D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\EosApi.java  getChainInfo


// (3)转帐过程 -> 最新区块信息
http://119.28.128.52:8888/v1/chain/get_block
// 区块链状态 -> head
//   返回：action + 最新区块信息 + 转帐信息 -> 交易请求
{
  "block_num_or_id": "2587775"
}
{
  "block_num_or_id": "2588081"
}

D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\EosApi.java  getChainBlock


// (4)转帐过程 -> 交易费用
http://119.28.128.52:8888/v1/chain/get_required_fee
// body: 交易请求
{
	"transaction": {
		"actions": [{
			"account": "eosio",
			"authorization": [{
				"actor": "",
				"permission": "active"
			}],
			"data": "00420819ab0cd04c00c828bbb440b8f8640000000000000004454f53000000000b65786368616e6765204245",
			"name": "transfer"
		}],
		"context_free_actions": [],
		"ctxFreeData": [],
		"delay_sec": 0,
		"expiration": "2020-07-25T07:47:54",
		"fee": null,
		"max_cpu_usage_ms": 0,
		"max_net_usage_words": 0,
		"ref_block_num": 2588081,
		"ref_block_prefix": 3372134063,
		"signatures": [],
		"transaction_extensions": []
	}
}
		  
D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\EosApi.java  getRequiredFee



// (5)转帐过程 -> 发起交易
http://119.28.128.52:8888/v1/chain/push_transaction
// body: 交易请求 + 手续费 + 签名
{
	"compression": "none",
	"signatures": ["SIG_K1_KVbrHtWB1dayTzdvbc2dwXqTS1zpzM9MnLJfEZVVtiKvs7seXdy96F2EuUk3FSZHVUYrgBPaHaKRxnakD3PjtkcMA58tew"],
	"transaction": {
		"actions": [{
			"account": "eosio",
			"authorization": [{
				"actor": "",
				"permission": "active"
			}],
			"data": "00420819ab0cd04c00c828bbb440b8f8640000000000000004454f53000000000b65786368616e6765204245",
			"name": "transfer"
		}],
		"context_free_actions": [],
		"ctxFreeData": [],
		"delay_sec": 0,
		"expiration": "2020-07-25T07:47:54",
		"fee": "0.0100 EOS",
		"max_cpu_usage_ms": 0,
		"max_net_usage_words": 0,
		"ref_block_num": 2588081,
		"ref_block_prefix": 3372134063,
		"signatures": ["SIG_K1_KVbrHtWB1dayTzdvbc2dwXqTS1zpzM9MnLJfEZVVtiKvs7seXdy96F2EuUk3FSZHVUYrgBPaHaKRxnakD3PjtkcMA58tew"],
		"transaction_extensions": []
	}
}

D:\project\Android\apk_work\DNC_QB\app\src\main\java\com\dnc\loc\data\http\EosApi.java  pushTransaction




//
Process_1: {"binargs":"00420819ab0cd04c0000008a4dd35057640000000000000004454f53000000000b65786368616e6765204245"}
Process_2: ChainInfo
{
	server_version = 'b254a7bf', 
	chain_id = 'd94a9a771835e31b38c4f15bb70b307fb75420591a28a33446388c2b3dc7fd2b', 
	head_block_num = 2588081, last_irreversible_block_num = 2588050, 
	last_irreversible_block_id = '00277d922e7d3a365589cdf06cde482922250af5b5515e09364fffa2d0f9071f', 
	head_block_id = '00277db1ceb6aad0afaefec822a1d41af11df9defb96789ce914b0ae2ca625ed', 
	head_block_time = '2020-07-25T06:57:54.000', 
	head_block_producer = 'paris', 
	virtual_block_cpu_limit = 1000000000, 
	virtual_block_net_limit = 1048576000, 
	block_cpu_limit = 999900, 
	block_net_limit = 1048576, 
	server_version_string = 'force-v1.4.1-dirty'
}
Process_3: com.dnc.loc.data.eos.model.ChainBlock@65b08a1
Process_3: 00420819ab0cd04c0000008a4dd35057640000000000000004454f53000000000b65786368616e6765204245
Process_4: com.dnc.loc.data.eos.model.TransactionRequest@409ed52
交易失败: 签名推送到链失败HTTP 500 Internal Server Error



