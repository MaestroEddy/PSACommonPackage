// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSASessionArtifact : NSObject

- (instancetype)initWithType:(NSNumber *)type;

- (nullable NSDictionary<NSString *, id> *)requestDictionary;

- (unsigned int)getHashCode;

- (nullable NSData *)getHashCodeData;

- (int)hashFor:(NSString *)source;

@end

NS_ASSUME_NONNULL_END
