//
//  NSString+BFCrypto.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (BFCrypto)

/* 生成md5字符串 */
- (NSString*)md5;
/* 生成sha1字符串 */
- (NSString*)sha1;

@end
