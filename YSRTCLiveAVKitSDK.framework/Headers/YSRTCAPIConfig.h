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
@property (nonatomic, strong) NSString *live_logo;     // 直播间封面
@property (nonatomic, strong) NSString *logo_thumbnail;
@property (nonatomic, strong) NSString *live_title;     // 直播间标题
@property (nonatomic, weak) UIViewController *currentVC;

@property (nonatomic, assign) int visible_types; // 直播可见类型：1:企业内群聊；2：企业内公开；3：全网公开

//企业可见群聊ID列表，json数组格式 [{"id":"222","name":"abc"},{"id":"333"，,"name":"abc“}] id:群聊ID，name:群聊名称
@property (nonatomic, strong) NSString *group_id_list;

@property (nonatomic, assign) int max_group_chat_num; //最大群聊数
@property (nonatomic, strong) NSString *im_session_id; //是否是关联群聊的直播

@end

//主播账号信息
@interface YSRTCLiveRoomAccountInfo : NSObject

@property (nonatomic, copy) NSString *account_id; //账号id
@property (nonatomic, copy) NSString *name; //账号用户名
@property (nonatomic, copy) NSString *nickName; //账号昵称
@property (nonatomic, copy) NSString *avatarURL;     // 主播头像的 URL 地址

@end

@interface YSRTCLiveMemberInfo : NSObject

@property (nonatomic, copy) NSString *cid; //ID
@property (nonatomic, copy) NSString *name;  //String    用户名
@property (nonatomic, copy) NSString *nickName;  //String    用户昵称
@property (nonatomic, copy) NSString *headPortraitUrl; //String    用户头像url

@end

@interface YSRTCLiveAppChatAuthInfoModel : NSObject

@property (nonatomic, assign) int authType; //权限主类型
@property (nonatomic, strong) NSString *authSubName; //模块名称

@end

NS_ASSUME_NONNULL_END
