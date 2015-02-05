//
//  NSArray+BFAdditional.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSArray+BFAdditional.h"

@implementation NSArray (BFAdditional)

// 获取随机元素
- (id)randomObject {
    
    if (self.count == 0) return nil;
    NSUInteger count = [self count];
    NSAssert(count <= UINT32_MAX, @"Array size is greater than rand supports");
    NSUInteger index = arc4random_uniform((int32_t)count);
    
    return [self objectAtIndex:index];
}

// 倒序数组元素
- (NSArray *)reverseArray {
    NSMutableArray *array = [NSMutableArray arrayWithCapacity:[self count]];
    for(id obj in [self reverseObjectEnumerator]) {
        [array addObject:obj];
    }
    return array;
}

// 去除[NSNull null]元素
- (NSArray *)compact {
    if ([self count] == 0) return self;
    NSMutableArray *array = [[NSMutableArray alloc] initWithCapacity:[self count]];
    BOOL found = NO;
    for(id obj in self) {
        if (![obj isEqual:[NSNull null]]) [array addObject:obj];
        else found = YES;
    }
    if (found) {
        return array;
    } else {
        // No NSNulls were found so release array copy and return self
        return self;
    }  
}

// 将数组转换成JSON字符串
- (NSString *)convertToJSON:(NSJSONWritingOptions)options error:(NSError *__autoreleasing *)error {
    NSData *data = [NSJSONSerialization dataWithJSONObject:self options:options error:error];
    if (data) return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    return nil;
}

@end
