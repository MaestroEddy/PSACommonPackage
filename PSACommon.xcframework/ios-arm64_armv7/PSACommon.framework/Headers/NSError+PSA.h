// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const PSAErrorDomain;
extern NSInteger const PSAErrorDefaultCode;

@interface NSError (PSA)

+ (instancetype)error;
+ (instancetype)errorWithCode:(NSInteger)code
              underlyingError:(nullable NSError *)underlyingError
         localizedDescription:(nullable NSString *)localizedDescription;

@end

NS_ASSUME_NONNULL_END
