//
//  YSRTCLiveRoomModel.h
//  YSRTCLiveAVKitSDK
//
//  Created by EZSaaS on 2024/12/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class YSRTCLiveVCAccountModel;
@class YSRTCLiveVCRoomModel;
@class YSRTCLiveVCCorporationModel;
@class YSRTCLiveVCConferenceInfoModel;

//（0：待开播；1：直播中；2：直播暂停；3：已结束；4：删除）
typedef enum : NSUInteger {
    Status_init = -1, //已初始化
    Status_ready = 0, //待开播
    Status_play, //直播中
    Status_pause, //暂停中
    Status_stop, //已结束
    Status_delete, //已删除
} YSRTCLiveRoomStatus;

@interface YSRTCLiveRoomModel : NSObject

@property (nonatomic, strong) NSString *cid; //ID
@property (nonatomic, strong) NSString *title; //ID
@property (nonatomic, assign) int type; //直播会议类型: 会议类型: 1-即时会议; 2-预约会议;3-点对点呼叫(单聊);4-点对点呼叫(群聊);5代表网络研讨会类型;6:直播类型
@property (nonatomic, assign) NSInteger begin_time; //直播会议开始时间（Unix时间戳）
@property (nonatomic, assign) NSInteger end_time; //直播会议结束时间（Unix时间戳）
@property (nonatomic, assign) NSInteger duration; //直播会议持续时间（单位秒）
@property (nonatomic, assign) YSRTCLiveRoomStatus state; //直播间状态（0：待开播；1：直播中；2：直播暂停；3：已结束；4：删除）
@property (nonatomic, strong) NSString *account_id; //创建人ID
@property (nonatomic, strong) NSString *corp_id; //所属企业ID
@property (nonatomic, strong) NSString *room_id; //直播会议房间ID
@property (nonatomic, strong) NSString *room_no; //直播会议房间号
@property (nonatomic, strong) NSString *category_id; //直播间分类
@property (nonatomic, strong) NSString *logo; //直播间logo
@property (nonatomic, assign) int live_res; // 直播清晰度：1：高清（720p）；2：超清(1080p)；3：标清（480p）

@property (nonatomic, assign) int visible_types; // 直播可见类型：1:企业内群聊；2：企业内公开；3：全网公开

//企业可见群聊ID列表，json数组格式 [{"id":"222","name":"abc"},{"id":"333"，,"name":"abc“}] id:群聊ID，name:群聊名称
@property (nonatomic, strong) NSString *group_id_list;
@property (nonatomic, assign) int max_group_chat_num; //最大群聊数

@property (nonatomic, strong) YSRTCLiveVCRoomModel *room; //会议房间

@end

NS_ASSUME_NONNULL_END
