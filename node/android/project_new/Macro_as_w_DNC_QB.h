
基础路径设置:
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\apk_work\DNC_QB
base:\\








@Route
//ARouter框架是分组管理




// 加密
Cipher cipher = Cipher.getInstance(transformation);



/**
 * content: 加密内容
 * slatKey: 加密的盐，16位字符串
 * vectorKey: 加密的向量，16位字符串
 */
public String encrypt(String content, String slatKey, String vectorKey) throws Exception {
    Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
    SecretKey secretKey = new SecretKeySpec(slatKey.getBytes(), "AES");
    IvParameterSpec iv = new IvParameterSpec(vectorKey.getBytes());
    cipher.init(Cipher.ENCRYPT_MODE, secretKey, iv);
    byte[] encrypted = cipher.doFinal(content.getBytes());
    return Base64.encodeBase64String(encrypted);
}



byte[] bytes = EncryptUtils.decryptHexStringAES(text, 
			EncryptUtils.encryptMD5ToString(key.getBytes()).getBytes(), 
			"AES/CBC/PKCS5Padding", 
			walletVM.hexString2Bytes(walletVM.iv));













