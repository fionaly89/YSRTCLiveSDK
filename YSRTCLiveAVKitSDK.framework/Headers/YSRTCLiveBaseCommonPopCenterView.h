//
//  YSRTCLiveBaseCommonPopCenterView.h
//  EZSaaSMobileRTC
//
//  Created by jiangwei9 on 2024/12/21.
//  Copyright © 2024 EZSaaS. All rights reserved.
//

#import <UIKit/UIKit.h>

// 弹窗显示通知
extern NSString *const YSRTCLivePopCenterViewWillShowNotification;
extern NSString *const YSRTCLivePopCenterViewDidShowNotification;
// 弹窗消失通知
extern NSString *const YSRTCLivePopCenterViewWillDismissNotification;
extern NSString *const YSRTCLivePopCenterViewDidDismissNotification;

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCLiveBaseCommonPopCenterView : UIView

//可以在子类覆盖
@property (nonatomic, strong) UIView *contentBGView;

- (void)showPopView:(BOOL)animation inView:(UIView *)view;

- (void)dismissPopView:(BOOL)animation;

@end

NS_ASSUME_NONNULL_END
