// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>
#import "PSAKeyPair.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSACryptUtilsAsymmetric : NSObject

+ (nullable PSASecretKey *)restoreSecretKeyFromBase64String:(nullable NSString *)base64;
+ (nullable PSASecretKey *)restoreSecretKeyFromData:(nullable NSData *)data;

+ (nullable NSData *)decryptData:(nullable NSData *)encryptedData withPrivateKey:(nullable PSASecretKey *)privateKey;
+ (nullable NSData *)encryptData:(nullable NSData *)data withPublicKey:(nullable PSASecretKey *)publicKey;

+ (nullable PSAKeyPair *)generateKeyPair;
+ (nullable PSAKeyPair *)generateKeyPairDh;
+ (nullable PSASecretKey *)generateSharedSecretWithPrivateKey:(nullable PSASecretKey *)privateKey publicKey:(nullable PSASecretKey *)publicKey;

@end

NS_ASSUME_NONNULL_END
