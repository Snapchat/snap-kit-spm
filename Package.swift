// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SnapSDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "SnapSDK",
            targets: ["SCSDKCoreKit", "SCSDKLoginKit", "SCSDKCreativeKit"]),
        .library(
            name: "SCSDKCoreKit",
            targets: ["SCSDKCoreKit"]),
        .library(
            name: "SCSDKLoginKit",
            targets: ["SCSDKLoginKit"]),
        .library(
            name: "SCSDKCreativeKit",
            targets: ["SCSDKCreativeKit"])
    ],
    targets: [
        .binaryTarget(
            name: "SCSDKCoreKit",
            path: "SCSDKCoreKit.xcframework"
        ),
        .binaryTarget(
            name: "SCSDKLoginKit",
            path: "SCSDKLoginKit.xcframework"
        ),
        .binaryTarget(
            name: "SCSDKCreativeKit",
            path: "SCSDKCreativeKit.xcframework"
        ),
    ]
)
