# cordova-plugin-wechat-develop

A cordova plugin, a JS version of Wechat SDK

# Feature


# Example

See 

# Install

1. ```cordova plugin add cordova-plugin-dpwechat  --variable wechatappid=YOUR_WECHAT_APPID```,


2. (iOS only) if your cordova version <5.1.1,check the URL Type using XCode

# Usage

## Check if wechat is installed
```Javascript
Wechat.isInstalled(function (installed) {
    alert("Wechat installed: " + (installed ? "Yes" : "No"));
}, function (reason) {
    alert("Failed: " + reason);
});
## 注意事项
``` IOS 使用Cordova微信支付插件iOS版注意事项：
     1.该插件依赖第三方库文件DPWXPayPlugin.framwork,该文件可在智付官网技术支持下载；
     2.该插件依赖微信官方的一些系统库文件，并需引用OpenSDK1.8.0文件夹内所有文件
```android 导入有智付支付提供的辅助ZFWCPay.jar包放置项目libs中，在build.gradle 进行添加引用```
           dependencies {
            compile files('libs/ZFWCPay.jar')
               }
```
## Send payment request
```Javascript
// See
var params = {
    token: '', // 请求智付支付服务端生成
    app_id: '' // 微信应用APPID  android 必传
};
Wechat.sendPaymentRequest(params, function () {
    alert("Success");
}, function (reason) {
    alert("Failed: " + reason);
});
```


# FAQ

See [FAQ]https://github.com/mfxscott/cordova-plugin-dpwechat.git

# LICENSE

[MIT LICENSE](http://opensource.org/licenses/MIT)
