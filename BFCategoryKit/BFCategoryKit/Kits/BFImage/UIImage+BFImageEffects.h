//
//  UIImage+BFImageEffects.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BFImageEffects)

- (UIImage *)applyLightEffect;
- (UIImage *)applyExtraLightEffect;
- (UIImage *)applyDarkEffect;
- (UIImage *)applyTintEffectWithColor:(UIColor *)tintColor;

- (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;

@end
