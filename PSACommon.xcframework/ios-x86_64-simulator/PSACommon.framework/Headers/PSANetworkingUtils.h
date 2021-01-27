// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSANetworkingUtils : NSObject

+ (void)runDataTaskWithURLRequest:(nullable NSURLRequest *)urlRequest completion:(void (^)(NSData *, NSError *))completion;
+ (nullable NSURLRequest *)createRequestWithURL:(nullable NSURL *)url
                                     httpMethod:(NSString *)httpMethod
                                       httpBody:(NSData *)httpBody
                                    httpHeaders:(NSDictionary<NSString*, NSString*> *)httpHeaders;

@end

NS_ASSUME_NONNULL_END
