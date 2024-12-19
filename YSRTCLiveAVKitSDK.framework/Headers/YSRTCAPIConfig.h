//
//  YSRTCAPIConfig.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2022/11/23.
//  Copyright © 2022 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"
#import "YSRTCLiveRoomModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveJoinRoomConfig : NSObject

#pragma mark - 必填选项
@property (nonatomic, copy) NSString *roomNo; //房间号

@end

@interface YSRTCLiveAppAuthInfoModel : NSObject

@property (nonatomic, assign) YSRTCLiveAPPSysAuth authType; //权限主类型
@property (nonatomic, assign) YSRTCLiveAPPSysAuthSubType authSubType; //权限子类型
@property (nonatomic, strong) NSString *authSubName; //模块名称
@property (nonatomic, strong) NSString *title; //提示窗标题
@property (nonatomic, strong) NSString *content; //提示窗内容
@property (nonatomic, strong) NSString *btnDesc; //操作按钮内容

@end

@interface YSRTCLiveRoomInfo : NSObject

@property (nonatomic, copy) NSString *live_id; //直播间id
@property (nonatomic, assign) BOOL beStreamer; //当前角色是否是主播
@property (nonatomic, assign) YSRTCLiveRoomStatus state; //直播间状态

@end

NS_ASSUME_NONNULL_END
