//
//  YSRTCLiveAVKitAVSDK.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by 李岳 on 2020/4/11.
//  Copyright © 2020 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "YSRTCExpressDefines.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @brief SDK
 */
@interface YSRTCLiveAVKitAVSDK : NSObject

@property (nullable, weak, nonatomic) id<YSRTCLiveMobileRTCMeetingServiceDelegate> delegate;
@property (nullable, weak, nonatomic) id<YSRTCLiveMobileRTCAuthDelegate> authDelegate;

@property (nonatomic, strong) YSRTCLiveMobileRTCAuthService *authService;
@property (nonatomic, strong) YSRTCLiveSDKInitContext *context;
@property (nonatomic, assign, readonly) BOOL bInMeeting;

+ (YSRTCLiveAVKitAVSDK * _Nonnull)sharedRTC;

//初始化SDK配置
- (void)initializeWithContext:(YSRTCLiveSDKInitContext * _Nonnull)context;

/// 发起直播
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param successFn 成功回调，vc:直播控制器，accountInfo:主播信息
/// @param failFn 失败回调
- (void)startLiveRTCWithAuthService:(YSRTCLiveMobileRTCAuthService *)authService
                               navi:(UINavigationController *)navi
                    successCallback:(void(^)(UIViewController *vc, YSRTCLiveRoomAccountInfo *accountInfo))successFn
                       failCallBack:(void(^)(NSError *error))failFn;

/// 加入指定直播间
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param config 参数
/// @param successFn 成功回调，vc:直播控制器，accountInfo:主播信息
/// @param failFn 失败回调
- (void)enterLiveRoomWithAuthService:(YSRTCLiveMobileRTCAuthService *)authService
                                navi:(UINavigationController *)navi
                              config:(YSRTCLiveJoinRoomConfig *)config
                     successCallback:(void(^)(UIViewController *vc, YSRTCLiveRoomAccountInfo *accountInfo))successFn
                        failCallBack:(void(^)(NSError *error))failFn;

/// 观看指定直播间回放
/// @param authService 鉴权信息
/// @param navi 导航控制器
/// @param config 直播间信息参数
/// @param successFn 成功回调
/// @param failFn 失败回调
- (void)enterRecordPlaybackWithAuthService:(YSRTCLiveMobileRTCAuthService *)authService
                                      navi:(UINavigationController *)navi
                                    config:(YSRTCLiveJoinLiveRoomConfig *)config
                           successCallback:(void(^)(UIViewController *vc))successFn
                              failCallBack:(void(^)(NSError *error))failFn;

/// 通知sdk当前直播间商品数量
/// @param liveId 直播间ID
/// @param count 商品数量
- (void)notifyCartQuantity:(NSString *)liveId count:(int)count;

//通知直播组件退出登录
- (void)logoutLiveSDK;

@end

NS_ASSUME_NONNULL_END
