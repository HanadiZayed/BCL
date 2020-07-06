//
//  BCLCondition.h
//  SBB
//
// Copyright (c) 2015, Upnext Technologies Sp. z o.o.
// All rights reserved.
//
// This source code is licensed under the BSD 3-Clause License found in the
// LICENSE.txt file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>
#import "BCLTypes.h"

@class BCLBeacon;
@class BCLZone;

@protocol BCLCondition <NSObject>

@required

+ (NSString *) bcl_conditionType;
- (instancetype) initWithParameters:(NSDictionary *)parameters;

- (BOOL) evaluateCondition:(BCLEventType)eventType forBeacon:(BCLBeacon *)beacon;
- (BOOL)evaluateCondition:(BCLEventType)eventType forZone:(BCLZone *)zone;

@end