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

@required
//获取当前用户个人信息
- (void)ysrtcLiveGetUserInfoByUserId:(NSString *)userId
                          completion:(void (^)(YSRTCLiveMemberInfo *memberInfo))completion;

@optional

/// 用户点击购物车事件回调
/// @param liveRoomInfo 当前直播间信息
/// @param streamerInfo 主播信息
/// @param complete 弹窗时回调
- (void)ysrtclive_shoppingCartClicked:(YSRTCLiveRoomInfo *)liveRoomInfo
                         streamerInfo:(YSRTCLiveRoomAccountInfo *)streamerInfo
                             complete:(void(^)(YSRTCLivePopViewCompleteType completeType))complete;

/// 用户点击分享功能事件回调-竖屏
/// @param liveRoomInfo 当前直播间信息
/// @param streamerInfo 主播信息
/// @param complete 弹窗时回调
- (void)ysrtclive_shareBtnClicked:(YSRTCLiveRoomInfo *)liveRoomInfo
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

/// 修改直播可见范围
/// @param liveRoomInfo 权限信息
/// @param result 授权结果
- (void)ysrtclive_changeAppChatAuth:(YSRTCLiveRoomInfo *)liveRoomInfo
                               navi:(UINavigationController *)navi
                             result:(void(^)(int visible_types, NSString *group_id_list))result;

#pragma mark - 主播音频额外处理

/// 录制开始，初始化资源
- (void)recoredAudioStart:(NSString *)roomNo liveId:(NSString *)liveId;

/// 录制音频数据回调
/// @param data 音频数据
/// @param length 音频数据大小
- (void)didRecoredAudioData:(void *)data length:(unsigned int)length;

/// 录制结束，释放资源
- (void)recoredAudioStop;

#pragma mark - 直播间通知

/// 直播间开播回调
/// @param liveRoomInfo 直播间信息
/// @param streamerInfo 主播信息
- (void)onStartYSRTCLiveRoom:(YSRTCLiveRoomInfo *)liveRoomInfo streamerInfo:(YSRTCLiveRoomAccountInfo *)streamerInfo;

/// 进入直播间回调
/// @param liveRoomInfo 直播间信息
- (void)onEnterYSRTCLiveRoom:(YSRTCLiveRoomInfo *)liveRoomInfo;

/// 退出直播间回调
/// @param liveRoomInfo 直播间信息
- (void)onExitYSRTCLiveRoom:(YSRTCLiveRoomInfo *)liveRoomInfo;

#pragma mark - sdk 主动调用APP

/// 获取直播间购物车商品数量
/// @param liveRoomInfo 直播间信息
/// @param result 商品数量
- (void)ysrtclive_obtainCartQuantity:(YSRTCLiveRoomInfo *)liveRoomInfo
                              result:(void(^)(int count))result;

/// 获取共享横屏弹窗视图
/// @param liveRoomInfo 当前直播间信息
/// @param streamerInfo 主播信息
/// @param result 关闭当前视图
- (UIView *)ysrtclive_getSharePopViewByInfo:(YSRTCLiveRoomInfo *)liveRoomInfo
                               streamerInfo:(YSRTCLiveRoomAccountInfo *)streamerInfo
                                     result:(void(^)(void))result;

/// 获取购物车横屏弹窗视图
/// @param liveRoomInfo 当前直播间信息
/// @param streamerInfo 主播信息
/// @param result 关闭当前视图
- (UIView *)ysrtclive_getShopingCartPopViewByInfo:(YSRTCLiveRoomInfo *)liveRoomInfo
                                     streamerInfo:(YSRTCLiveRoomAccountInfo *)streamerInfo
                                           result:(void(^)(void))result;

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
