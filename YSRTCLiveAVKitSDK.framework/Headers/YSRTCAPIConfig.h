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

@interface YSRTCLiveJoinLiveRoomConfig : NSObject

#pragma mark - 必填选项
@property (nonatomic, copy) NSString *liveId; //直播间id

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
@property (nonatomic, copy) NSString *live_roomNo; //直播间房间号
@property (nonatomic, assign) BOOL beStreamer; //当前角色是否是主播
@property (nonatomic, assign) YSRTCLiveRoomStatus state; //直播间状态

@end

//主播账号信息
@interface YSRTCLiveRoomAccountInfo : NSObject

@property (nonatomic, copy) NSString *account_id; //账号id
@property (nonatomic, copy) NSString *name; //账号用户名
@property (nonatomic, copy) NSString *nickName; //账号昵称

@end

NS_ASSUME_NONNULL_END
