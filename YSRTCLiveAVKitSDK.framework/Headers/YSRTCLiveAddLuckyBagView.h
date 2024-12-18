//
//  YSRTCLiveBaseCommonPopView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/17.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import "YSRTCLiveBaseCommonPopView.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveAddLuckyBagView : YSRTCLiveBaseCommonPopView

+ (YSRTCLiveAddLuckyBagView *)getYSRTCLiveCategorySheetViewWithContents:(NSArray<NSString *> *)contents
                                                              selectIndex:(NSInteger)selectIndex
                                                                    sView:(UIView *)sView
                                                               agreeBlock:(void (^)(NSString *content, NSInteger row))agreeBlock;

@end

NS_ASSUME_NONNULL_END
