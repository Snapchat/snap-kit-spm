//
//  SCSDKPhotoSnapContent.h
//  SCSDKCreativeKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import "SCSDKSnapContent.h"

#import <Foundation/Foundation.h>

@class SCSDKSnapPhoto;

NS_ASSUME_NONNULL_BEGIN

/// SCSDKPhotoSnapContent is an implementation of the SCSDKSnapContent protocol. It provides a way to model a photo Snap
/// for sharing to Snapchat
@interface SCSDKPhotoSnapContent : NSObject <SCSDKSnapContent>

/**
 * @property snapPhoto
 * @brief SCSDKSnapPhoto instance containing image data required for creating a still Snap.
 */
@property (nonatomic, strong, readonly) SCSDKSnapPhoto *snapPhoto;

/**
 * Initializes an SCSDKPhotoSnapContent instance.
 *
 * @param snapPhoto SCSDKSnapPhoto instance containing image data to be used as a Snap.
 * @return An SCSDKPhotoSnapContent instance initialized with snapPhoto.
 */
- (instancetype)initWithSnapPhoto:(SCSDKSnapPhoto *)snapPhoto;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
