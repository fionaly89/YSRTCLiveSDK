//
//  YSRTCLiveSettingModel.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2020/8/17.
//  Copyright © 2020 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YSRTCAPIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@class YSRTCMobileRTCAuthService;
/*!
@brief 配置SDK
*/
@interface YSRTCLiveSDKInitContext : NSObject

#pragma mark - 应用的 App Key
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *appkey;

#pragma mark - SDK 服务器地址
@property (nonatomic, copy) NSString * _Nullable domain;

#pragma mark - 设备唯一标识
@property (nonatomic, strong) NSString *device_id;

#pragma mark - SDK 是否保存日志
//控制是否将日志写入本地文件，默认开启，建议 DEBUG模式下设置成 NO
@property (nonatomic, assign) BOOL enableLog;

//SDK 主题色
@property (nonatomic, strong) UIColor *appThemeColor;

@end

NS_ASSUME_NONNULL_END
