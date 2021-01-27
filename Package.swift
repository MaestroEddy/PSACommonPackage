// swift-tools-version:5.3

import PackageDescription

let package = Package(name: "PSACommon",
                      platforms: [.iOS(.v10)],
                      products: [.library(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.binaryTarget(name: "PSACommon", 
                                              url: "https://github.com/Okaythis/PSACommonIOS/raw/f9ceec9031fce5e90c0cb8b99d2aa8cc58601e37/PSACommonSDK.zip", 
                                              checksum: "c23b1155d220a4cc4c29433bbbd2542d7e1244504f9cce8d26d0db759122f8b5")]
                     )
