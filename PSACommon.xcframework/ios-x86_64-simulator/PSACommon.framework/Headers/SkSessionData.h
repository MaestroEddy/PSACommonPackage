// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"
NS_ASSUME_NONNULL_BEGIN
@interface SkSessionData : NSObject
@property (strong, readonly, nullable) PSASecretKey *skStorage;
@property (strong, readonly, nullable) NSData *nIV;
- (instancetype)initWithSkStorage:(PSASecretKey *)skStorage nIV:(NSData *)nIV;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionary;
@end
NS_ASSUME_NONNULL_END
