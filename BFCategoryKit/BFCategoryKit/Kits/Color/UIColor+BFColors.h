//
//  UIColor+BFColors.h
//  BFCategoryKit
//
//  Created by 蝴蝶 on 15/2/3.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BFColors)

/*-----------------------------------------------------------------------------------------------*/
/* Color from Hex/RGBA/HSBA */
/*-----------------------------------------------------------------------------------------------*/

/**
 Creates a UIColor from a Hex representation string
 @param hexString   Hex string that looks like @"#FF0000" or @"FF0000"
 @return    UIColor
 */
+ (UIColor *)colorFromHexString:(NSString *)hexString;

/**
 Creates a UIColor from an array of 4 NSNumbers (r,g,b,a)
 @param rgbaArray   4 NSNumbers for rgba between 0 - 1
 @return    UIColor
 */
+ (UIColor *)colorFromRGBAArray:(NSArray *)rgbaArray;

/**
 Creates a UIColor from a dictionary of 4 NSNumbers
 Keys: @"r",@"g",@"b",@"a"
 @param rgbaDictionary   4 NSNumbers for rgba between 0 - 1
 @return    UIColor
 */
+ (UIColor *)colorFromRGBADictionary:(NSDictionary *)rgbaDict;

/**
 Creates a UIColor from 3 NSNumbers(r,g,b)
 @param red,green,blue   CGFloat for r,g,b between 0 - 255
 @return    UIColor
 */
+ (UIColor *)colorWithRGB:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue;

/**
 Creates a UIColor from 3 NSNumbers(r,g,b)
 @param red,green,blue    CGFloat for r,g,b between 0 - 255
 @param alpha  CGFloat for alpha between 0-1
 @return UIColor
 */
+ (UIColor *)colorWithRGB:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue alpha:(CGFloat)alpha;


/**
 Creates a UIColor from an array of 4 NSNumbers (h,s,b,a)
 @param hsbaArray   4 NSNumbers for rgba between 0 - 1
 @return    UIColor
 */
+ (UIColor *)colorFromHSBAArray:(NSArray *)hsbaArray;

/**
 Creates a UIColor from a dictionary of 4 NSNumbers
 Keys: @"h",@"s",@"b",@"a"
 @param hsbaDictionary   4 NSNumbers for rgba between 0 - 1
 @return    UIColor
 */
+ (UIColor *)colorFromHSBADictionary:(NSDictionary *)hsbaDict;


/*-----------------------------------------------------------------------------------------------*/
/* Hex/RGBA/HSBA from Color */
/*-----------------------------------------------------------------------------------------------*/


/**
 Creates a Hex representation from a UIColor
 @return    NSString
 */
- (NSString *)hexString;

/**
 Creates an array of 4 NSNumbers representing the float values of r, g, b, a in that order.
 @return    NSArray
 */
- (NSArray *)rgbaArray;

/**
 Creates an array of 4 NSNumbers representing the float values of h, s, b, a in that order.
 @return    NSArray
 */
- (NSArray *)hsbaArray;

/**
 Creates a dictionary of 4 NSNumbers representing float values with keys: "r", "g", "b", "a"
 @return    NSDictionary
 */
- (NSDictionary *)rgbaDictionary;

/**
 Creates a dictionary of 4 NSNumbers representing float values with keys: "h", "s", "b", "a"
 @return    NSDictionary
 */
- (NSDictionary *)hsbaDictionary;


/*-----------------------------------------------------------------------------------------------*/
/* Random Color */
/*-----------------------------------------------------------------------------------------------*/

/**
 Creates a random color
 @return    UIColor
 */
+ (UIColor *)randomColor;

/**
 Creates a random color with random alpha
 @return    UIColor
 */
+ (UIColor *)randomColorAndAlpha;

/*-----------------------------------------------------------------------------------------------*/
/* Gradient Color */
/*-----------------------------------------------------------------------------------------------*/

/**
 Creates a gradient color
 @param c1,c2
 @param height
 @return UIColor
 */
+ (UIColor*)gradientFromColor:(UIColor*)c1 toColor:(UIColor*)c2 withHeight:(int)height;

#pragma mark- 

/*-----------------------------------------------------------------------------------------------*/
/* Contrasting an opposite Color */
/*-----------------------------------------------------------------------------------------------*/

/**
 Creates either [UIColor whiteColor] or [UIColor blackColor] depending on if the color this method is run on is dark or light.
 @return    UIColor
 */
- (UIColor *)blackOrWhiteContrastingColor;

/**
 Creates a opposite color.
 @return    UIColor
 */
- (UIColor *)oppositeColor;


