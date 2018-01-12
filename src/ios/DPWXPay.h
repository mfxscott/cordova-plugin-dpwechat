//
//  DPWXPay.h
//  ExamplePlugin
//
//  Created by dinpay on 2018/1/12.
//  Copyright © 2018年 com.vinlor. All rights reserved.
//

#import <Cordova/CDVPlugin.h>
#import <DPWXPayPlugin/DPWXPayPlugin.h>
#import "WXApi.h"
#import "WXApiObject.h"


@interface DPWXPay : CDVPlugin<DPWXPayHandleDelegate,WXApiDelegate>

@property (nonatomic, strong) NSString *currentCallbackId;
@property (nonatomic, strong) NSString *wechatAppId;

@property (nonatomic, strong) CDVInvokedUrlCommand *command;

- (void)sendPaymentRequest:(CDVInvokedUrlCommand *)command;


@end
