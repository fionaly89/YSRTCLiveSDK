//
//  YSRTCMobileRTCAuthService.h
//  YSRTCLiveVideoConferenceSDK
//
//  Created by YSRTCLive on 2023/8/22.
//  Copyright © 2023 YSRTCLive. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
@brief SDK鉴权参数
*/
@interface YSRTCLiveMobileRTCAuthService : NSObject

/// SDK 登录 token
@property (nullable, copy, nonatomic) NSString *rtcToken;

@end

NS_ASSUME_NONNULL_END
