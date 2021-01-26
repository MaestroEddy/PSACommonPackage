// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSACryptUtilsSymmetric : NSObject

+ (nullable PSASecretKey *)generateSecretKey;
+ (nullable NSData *)generateIV;
+ (nullable PSASecretKey *)restoreKeyFromData:(nullable NSData *)secretKey;
+ (nullable NSData *)encryptData:(nullable NSData *)data secretKey:(nullable PSASecretKey *)secretKey iv:(nullable NSData *)iv;
+ (nullable NSData *)decryptData:(nullable NSData *)encryptedData secretKey:(nullable PSASecretKey *)secretKey iv:(nullable NSData *)iv;

@end

NS_ASSUME_NONNULL_END
