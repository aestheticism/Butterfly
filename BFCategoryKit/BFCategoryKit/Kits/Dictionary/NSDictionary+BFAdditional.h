//
//  NSDictionary+BFAdditional.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (BFAdditional)

/*!
 Create JSON string for dictionary.
 */
- (NSString *)convertToJSON:(NSJSONWritingOptions)options error:(NSError **)error;

/*!
 @result Dictionary without entries for keys with NSNull values
 */
- (NSDictionary *)compact;

@end
