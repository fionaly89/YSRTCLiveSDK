//
//  YSRTCLiveLuckyBagOpenResultView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/21.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import "YSRTCLiveBaseCommonPopCenterView.h"

@class YSRTCLiveLuckyBagDetailModel;

NS_ASSUME_NONNULL_BEGIN

typedef void(^DoneBlock)(YSRTCLiveLuckyBagDetailModel *model);

@interface YSRTCLiveLuckyBagOpenResultView : YSRTCLiveBaseCommonPopCenterView

+ (instancetype)getYSRTCLiveLuckyBagOpenResultViewWithModel:(YSRTCLiveLuckyBagDetailModel *)model
                                                     inView:(UIView *)inView
                                              completeblock:(DoneBlock)doneblock;

@end

NS_ASSUME_NONNULL_END
