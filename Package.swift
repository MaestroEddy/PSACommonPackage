// swift-tools-version:5.3

import PackageDescription

let package = Package(name: "PSACommon",
                      platforms: [.iOS(.v10)],
                      products: [.library(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.binaryTarget(name: "PSACommon", 
                                              url: "https://github.com/MaestroEddy/PSACommonPackage/blob/main/PSACommon.xcframework.zip", 
                                              checksum: "06587d9d6d16eb51cd962e3a0d417371f03b830d083840f8bf0e75f4df603cef")]
                     )
