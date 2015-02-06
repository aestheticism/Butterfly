//
//  UIBezierPath+BFSymbol.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/6.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <UIKit/UIKit.h>

// Direction
typedef enum {
    kBFBezierPathArrowDirectionNone  = 0,
    kBFBezierPathArrowDirectionRight = 1 << 0,
    kBFBezierPathArrowDirectionLeft  = 1 << 1,
    kBFBezierPathArrowDirectionUp    = 1 << 2,
    kBFBezierPathArrowDirectionDown  = 1 << 3
}BFBezierPathArrowDirection;

@interface UIBezierPath (BFSymbol)

/* plus symbol path */
+ (UIBezierPath *)bf_plusSymbolPathWithRect:(CGRect)rect
                                      scale:(CGFloat)scale;


/* minus symbol path */
+ (UIBezierPath *)bf_minusSymbolPathWithRect:(CGRect)rect
                                       scale:(CGFloat)scale;

/* check symbol path */
+ (UIBezierPath *)bf_checkSymbolPathWithRect:(CGRect)rect
                                       scale:(CGFloat)scale
                                       thick:(CGFloat)thick;

/* cross symbol path */
+ (UIBezierPath *)bf_crossSymbolPathWithRect:(CGRect)rect
                                       scale:(CGFloat)scale
                                       thick:(CGFloat)thick;

/* arrow symbol path */
+ (UIBezierPath *)bf_arrowSymbolPathWithRect:(CGRect)rect
                                       scale:(CGFloat)scale
                                       thick:(CGFloat)thick
                                   direction:(BFBezierPathArrowDirection)direction;

/* pencil symbol path */
+ (UIBezierPath *)bf_pencilSymbolPathWithRect:(CGRect)rect
                                        scale:(CGFloat)scale
                                        thick:(CGFloat)thick;

@end
