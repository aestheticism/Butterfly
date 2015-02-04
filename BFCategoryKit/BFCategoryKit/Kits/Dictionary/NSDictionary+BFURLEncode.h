//
//  NSDictionary+BFURLEncode.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (BFURLEncode)

- (NSString*)getQuery;
- (NSData*)formEncodedPostData;

@end
