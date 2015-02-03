//
//  UIColor+BFColors.h
//  BFCategoryKit
//
//  Created by 蝴蝶 on 15/2/3.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BFColors)


/* 将0X或者#开头的颜色字符串转换成UIColor */
+ (UIColor *)colorWithHexString:(NSString *)hexString;
/* 将UIColor转换成0X或者#开头的字符串颜色 */
+ (NSString *)HexRGBFromColor:(UIColor *)color;


/* 随机颜色 */
+ (UIColor *)randomColor;
/* 随机颜色和透明度 */
+ (UIColor *)randomColorAndAlpha;







@end
