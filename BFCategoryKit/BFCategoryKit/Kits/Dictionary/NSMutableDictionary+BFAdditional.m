//
//  NSMutableDictionary+BFAdditional.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSMutableDictionary+BFAdditional.h"

@implementation NSMutableDictionary (BFAdditional)

// 添加double类型元素
- (void)setDouble:(double)d forKey:(id)key {
    [self setObject:[NSNumber numberWithDouble:d] forKey:key];
}

// 添加整形元素
- (void)setInteger:(NSInteger)n forKey:(id)key {
    [self setObject:[NSNumber numberWithInteger:n] forKey:key];
}

// 添加bool元素
- (void)setBool:(BOOL)b forKey:(id)key {
    [self setObject:[NSNumber numberWithBool:b] forKey:key];
}

// 添加元素,如果为空,则替换为[NSNull null]
- (void)setObjectMaybeNil:(id)object forKey:(id)key {
    if (!object) object = [NSNull null];
    [self setObject:object forKey:key];
}

// 去除[NSNull null]元素
- (void)mutableCompact {
    NSMutableArray *keysToRemove = [[NSMutableArray alloc] init];
    for (id key in self) {
        if ([[self objectForKey:key] isEqual:[NSNull null]])
            [keysToRemove addObject:key];
    }
    [self removeObjectsForKeys:keysToRemove];
}

@end
