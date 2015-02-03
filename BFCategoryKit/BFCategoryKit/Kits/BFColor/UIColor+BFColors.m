//
//  UIColor+BFColors.m
//  BFCategoryKit
//
//  Created by 蝴蝶 on 15/2/3.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "UIColor+BFColors.h"

@implementation UIColor (BFColors)

#pragma mark - Random colors

+ (UIColor *)randomColor {
    return [UIColor colorWithRed:(CGFloat)((arc4random() % 1000) / 1000.0f)
                           green:(CGFloat)((arc4random() % 1000) / 1000.0f)
                            blue:(CGFloat)((arc4random() % 1000) / 1000.0f)
                           alpha:1.0f];
}

+ (UIColor *)randomColorAndAlpha {
    return [UIColor colorWithRed:(CGFloat)((arc4random() % 1000) / 1000.0f)
                           green:(CGFloat)((arc4random() % 1000) / 1000.0f)
                            blue:(CGFloat)((arc4random() % 1000) / 1000.0f)
                           alpha:(CGFloat)((arc4random() % 1000) / 1000.0f)];
}

@end
