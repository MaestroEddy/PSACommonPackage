// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSACommonData : NSObject

+ (nullable NSString *)host;
+ (void)setHost:(nullable NSString *)host;

+ (nullable NSString *)webSocketHost;
+ (void)setWebSocketHost:(nullable NSString *)webSocketHost;

+ (nullable NSString *)pubPssBase64;
+ (void)setPubPssBase64:(nullable NSString *)pubPssBase64;

+ (nullable NSString *)installationId;
+ (void)setInstallationId:(nullable NSString *)installationId;

+ (nullable NSString *)enrollmentId;
+ (void)setEnrollmentId:(nullable NSString *)enrollmentId;

+ (nullable NSString *)externalId;
+ (void)setExternalId:(nullable NSString *)externalId;

+ (nullable NSString *)skPSS;
+ (void)setSkPSS:(nullable NSString *)skPSS;

+ (nullable NSString *)appPNS;
+ (void)setAppPNS:(nullable NSString *)appPNS;

+ (NSDictionary<NSString *, NSString *> *)httpHeaders;
+ (void)setHttpHeaders:(nullable NSDictionary<NSString *, NSString *> *)httpHeaders;

+ (nullable NSData *)sensitiveDataEncrypted;
+ (void)setSensitiveDataEncrypted:(nullable NSData *)sensitiveDataEncrypted;

+ (nullable NSData *)skSessionEncrypted;
+ (void)setSkSessionEncrypted:(nullable NSData *)skStorageEncrypted;

@end

NS_ASSUME_NONNULL_END
