// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>
#import "PSASharedStatuses.h"

@interface PSAErrorParser : NSObject

- (PSASharedStatuses)parseErrorCode:(NSInteger)errorCode;

@end
