// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>
#import "PSABaseRequestHeader.h"
#import "PSABaseRequestData.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSABaseRequest : NSObject

@property (strong) PSABaseRequestHeader *header;
@property (strong) PSABaseRequestData *requestData;

- (NSDictionary<NSString *, id> *)requestDictionary;

//To override
- (NSString *)requestDataKey;

@end

NS_ASSUME_NONNULL_END
