//
//  NSMutableArray+BFAdditional.h
//  BFCategoryKit
//
//  Created by hudie on 15/2/5.
//  Copyright (c) 2015年 蝴蝶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (BFAdditional)

/*!
 Insert objects at index.
 
 @param objects Objects to insert
 @param index Index to insert at
 */
- (void)insertObjects:(NSArray *)objects atIndex:(NSInteger)index;

/*!
 Compact.
 Remove all instances NSNull.
 */
- (void)mutableCompact;

@end
