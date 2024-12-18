//
//  YSRTCAPIConfig.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2022/11/23.
//  Copyright © 2022 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCEnum.h"

NS_ASSUME_NONNULL_BEGIN

@class YSRTCLiveVCJoinMemberModel;
@class YSRTCLiveVCConferenceModel;
@interface YSRTCLiveJoinRoomConfig : NSObject

#pragma mark - 必填选项
@property (nonatomic, copy) NSString *roomNo; //房间号

@end

@interface YSRTCLiveInviteMeetingConfig : NSObject

@property (nonatomic, copy) NSString *meetingTitle;

@property (nonatomic, assign) BOOL videoCallEnable;

@end

@interface YSRTCLiveMeetingGroupConfig : NSObject

@property (nonatomic, copy) NSString *meetingTitle;

@property (nonatomic, assign) BOOL videoCallEnable;

@end

@interface YSRTCLiveInvitedLinkConfig : NSObject

@property (nonatomic, assign) YSRTCLiveInviteLinkType linkType; //邀请链接类型
@property (nonatomic, copy) NSString *nickname; //邀请人昵称
@property (nonatomic, copy) NSString *title; //会议标题
@property (nonatomic, copy) NSString *content; //会议标题(可选)
@property (nonatomic, copy) NSString *startDate; //会议开始时间 2024-02-20
@property (nonatomic, copy) NSString *startTime; //会议开始时间 19:00
@property (nonatomic, copy) NSString *endDate; //会议开始时间 2024-02-21
@property (nonatomic, copy) NSString *endTime; //会议开始时间 22:00
@property (nonatomic, copy) NSString *roomNo; //房间号
@property (nonatomic, copy) NSString *roomId; //房间ID
@property (nonatomic, assign) BOOL whiteListOnly; //是否仅允许白名单人员入会

@end

@interface YSRTCLiveMemberInviteModel : NSObject

@property (nonatomic, strong) UINavigationController *naviVC; //展示页面的导航控制器
@property (nonatomic, strong) YSRTCLiveVCConferenceModel *meetingModel; //当前会议信息
@property (nonatomic, strong) NSArray<YSRTCLiveVCJoinMemberModel *> *inMeetingMembers; //当前会中已入会人员列表
@property (nonatomic, assign) BOOL isHost; //邀请人是否是主持人

@end

@interface YSRTCLiveAppAuthInfoModel : NSObject

@property (nonatomic, assign) YSRTCLiveAPPSysAuth authType; //权限主类型
@property (nonatomic, assign) YSRTCLiveAPPSysAuthSubType authSubType; //权限子类型
@property (nonatomic, strong) NSString *authSubName; //模块名称
@property (nonatomic, strong) NSString *title; //提示窗标题
@property (nonatomic, strong) NSString *content; //提示窗内容
@property (nonatomic, strong) NSString *btnDesc; //操作按钮内容

@end

@interface YSRTCLiveInstantMeetingConfigOptionsModel : NSObject

//内部成员入会限制，是否只允许被邀请人员进入，默认允许所有(NO)
@property (nonatomic, assign) BOOL access_wl;

//外协-企业内外部联系人入会类型限制(0：不允许外部联系人入会;1:允许外部联系人入会；2：仅受邀外部联系人入会)，默认不允许
@property (nonatomic, assign) NSInteger corp_external_memberLimit;

//外部联系人入会类型限制(0：不允许外部联系人入会;1:允许外部联系人入会；2：仅受邀外部联系人入会)，默认不允许
@property (nonatomic, assign) NSInteger external_memberLimit;

//内部成员权限配置
@property (nonatomic, assign) BOOL inner_waitRoom; //等候室开关，默认关闭(NO)
@property (nonatomic, assign) BOOL inner_waterMark; //内部成员-会议水印，默认开启(YES)
@property (nonatomic, assign) BOOL inner_screenShot; //内部成员-允许成员截图录屏；默认允许(YES)

//外协、外部联系人权限配置
@property (nonatomic, assign) BOOL external_waitRoom; //等候室开关，默认开启(YES)
@property (nonatomic, assign) BOOL external_waterMark; //会议水印，默认开启(YES)
@property (nonatomic, assign) BOOL external_screenShot; //允许外部联系人截图与录屏，默认不允许(NO)
@property (nonatomic, assign) BOOL external_meetingShare; //允许外部联系人共享屏幕，默认允许(YES)

@end

NS_ASSUME_NONNULL_END
