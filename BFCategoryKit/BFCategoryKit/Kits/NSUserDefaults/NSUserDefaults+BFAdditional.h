//
//  NSUserDefaults+BFAdditional.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (BFAdditional)

/*!
 Check if user defaults contains key.
 @param key Key
 @result YES if defaults contains key
 */
- (BOOL)containsKey:(NSString *)key;

/*!
 BOOL for key.
 @param key Key
 @param withDefault Default value
 @result BOOL for key
 */
- (BOOL)boolForKey:(id)key withDefault:(BOOL)withDefault;

/*!
 Set BOOL for key.
 @param b Bool
 @param forKey Key
 */
- (void)setBool:(BOOL)b forKey:(NSString *)forKey;

/*!
 Double for key.
 @param key Key
 @param withDefault Value if not in defaults
 @result double for key
 */
- (double)doubleForKey:(NSString *)key withDefault:(double)withDefault;

/*!
 Set double for key.
 @param d Double
 @param forKey Key
 */
- (void)setDouble:(double)d forKey:(NSString *)forKey;

/*!
 Integer for key.
 @param key Key
 @param withDefault Value if not in defaults
 @result Integer for key
 */
- (NSInteger)integerForKey:(NSString *)key withDefault:(NSInteger)withDefault;

/*!
 Set integer for key.
 @param integer Integer
 @param forKey Key
 */
- (void)setInteger:(NSInteger)integer forKey:(NSString *)forKey;

/*!
 Object for key.
 @param key Key
 @param withDefault Value if not in defaults
 */
- (id)objectForKey:(NSString *)key withDefault:(id)withDefault;

/*!
 Set object (stored as NSData) for key.
 @param obj Object (should be NSCoding)
 @param forKey Key
 @result Object from data for key
 */
- (void)setObjectAsData:(id)obj forKey:(NSString *)forKey;

/*!
 Object from data for key.
 @param key Key
 @result Object from data for key
 */
- (id)objectFromDataForKey:(NSString *)key;

@end
