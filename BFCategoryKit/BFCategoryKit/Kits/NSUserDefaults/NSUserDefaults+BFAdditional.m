//
//  NSUserDefaults+BFAdditional.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSUserDefaults+BFAdditional.h"

@implementation NSUserDefaults (BFAdditional)

- (BOOL)containsKey:(NSString *)key {
    id value = [self objectForKey:key];
    return (value != nil);
}

- (BOOL)boolForKey:(id)key withDefault:(BOOL)defaultValue {
    id value = [self objectForKey:key];
    if (!value) return defaultValue;
    return [value boolValue];
}

- (void)setBool:(BOOL)b forKey:(NSString *)key {
    [self setObject:[NSNumber numberWithBool:b] forKey:key];
}

- (double)doubleForKey:(NSString *)key withDefault:(double)defaultValue {
    id value = [self objectForKey:key];
    if (!value) return defaultValue;
    return [value doubleValue];
}

- (void)setDouble:(double)d forKey:(NSString *)key {
    [self setObject:[NSNumber numberWithDouble:d] forKey:key];
}

- (NSInteger)integerForKey:(NSString *)key withDefault:(NSInteger)defaultValue {
    id value = [self objectForKey:key];
    if (!value) return defaultValue;
    return [value integerValue];
}

- (void)setInteger:(NSInteger)integer forKey:(NSString *)key {
    [self setObject:[NSNumber numberWithInteger:integer] forKey:key];
}

- (void)setObjectAsData:(id)obj forKey:(NSString *)key {
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:obj];
    if (!data) {
        [NSException raise:NSInvalidArgumentException format:@"Invalid data for key: %@", key];
        return;
    }
    [self setObject:data forKey:key];
}

- (id)objectFromDataForKey:(NSString *)key {
    NSData *data = [self objectForKey:key];
    if (!data) return nil;
    return [NSKeyedUnarchiver unarchiveObjectWithData:data];
}

- (id)objectForKey:(NSString *)key withDefault:(id)defaultValue {
    id value = [self objectForKey:key];
    if (!value) return defaultValue;
    return value;
}

@end
