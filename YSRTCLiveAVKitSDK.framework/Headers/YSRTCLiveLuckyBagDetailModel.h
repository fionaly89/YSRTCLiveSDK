//
//  YSRTCLiveLuckyBagDetailModel.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/17.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LiveRoomServer.pbobjc.h"
#import "YSRTCLiveLuckBagListInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveLuckyBagDetailModel : NSObject

@property (nonatomic, strong) NSString *msg_id;                // 消息id
@property (nonatomic, strong) NSString *room_id;               // 房间id
@property (nonatomic, strong) NSString *live_id;               // 直播间id
@property (nonatomic, strong) NSString *lucky_bag_id;          // 直播间id
@property (nonatomic, assign) NSInteger lucky_bag_type;        // 福袋类型（1：积分；2：自定义）
@property (nonatomic, assign) NSInteger grab_type;             // 福袋打开方式（1：拼手气；2：固定分配）
@property (nonatomic, assign) NSInteger lucky_bag_num;         // 福袋数量
@property (nonatomic, assign) NSInteger unit_points_num;       // 单个福袋积分数量
@property (nonatomic, assign) NSInteger total_points_num;      // 积分总数
@property (nonatomic, strong) NSString *award_name;            // 奖品名称
@property (nonatomic, assign) NSInteger enroll_condition;      // 报名条件（1：发表任意评论；2：发表指定评论）
@property (nonatomic, strong) NSString *enroll_condition_comment;  // 报名条件指定评论
@property (nonatomic, assign) BOOL filter_winner;              // 是否过滤中奖用户
@property (nonatomic, assign) NSInteger open_interval;         // 开奖间隔时长（分钟）

@property (nonatomic, assign) NSInteger open_time;             // 开奖时间
@property (nonatomic, assign) NSInteger enroll_count;          // 报名人数
@property (nonatomic, assign) NSInteger winner_count;          // 获奖人数

@property (nonatomic, assign) NSInteger lucky_bag_state;       // 福袋状态（1：进行中；2：开奖中；3：已结束）

@property (nonatomic, assign) BOOL isAnchor;                   // 业务指定
@property (nonatomic, assign) BOOL enroll_condition_ok;        // 报名条件满足（观众有效），和发消息有关系
@property (nonatomic, assign) BOOL enrolled;                   // 已经报名（观众有效）
@property (nonatomic, assign) BOOL rewarded;                   // 是否获奖（观众有效）
@property (nonatomic, assign) NSInteger rewardNum;             // 奖励数量（观众有效）

@property (nonatomic, assign) BOOL needRefresh;                // 中途进入直播间，需要补全数据
@property (nonatomic, assign) BOOL needEnroll;                 // 观众点击了发表评论加入福袋


- (void)updateWithLiveLuckyBagLaunchNotify:(LiveLuckyBagLaunchNotify *)notify;

- (void)updateWithLiveLuckBagListInfo:(YSRTCLiveLuckBagListInfo *)listInfo;

@end

NS_ASSUME_NONNULL_END
