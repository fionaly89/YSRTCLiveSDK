//
//  YSRTCLiveLuckyBagRequestModel.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/17.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveLuckyBagRequestModel : NSObject

@property (nonatomic, strong) NSString *live_id;               // 直播间id
@property (nonatomic, assign) NSInteger lucky_bag_type;        // 福袋类型（1：积分；2：自定义）
@property (nonatomic, assign) NSInteger grab_type;             // 福袋打开方式（1：拼手气；2：固定分配）
@property (nonatomic, assign) NSInteger lucky_bag_num;         // 福袋数量
@property (nonatomic, assign) NSInteger lucky_bag_num_grab1;   // 拼手气福袋数量
@property (nonatomic, assign) NSInteger lucky_bag_num_grab2;   // 固定分配福袋数量
@property (nonatomic, assign) NSInteger unit_points_num;       // 单个福袋积分数量
@property (nonatomic, assign) NSInteger total_points_num;      // 积分总数
@property (nonatomic, strong) NSString *award_name;            // 奖品名称
@property (nonatomic, assign) NSInteger enroll_condition;      // 报名条件（1：发表任意评论；2：发表指定评论）
@property (nonatomic, strong) NSString *enroll_condition_comment;  // 报名条件指定评论
@property (nonatomic, assign) BOOL filter_winner;              // 是否过滤中奖用户
@property (nonatomic, assign) NSInteger open_interval;         // 开奖间隔时长（分钟）

@end

NS_ASSUME_NONNULL_END
