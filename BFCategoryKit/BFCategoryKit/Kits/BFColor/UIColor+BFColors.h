//
//  UIColor+BFColors.h
//  BFCategoryKit
//
//  Created by 蝴蝶 on 15/2/3.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BFColors)

#pragma mark- RGB Color
+ (UIColor *)colorWithRGB:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue;
+ (UIColor *)colorWithRGB:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue alpha:(CGFloat)alpha;

#pragma mark- Hex Color

/* 将0X或者#开头的颜色字符串转换成UIColor */
+ (UIColor *)colorWithHexString:(NSString *)hexString;
/* 将UIColor转换成0X或者#开头的字符串颜色 */
+ (NSString *)HexRGBFromColor:(UIColor *)color;

#pragma mark- Random Color

/* 随机颜色 */
+ (UIColor *)randomColor;
/* 随机颜色和透明度 */
+ (UIColor *)randomColorAndAlpha;

#pragma mark- Gradient Color

+ (UIColor*)gradientFromColor:(UIColor*)c1 toColor:(UIColor*)c2 withHeight:(int)height;

#pragma mark- 


@end
