//
//  SCSDKSnapVideo.h
//  SCSDKCreativeKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import "SCSDKCreativeKitModelValidating.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// This class lets you initialize videos that users can share to Snapchat.
@interface SCSDKSnapVideo : NSObject <SCSDKCreativeKitModelValidating>

/**
 * @property videoUrl
 * @brief File URL to the file to be used as video for a Snap.
 */
@property (nonatomic, copy, readonly) NSURL *videoUrl;

/**
 * Initializes an SCSDKSnapVideo instance.
 *
 * @param videoUrl NSURL of a video file on disk to be used as a Snap.
 * @return An SCSDKSnapVideo instance initialized with videoUrl.
 */
- (instancetype)initWithVideoUrl:(NSURL *)videoUrl;

@end

NS_ASSUME_NONNULL_END
