// Copyright © Protectoria. All rights reserved.

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (PSA)

- (nullable NSNumber *)integerValueForKey:(NSString *)key;
- (nullable UIColor *)colorValueForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
