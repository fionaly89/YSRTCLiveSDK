//
//  YSRTCLiveAddLuckyBagConditionTypeView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/23.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import "YSRTCLiveBaseCommonPopView.h"

@class YSRTCLiveLuckyBagRequestModel;

NS_ASSUME_NONNULL_BEGIN

typedef void(^ConditionTypeViewDoneBlock)(YSRTCLiveLuckyBagRequestModel *model);

@interface YSRTCLiveAddLuckyBagConditionTypeView : YSRTCLiveBaseCommonPopView

+ (instancetype)getYSRTCLiveLuckyBagConditionTypViewWithModel:(YSRTCLiveLuckyBagRequestModel *)model
                                                       inView:(UIView *)inView
                                                completeblock:(ConditionTypeViewDoneBlock)ConditionTypeViewDoneBlock;

@end

NS_ASSUME_NONNULL_END
