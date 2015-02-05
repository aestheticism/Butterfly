//
//  NSString+BFURLEncode.m
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import "NSString+BFURLEncode.h"

@implementation NSString (BFURLEncode)

// Is Valid URL
- (BOOL)isUrl {
    NSString *regex =@"(http|https)://((\\w)*|([0-9]*)|([-|_])*)+([\\.|/]((\\w)*|([0-9]*)|([-|_])*))+";
    NSPredicate *urlTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",regex];
    return [urlTest evaluateWithObject:self];
}

- (NSString*)urlEncodedString {
    NSString *encoded = (__bridge_transfer NSString*)CFURLCreateStringByAddingPercentEscapes(NULL,
                                                     (__bridge CFStringRef)self, NULL,
                                                     (CFStringRef)@"!*'();:@&=+$,/?%#[]",kCFStringEncodingUTF8);
    return encoded;
}

- (NSDictionary*)dictionaryFromQueryString {
    NSMutableDictionary *mutableDict = [[NSMutableDictionary alloc] initWithCapacity:0];
    
    NSArray *pairs = [self componentsSeparatedByString:@"&"];
    for (NSString *pair in pairs) {
        NSArray *kv = [pair componentsSeparatedByString:@"="];
        if (kv.count == 2) {
            NSString *key = [(NSString*)[kv objectAtIndex:0] urlEncodedString];
            NSString *value = [(NSString*)[kv objectAtIndex:1] urlEncodedString];
            [mutableDict setValue:value forKey:key];
        }
    }
    
    return [[NSDictionary alloc] initWithDictionary:mutableDict];
}

@end
