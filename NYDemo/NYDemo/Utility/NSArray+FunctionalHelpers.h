//
//  NSArray+FunctionalHelpers.h
//  NYDemo
//
//  Created by apple on 7/18/18.
//  Copyright © 2018 Gaurav. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface NSArray (FunctionalHelpers)
- (NSMutableArray*)mapWithBlock:(id (^)(id))block;

@end

