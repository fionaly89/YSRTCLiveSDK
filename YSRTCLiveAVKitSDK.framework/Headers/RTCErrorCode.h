//
//  RTCErrorCode.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2022/6/7.
//  Copyright © 2022 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    YSRTCLiveError_InMeeting = 1000, //YSRTCLive.YSRTCLiveVideoConferenceSDK" code:1000 userInfo:@{@"msg":@"你正在直播间"}
    YSRTCLiveError_EnterMeeting, //YSRTCLive.YSRTCLiveVideoConferenceSDK" code:1001 userInfo:@{@"msg":@"正在加入直播间"}
    YSRTCLiveError_NetworkError, //code:1015 userInfo:@{@"msg":@"网络不给力哦～"
    YSRTCLiveError_NetworkError13, //code:1013 userInfo:@{@"msg":@"网络异常(-13)，请检查网络设置后重试"
    YSRTCLiveError_AuthEmpty, //code:1013 userInfo:@{@"msg":@"鉴权信息为空"}
    YSRTCLiveError_InvalidLineId, //code:1014 userInfo:@{@"msg":@"无效的线路ID"}
    YSRTCLiveError_NoLineAvailable, //code:1015 userInfo:@{@"msg":@"获取线路节点失败"}
    YSRTCLiveError_InSystemCall, //code:1016 userInfo:@{@"msg":@"系统通话中，请稍后再试"}]);
    YSRTCLiveError_liveIdNull, //直播间ID为空
    YSRTCLiveError_recordListNull, //没有录像
    YSRTCLiveError_liveEnded, //直播已结束，无录像
    YSRTCLiveError_liveEndedWithRecord, //直播已结束，有录像
    YSRTCLiveError_InYSRTCMeeting //视频会议中
} YSRTCLiveErrorCodeType;

NS_ASSUME_NONNULL_END
