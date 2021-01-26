// swift-tools-version:5.3

import PackageDescription

let package = Package(name: "PSACommon",
                      platforms: [ .iOS(.v10) ],
                      products: [.library(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.target(name: "PSACommon"]
