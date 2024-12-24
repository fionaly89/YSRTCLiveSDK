//
//  YSRTCLiveRoomActivityInfoModel.h
//  YSRTCLiveAVKitSDK
//
//  Created by EZSaaS on 2024/12/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveRoomActivityInfoModel : NSObject

@property (nonatomic, strong) NSString *liveId; /** 直播间ID */
@property (nonatomic, strong) NSString *activityId; /** 活动ID */
@property (nonatomic, assign) int activityType; /** 活动类型（1：优惠券活动） */
@property (nonatomic, strong) NSString *name; /** 活动名称 */
@property (nonatomic, strong) NSString *link; /** 活动链接 */

@end

NS_ASSUME_NONNULL_END
