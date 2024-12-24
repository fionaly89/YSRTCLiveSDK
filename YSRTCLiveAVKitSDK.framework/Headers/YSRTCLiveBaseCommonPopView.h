//
//  YSRTCLikeBalloonView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/17.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveBaseCommonPopView : UIView

//可以在子类覆盖
@property (nonatomic, strong) UIView *contentBGView;

- (void)showPopView:(BOOL)animation inView:(UIView *)view;

- (void)dismissPopView:(BOOL)animation;

@end

NS_ASSUME_NONNULL_END
