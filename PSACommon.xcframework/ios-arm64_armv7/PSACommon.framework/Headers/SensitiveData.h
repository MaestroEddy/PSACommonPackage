// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"
NS_ASSUME_NONNULL_BEGIN
@interface SensitiveData : NSObject
@property (strong, readonly, nullable) PSASecretKey *prvClient;
@property (strong, readonly, nullable) PSASecretKey *pubSps;
@property (copy, readonly, nullable) NSString *appInstanceId;
- (instancetype)initWithPrvClient:(PSASecretKey *)prvClient
                           pubSps:(PSASecretKey *)pubSps
                    appInstanceId:(nullable NSString *)appInstanceId;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (NSDictionary *)dictionary;
@end
NS_ASSUME_NONNULL_END
