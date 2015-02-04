//
//  UIImageView+BFLetters.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "UIImageView+BFLetters.h"

@implementation UIImageView (BFLetters)

- (void)setImageWithString:(NSString *)string {
    [self setImageWithString:string color:nil];
}

- (void)setImageWithString:(NSString *)string color:(UIColor *)color {
    NSMutableString *displayString = [NSMutableString stringWithString:@""];
    
    NSMutableArray *words = [[string componentsSeparatedByCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] mutableCopy];
    
    //
    // Get first letter of the first and last word
    //
    if ([words count]) {
        NSString *firstWord = [words firstObject];
        if ([firstWord length] != 0) {
            [displayString appendString:[firstWord substringToIndex:1]];
        }
        
        if ([words count] >= 2) {
            NSString *lastWord = [words lastObject];
            
            while([lastWord length] == 0 && [words count] >= 2) {
                [words removeLastObject];
                lastWord = [words lastObject];
            }
            
            if([words count] > 1) {
                [displayString appendString:[lastWord substringToIndex:1]];
            }
        }
    }
    
    UIColor *backgroundColor = color ? color : [self randomColor];
    
    self.image = [self imageSnapshotFromText:[displayString uppercaseString] backgroundColor:backgroundColor];
}

#pragma mark - Helpers

- (UIFont *)fontForText {
    return [UIFont systemFontOfSize:CGRectGetWidth(self.bounds) * 0.48];
}

- (UIColor *)randomColor {
    
    float red = 0.0;
    while (red < 0.1 || red > 0.84) {
        red = drand48();
    }
    
    float green = 0.0;
    while (green < 0.1 || green > 0.84) {
        green = drand48();
    }
    
    float blue = 0.0;
    while (blue < 0.1 || blue > 0.84) {
        blue = drand48();
    }
    
    return [UIColor colorWithRed:red green:green blue:blue alpha:1.0f];
}

- (UIImage *)imageSnapshotFromText:(NSString *)text backgroundColor:(UIColor *)color {
    
    CGFloat scale = [UIScreen mainScreen].scale;
    
    CGSize size = self.bounds.size;
    if (self.contentMode == UIViewContentModeScaleToFill ||
        self.contentMode == UIViewContentModeScaleAspectFill ||
        self.contentMode == UIViewContentModeScaleAspectFit ||
        self.contentMode == UIViewContentModeRedraw)
    {
        size.width = floorf(size.width * scale) / scale;
        size.height = floorf(size.height * scale) / scale;
    }
    
    UIGraphicsBeginImageContextWithOptions(size, NO, scale);
    
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    //
    // Fill background of context
    //
    CGContextSetFillColorWithColor(context, color.CGColor);
    CGContextFillRect(context, CGRectMake(0, 0, size.width, size.height));
    
    //
    // Draw text in the context
    //
    CGSize textSize = [text sizeWithAttributes:@{NSFontAttributeName:[self fontForText]}];
    CGRect bounds = self.bounds;
    [text drawInRect:CGRectMake(bounds.size.width/2 - textSize.width/2, bounds.size.height/2 - textSize.height/2, textSize.width, textSize.height)
      withAttributes:@{NSFontAttributeName:[self fontForText], NSForegroundColorAttributeName:[UIColor whiteColor]}];
    
    UIImage *snapshot = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return snapshot;
}


@end
