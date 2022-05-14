//
//  SCSDKSnapPhoto.h
//  SCSDKCreativeKit
//
//  Copyright © 2017 Snap, Inc. All rights reserved.
//

#import "SCSDKCreativeKitModelValidating.h"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// This class lets you initialize images that users can share to Snapchat
@interface SCSDKSnapPhoto : NSObject <SCSDKCreativeKitModelValidating>

/**
 * @property image
 * @brief UIImage to be used as image for a Snap.
 */
@property (nonatomic, strong, readonly) UIImage *_Nullable image;

/**
 * @property imageUrl
 * @brief File URL to the file to be used as image for a Snap.
 */
@property (nonatomic, copy, readonly) NSURL *_Nullable imageUrl;

/**
 * Initializes an SCSDKSnapPhoto instance.
 *
 * @param image UIImage to be used as a Snap.
 * @return An SCSDKSnapPhoto instance initialized with image.
 */
- (instancetype _Nonnull)initWithImage:(UIImage *)image;

/**
 * Initializes an SCSDKSnapPhoto instance.
 *
 * @param imageUrl NSURL of an image file on disk to be used as a Snap.
 * @return An SCSDKSnapPhoto instance initialized with imageUrl.
 */
- (instancetype _Nonnull)initWithImageUrl:(NSURL *)imageUrl;

@end

NS_ASSUME_NONNULL_END
