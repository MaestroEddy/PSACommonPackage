// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSACryptUtilsB64 : NSObject

+ (nullable NSData *)decodeString:(nullable NSString *)string;
+ (nullable NSData *)decodeData:(nullable NSData *)data;
+ (nullable NSData *)encodeData:(nullable NSData *)data;
+ (nullable NSString *)encodeDataToString:(nullable NSData *)data;
+ (nullable NSString *)encodeString:(nullable NSString *)string;

@end

NS_ASSUME_NONNULL_END
