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

//当前直播数据
@property (nonatomic, strong) NSString *live_id;

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

/// 发起直播
/// @param authService 鉴权信息
/// @param param 创建直播额外参数
/// @param navi 导航控制器
/// @param successFn 成功回调，vc:直播控制器，accountInfo:主播信息
/// @param failFn 失败回调
- (void)startLiveRTCWithAuthService:(YSRTCLiveMobileRTCAuthService *)authService
                              param:(NSDictionary *)param
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
                              config:(YSRTCLiveJoinLiveRoomConfig *)config
                     successCallback:(void(^)(UIViewController *vc, YSRTCLiveRoomAccountInfo *accountInfo))successFn
                        failCallBack:(void(^)(NSError *error))failFn;

/// 通知sdk当前直播间商品数量
/// @param liveId 直播间ID
/// @param count 商品数量
- (void)notifyCartQuantity:(NSString *)liveId count:(int)count;

//通知直播组件退出登录
- (void)logoutLiveSDK;

/// 切换服务地址
/// @param domain 服务地址，eg: https://www.example.com:8888
- (void)switchServiceDomain:(NSString *)domain;

/// 用户当前企业信息发生了变更
- (void)switchAccountCorpInfo;

/// 触发直播开启app内小窗口操作
- (void)toggleStartFloatingWindow;

/// 触发直播app内小窗口全屏操作
- (void)toggleFloatingVideoFullscreen;

/// 检查sdk当前状态
- (YSRTCLiveSDKStatus)checkYSRTCLiveSDKStatus;

@end

NS_ASSUME_NONNULL_END
