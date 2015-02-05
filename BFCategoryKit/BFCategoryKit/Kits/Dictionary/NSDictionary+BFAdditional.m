//
//  NSDictionary+BFAdditional.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSDictionary+BFAdditional.h"

@implementation NSDictionary (BFAdditional)

// 将数组转换成JSON字符串
- (NSString *)convertToJSON:(NSJSONWritingOptions)options error:(NSError *__autoreleasing *)error {
    NSData *data = [NSJSONSerialization dataWithJSONObject:self options:options error:error];
    if (data) return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    return nil;
}

// 去除元素[NSNull null]
- (NSDictionary *)compact {
    NSMutableDictionary *dict = [[NSMutableDictionary alloc] initWithCapacity:[self count]];
    for (id key in self) {
        id obj = [self objectForKey:key];
        if (obj != [NSNull null])
            [dict setObject:obj forKey:key];
    }
    return dict;
}

@end
