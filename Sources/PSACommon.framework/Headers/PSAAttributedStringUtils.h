// Copyright © Protectoria. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface PSAAttributedStringUtils : NSObject
+ (NSAttributedString *)createFromAttributedString:(NSAttributedString *)attributedString inRange:(NSRange)range withColor:(UIColor *)color;
@end
