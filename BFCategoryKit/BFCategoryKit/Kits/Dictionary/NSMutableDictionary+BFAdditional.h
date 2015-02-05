//
//  NSMutableDictionary+BFAdditional.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (BFAdditional)
/*!
 Set double value.
 
 @param d Double
 @param forKey Key
 */
- (void)setDouble:(double)d forKey:(id)forKey;

/*!
 Set integer value.
 
 @param n Integer
 @param forKey Key
 */
- (void)setInteger:(NSInteger)n forKey:(id)forKey;

/*!
 Set bool.
 
 @param b Bool
 @param forKey Key
 */
- (void)setBool:(BOOL)b forKey:(id)forKey;

/*!
 Set object or [NSNull null] if nil.
 
 @param object Object
 @param forKey Key
 */
- (void)setObjectMaybeNil:(id)object forKey:(id)forKey;

/*!
 Compact.
 Remove all value with instances NSNull.
 */
- (void)mutableCompact;


@end
