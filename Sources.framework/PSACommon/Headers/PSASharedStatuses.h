// Copyright © Protectoria. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum PSASharedStatuses{
    SensitiveDataDecryptionError = 64,
    HasActiveSession = 60,
    NoAPNSToken = 56,
    NotEnrolled = 52,
    InternalLogicError = 48,
    InternalCommonError = 44,
    ExpiredTransaction = 40,
    TimeOutError = 30,
    NoInternetError = 20,
    Undefined = 0,
    Success = 1
} PSASharedStatuses;

extern NSString * _Nonnull const StatusToString[];

NS_ASSUME_NONNULL_END
