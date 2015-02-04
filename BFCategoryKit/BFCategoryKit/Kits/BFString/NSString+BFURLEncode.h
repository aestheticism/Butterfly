//
//  NSString+BFURLEncode.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (BFURLEncode)

/* 是否是网址 */
- (BOOL)isUrl;

/* url 编码 */
- (NSString*)urlEncodedString;

/* 将"xxx=yyy&xxx=yyy"类型字符串分离成字典 */
- (NSDictionary*)dictionaryFromQueryString;

@end
