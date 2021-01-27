// swift-tools-version:5.3

import PackageDescription

let package = Package(name: "PSACommon",
                      platforms: [.iOS(.v10)],
                      products: [.library(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.binaryTarget(name: "PSACommon", 
                                              url: "https://github.com/MaestroEddy/PSACommonPackage/blob/main/PSACommon.xcframework.zip", 
                                              checksum: "28bf2da3446bb30cda02d7d07327ea8943c60e481f164060cfcc3414fb494828")]
                     )
