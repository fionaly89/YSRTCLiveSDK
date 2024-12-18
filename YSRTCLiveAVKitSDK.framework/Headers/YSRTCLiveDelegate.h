//
//  YSRTCLiveDelegate.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2020/8/11.
//  Copyright © 2020 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"
#import "YSRTCAPIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@class YSRTCLiveMobileRTCMemberInfo;
@class YSRTCLiveVCJoinMemberModel;
@class YSRTCLiveVCConferenceModel;
@class YSRTCLiveVCAccountModel;

/*!
 @brief 回调框架代理
 */
@protocol YSRTCLiveMobileRTCMeetingServiceDelegate <NSObject>
@optional

/// 获取手机系统权限
/// @param auth 权限信息
/// @param result 授权结果
- (void)ysrtclive_obtainAppAuth:(YSRTCLiveAppAuthInfoModel *)auth
               result:(void(^)(BOOL status))result;

/// 检查手机系统权限
/// @param auth 权限信息
- (BOOL)ysrtclive_checkAppAuth:(YSRTCLiveAppAuthInfoModel *)auth;

//SDK token 失效登出
- (void)ysrtclive_onVisitorLogOut;

@end


/*!
 @brief An authentication service will issue the following values when the authorization state changes.
 */
@protocol YSRTCLiveMobileRTCAuthDelegate <NSObject>

@optional
/*!
 @brief Specify to get the response of MobileRTC authorization.
 */
- (void)onYSRTCLiveAuthExpiredWithRefreshSuccessCallback:(void(^)(NSString *token))refreshSuccessCallback;

- (void)onYSRTCLiveAuthNullCallBack:(void(^)(NSString *token))refreshSuccessCallback;

@end

NS_ASSUME_NONNULL_END
