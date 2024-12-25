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
#import "YSRTCLiveRoomActivityInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @brief 回调框架代理
 */
@protocol YSRTCLiveMobileRTCMeetingServiceDelegate <NSObject>
@optional

/// 用户点击购物车事件回调
/// @param liveRoomInfo 当前直播间信息
/// @param streamerInfo 主播信息
/// @param complete 弹窗时回调
- (void)ysrtclive_shoppingCartClicked:(YSRTCLiveRoomInfo *)liveRoomInfo
                         streamerInfo:(YSRTCLiveRoomAccountInfo *)streamerInfo
                             complete:(void(^)(YSRTCLivePopViewCompleteType completeType))complete;

/// 观众点击活动链接
/// @param liveRoomInfo 当前直播间信息
/// @param streamerInfo 主播信息
/// @param activityInfo 活动信息
/// @param complete 弹窗时回调
- (void)ysrtclive_ActivityClicked:(YSRTCLiveRoomInfo *)liveRoomInfo
                     streamerInfo:(YSRTCLiveRoomAccountInfo *)streamerInfo
                     activityInfo:(YSRTCLiveRoomActivityInfoModel *)activityInfo
                         complete:(void(^)(YSRTCLivePopViewCompleteType completeType))complete;

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
