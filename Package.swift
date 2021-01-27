// swift-tools-version:5.3

import PackageDescription

let package = Package(name: "PSACommon",
                      platforms: [.iOS(.v10)],
                      products: [.executable(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.binaryTarget(name: "PSACommon", 
                                              url: "https://github.com/Okaythis/PSACommonIOS/raw/f9ceec9031fce5e90c0cb8b99d2aa8cc58601e37/PSACommonSDK.zip", 
                                              checksum: "6a06e243ae8f9108184b75fbf550bc0154d02ec1")]
                     )
