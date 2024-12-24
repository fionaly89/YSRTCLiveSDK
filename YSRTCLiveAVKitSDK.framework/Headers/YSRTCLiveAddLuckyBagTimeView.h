//
//  YSRTCLiveAddLuckyBagTimeView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/23.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import "YSRTCLiveBaseCommonPopView.h"

@class YSRTCLiveLuckyBagRequestModel;

NS_ASSUME_NONNULL_BEGIN

typedef void(^TimeViewDoneBlock)(YSRTCLiveLuckyBagRequestModel *model);

@interface YSRTCLiveAddLuckyBagTimeView : YSRTCLiveBaseCommonPopView

+ (instancetype)getYSRTCLiveLuckyBagTimeViewWithModel:(YSRTCLiveLuckyBagRequestModel *)model
                                               inView:(UIView *)inView
                                        completeblock:(TimeViewDoneBlock)doneblock;

@end

NS_ASSUME_NONNULL_END
