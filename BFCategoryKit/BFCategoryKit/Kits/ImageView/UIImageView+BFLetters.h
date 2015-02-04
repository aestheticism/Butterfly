//
//  UIImageView+BFLetters.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//
// 可用于联系人列表展示

#import <UIKit/UIKit.h>

@interface UIImageView (BFLetters)

/**
 Sets the image property of the view based on initial text. A random background color is automatically generated.
 
 @param string The string used to generate the initials. This should be a user's full name if available
 */
- (void)setImageWithString:(NSString *)string;

/**
 Sets the image property of the view based on initial text and a specified background color.
 
 @param string The string used to generate the initials. This should be a user's full name if available
 @param color (optional) This optional paramter sets the background of the image. If not provided, a random color will be generated
 */
- (void)setImageWithString:(NSString *)string color:(UIColor *)color;

@end