/*-----------------------------------------------------------------------------------------------*/
/* System Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)infoBlueColor;
+ (UIColor *)successColor;
+ (UIColor *)warningColor;
+ (UIColor *)dangerColor;

/*-----------------------------------------------------------------------------------------------*/
/* White Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)antiqueWhiteColor;
+ (UIColor *)oldLaceColor;
+ (UIColor *)ivoryColor;
+ (UIColor *)seashellColor;
+ (UIColor *)ghostWhiteColor;
+ (UIColor *)snowColor;
+ (UIColor *)linenColor;

/*-----------------------------------------------------------------------------------------------*/
/* Gray Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)black25PercentColor;
+ (UIColor *)black50PercentColor;
+ (UIColor *)black75PercentColor;
+ (UIColor *)warmGrayColor;
+ (UIColor *)coolGrayColor;
+ (UIColor *)charcoalColor;

/*-----------------------------------------------------------------------------------------------*/
/* blue Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)tealColor;
+ (UIColor *)steelBlueColor;
+ (UIColor *)robinEggColor;
+ (UIColor *)pastelBlueColor;
+ (UIColor *)turquoiseColor;
+ (UIColor *)skyBlueColor;
+ (UIColor *)indigoColor;
+ (UIColor *)denimColor;
+ (UIColor *)blueberryColor;
+ (UIColor *)cornflowerColor;
+ (UIColor *)babyBlueColor;
+ (UIColor *)midnightBlueColor;
+ (UIColor *)fadedBlueColor;
+ (UIColor *)icebergColor;
+ (UIColor *)waveColor;

/*-----------------------------------------------------------------------------------------------*/
/* Green Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)emeraldColor;
+ (UIColor *)grassColor;
+ (UIColor *)pastelGreenColor;
+ (UIColor *)seafoamColor;
+ (UIColor *)paleGreenColor;
+ (UIColor *)cactusGreenColor;
+ (UIColor *)chartreuseColor;
+ (UIColor *)hollyGreenColor;
+ (UIColor *)oliveColor;
+ (UIColor *)oliveDrabColor;
+ (UIColor *)moneyGreenColor;
+ (UIColor *)honeydewColor;
+ (UIColor *)limeColor;
+ (UIColor *)cardTableColor;

/*-----------------------------------------------------------------------------------------------*/
/* Red Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)salmonColor;
+ (UIColor *)brickRedColor;
+ (UIColor *)easterPinkColor;
+ (UIColor *)grapefruitColor;
+ (UIColor *)pinkColor;
+ (UIColor *)indianRedColor;
+ (UIColor *)strawberryColor;
+ (UIColor *)coralColor;
+ (UIColor *)maroonColor;
+ (UIColor *)watermelonColor;
+ (UIColor *)tomatoColor;
+ (UIColor *)pinkLipstickColor;
+ (UIColor *)paleRoseColor;
+ (UIColor *)crimsonColor;

/*-----------------------------------------------------------------------------------------------*/
/* purple Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)eggplantColor;
+ (UIColor *)pastelPurpleColor;
+ (UIColor *)palePurpleColor;
+ (UIColor *)coolPurpleColor;
+ (UIColor *)violetColor;
+ (UIColor *)plumColor;
+ (UIColor *)lavenderColor;
+ (UIColor *)raspberryColor;
+ (UIColor *)fuschiaColor;
+ (UIColor *)grapeColor;
+ (UIColor *)periwinkleColor;
+ (UIColor *)orchidColor;

/*-----------------------------------------------------------------------------------------------*/
/* Yellow Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)goldenrodColor;
+ (UIColor *)yellowGreenColor;
+ (UIColor *)bananaColor;
+ (UIColor *)mustardColor;
+ (UIColor *)buttermilkColor;
+ (UIColor *)goldColor;
+ (UIColor *)creamColor;
+ (UIColor *)lightCreamColor;
+ (UIColor *)wheatColor;
+ (UIColor *)beigeColor;

/*-----------------------------------------------------------------------------------------------*/
/* Orange Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)peachColor;
+ (UIColor *)burntOrangeColor;
+ (UIColor *)pastelOrangeColor;
+ (UIColor *)cantaloupeColor;
+ (UIColor *)carrotColor;
+ (UIColor *)mandarinColor;

/*-----------------------------------------------------------------------------------------------*/
/* Brown Colors */
/*-----------------------------------------------------------------------------------------------*/
+ (UIColor *)chiliPowderColor;
+ (UIColor *)burntSiennaColor;
+ (UIColor *)chocolateColor;
+ (UIColor *)coffeeColor;
+ (UIColor *)cinnamonColor;
+ (UIColor *)almondColor;
+ (UIColor *)eggshellColor;
+ (UIColor *)sandColor;
+ (UIColor *)mudColor;
+ (UIColor *)siennaColor;
+ (UIColor *)dustColor;

@end
