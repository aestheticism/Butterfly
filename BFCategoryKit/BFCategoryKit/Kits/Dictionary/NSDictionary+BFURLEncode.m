//
//  NSDictionary+BFURLEncode.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSDictionary+BFURLEncode.h"

@implementation NSDictionary (BFURLEncode)

- (NSString*)getQuery {
    NSMutableArray *pairs = [[NSMutableArray alloc] initWithCapacity:0];
    for (NSString *key in [self keyEnumerator]) {
        id value = [self objectForKey:key];
        
        // TODO: Support more than just NSString and NSNumber
        
        if ([value isKindOfClass:[NSString class]]) {
            [pairs addObject:[NSString stringWithFormat:@"%@=%@",
                              [self urlEncodedWithString:key],
                              [self urlEncodedWithString:(NSString*)value]]];
        } else if ([value isKindOfClass:[NSNumber class]]) {
            [pairs addObject:[NSString stringWithFormat:@"%@=%@",
                              [self urlEncodedWithString:key],
                              [self urlEncodedWithString:[(NSNumber*)value stringValue]]]];
        }
    }
    return [pairs componentsJoinedByString:@"&"];
}

- (NSData*)formEncodedPostData {
    return [[self getQuery] dataUsingEncoding:NSUTF8StringEncoding];
}

- (NSString *)urlEncodedWithString:(NSString *)string {
    NSString *encoded = (__bridge_transfer NSString*)CFURLCreateStringByAddingPercentEscapes(NULL,(__bridge CFStringRef)string, NULL,(CFStringRef)@"!*'();:@&=+$,/?%#[]",kCFStringEncodingUTF8);
    
    return encoded;
}

@end
