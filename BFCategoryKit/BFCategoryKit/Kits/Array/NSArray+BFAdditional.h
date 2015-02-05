//
//  NSArray+BFAdditional.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (BFAdditional)

/*!
 Random object in the array,Uses arc4random_uniform.
 @result Random object
 */
- (id)randomObject;

/*!
 Return new reversed array.
 Use reverseObjectEnumerator if you want to enumerate values in reverse.
 @result Reversed array
 */
- (NSArray *)reverseArray;

/*!
 Remove all instances of NSNull.
 @result New array with NSNull instances removed. Returns self if no NSNull's were found.
 */
- (NSArray *)compact;

/*!
 Convert array to JSON string.
 */
- (NSString *)convertToJSON:(NSJSONWritingOptions)options error:(NSError **)error;


@end
