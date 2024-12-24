//
//  YSRTCLiveLuckyBagDetailView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/19.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import "YSRTCLiveBaseCommonPopView.h"

@class YSRTCLiveLuckyBagDetailModel;

NS_ASSUME_NONNULL_BEGIN

typedef void(^DoneBlock)(YSRTCLiveLuckyBagDetailModel *model);

@interface YSRTCLiveLuckyBagDetailView : YSRTCLiveBaseCommonPopView

+ (YSRTCLiveLuckyBagDetailView *)getYSRTCLiveLuckyBagDetailViewWithModel:(YSRTCLiveLuckyBagDetailModel *)model
                                                                  inView:(UIView *)inView
                                                           completeblock:(DoneBlock)doneblock;

@end

NS_ASSUME_NONNULL_END
