//
//  YSRTCLiveConferenceDefine.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2020/2/24.
//  Copyright © 2020 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//状态：1-会议中;2-待开始;3-结束；
typedef NS_ENUM(NSInteger, YSRTCLiveVideoConferenceStatus) {
    YSRTCLiveVideoConferenceStatusInProgress = 1,
    YSRTCLiveVideoConferenceStatusPreparing,
    YSRTCLiveVideoConferenceStatusClose,
};

//0-普通成员;1-创建者;2-主持人
typedef NS_ENUM(NSInteger, YSRTCLiveVideoConferenceRole) {
    Role_Member = 0,
    Role_Creator,
    Role_Host,
};

typedef void(^cancelCallBlock)(void);

NS_ASSUME_NONNULL_END
