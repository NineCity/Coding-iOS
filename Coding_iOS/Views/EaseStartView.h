//
//  EaseStartView.h
//  Coding_iOS
//
//  Created by Ease on 14/12/26.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EaseStartView : UIView
+ (instancetype)startViewWithBgImage:(UIImage *)bgImage descriptionStr:(NSString *)descriptionStr;

- (void)startAnimationWithCompletionBlock:(void(^)(EaseStartView *easeStartView))completionHandler;
@end
