//
//  NSMutableArray+BFAdditional.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSMutableArray+BFAdditional.h"

@implementation NSMutableArray (BFAdditional)

// 插入元素
- (void)insertObjects:(NSArray *)objects atIndex:(NSInteger)index {
    NSIndexSet *indexes = [[NSIndexSet alloc] initWithIndexesInRange:NSMakeRange(index, [objects count])];
    [self insertObjects:objects atIndexes:indexes];
}

// 去除[NSNull null]元素
- (void)mutableCompact {
    [self removeObjectIdenticalTo:[NSNull null]];
}

@end
