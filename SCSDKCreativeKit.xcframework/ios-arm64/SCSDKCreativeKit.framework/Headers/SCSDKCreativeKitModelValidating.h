//
//  SCSDKCreativeKitModelValidating.h
//  SCSDKCreativeKit
//
//  Created by Hongjai Cho on 1/25/19.
//  Copyright © 2019 Snap, Inc. All rights reserved.
//

#import "SCSDKSnapErrorCode.h"

#import <Foundation/Foundation.h>

@protocol SCSDKCreativeKitModelValidating <NSObject>

- (SCSDKCreativeKitErrorCode)isModelValid;

@end
