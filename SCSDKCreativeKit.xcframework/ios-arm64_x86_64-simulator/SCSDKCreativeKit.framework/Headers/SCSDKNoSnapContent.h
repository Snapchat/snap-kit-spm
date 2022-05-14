//
//  SCSDKNoSnapContent.h
//  SCSDKCreativeKit
//
//  Copyright © 2018 Snap, Inc. All rights reserved.
//

#import "SCSDKSnapContent.h"

#import <Foundation/Foundation.h>

@class SCSDKCameraViewState;

NS_ASSUME_NONNULL_BEGIN

/// SCSDKNoSnapContent class is an implementation of the SCSDKSnapContent protocol. It provides a way to model a share
/// into Snapchat without a base image or video content. An attachment URL, a caption, or a sticker can be added
@interface SCSDKNoSnapContent : NSObject <SCSDKSnapContent>

/**
 * @property cameraControl
 * @brief Camera controls when share content to Snapchat client.
 */
@property (nonatomic, strong) SCSDKCameraViewState *_Nullable cameraViewState;

@end

NS_ASSUME_NONNULL_END
