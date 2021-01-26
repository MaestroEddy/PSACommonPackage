// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kPSASecureStorageHost;
extern NSString *const kPSASecureStorageWebSocketHost;
extern NSString *const kPSASecureStoragePubPssBase64;
extern NSString *const kPSASecureStorageInstallationId;
extern NSString *const kPSASecureStorageEnrollmentId;
extern NSString *const kPSASecureStorageExternalId;
extern NSString *const kPSASecureStorageSkPSS;
extern NSString *const kPSASecureStorageAppPNS;
extern NSString *const kPSASecureStoragePublicPsaBase64;
extern NSString *const kPSASecureStoragePrivatePsaBase64;
extern NSString *const kPSASecureStorageSensitiveDataEncrypted;
extern NSString *const kPSASecureStorageSkSessionEncrypted;
extern NSString *const kPSASecureStorageHttpHeaders;

@interface PSASecureStorage : NSObject

+ (nullable NSString *)stringForKey:(NSString *)key;
+ (void)setString:(nullable NSString *)string forKey:(NSString *)key;

+ (nullable NSData *)dataForKey:(NSString *)key;
+ (void)setData:(nullable NSData *)data forKey:(NSString *)key;

+ (void)reset;

@end

NS_ASSUME_NONNULL_END
