// swift-tools-version:5.3

import PackageDescription

let package = Package(name: "PSACommon",
                      platforms: [.iOS(.v10)],
                      products: [.library(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.binaryTarget(name: "PSACommon", 
                                              url: "https://github.com/MaestroEddy/PSACommonPackage/blob/main/PSACommon.xcframework.zip", 
                                              checksum: "91c5f27e3be95ecdba1f848e863aff35b77ad7b95fb4fd89cc4df034fa933e7b")]
                     )
