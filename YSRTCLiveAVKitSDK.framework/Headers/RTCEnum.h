//
//  RTCEnum.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2022/4/12.
//  Copyright © 2022 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Language Type
typedef enum : NSInteger {
    RTCLanguageType_chinese = 0, //中文
    RTCLanguageType_english, //英文
} YSRTCLiveLanguageType;

typedef enum : NSUInteger {
    Auth_microphone,
    Auth_camera,
    Auth_album,
} YSRTCLiveAPPSysAuth;

typedef NS_ENUM(NSUInteger, YSRTCLiveAPPSysAuthSubType) {
    Auth_microphone_meeting = 0, //直播间麦克风
    Auth_camera_meeting = 50, //直播间摄像头
    Auth_camera_cover = 51, //设置直播间封面-拍照
    Auth_album_cover = 100, //设置直播间封面-相册
};

//弹窗状态
typedef enum : NSUInteger {
    ysCompleteType_pop, //弹窗
    ysCompleteType_dismiss //隐藏
} YSRTCLivePopViewCompleteType;

NS_ASSUME_NONNULL_END
