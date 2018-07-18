//
//  Theme.h
//  NYDemo
//
//  Created by apple on 7/17/18.
//  Copyright © 2018 Gaurav. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface Theme : NSObject

+ (NSString *)date_monthDayYear:(NSDate *)date;

@end


@interface UIFont (Helpers)

+ (UIFont *)primaryFont;
+ (UIFont *)georgiaFontOfSize:(CGFloat)size;

@end

@interface UIColor (Helpers)

+ (UIColor *)primaryGrayColor;
+ (UIColor *)primaryLightGrayColor;
+ (UIColor *)primaryDarkGrayColor;

@end


