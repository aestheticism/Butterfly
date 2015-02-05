//
//  UIView+BFAnimation.m
//  BFCategoryKit
//
//  Created by 蝴蝶 on 15/2/3.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "UIView+BFAnimation.h"

@implementation UIView (BFAnimation)

- (void)runShakingAnimation {
    CAKeyframeAnimation * keyframe = [CAKeyframeAnimation animationWithKeyPath:@"position"];
    keyframe.duration = 0.1;
    keyframe.values = @[[NSValue valueWithCGPoint:CGPointMake(self.center.x - 10, self.center.y)],
                        [NSValue valueWithCGPoint:CGPointMake(self.center.x, self.center.y)],
                        [NSValue valueWithCGPoint:CGPointMake(self.center.x + 10, self.center.y)],
                        [NSValue valueWithCGPoint:CGPointMake(self.center.x, self.center.y)]];

    [self.layer addAnimation:keyframe forKey:nil];
}


@end
