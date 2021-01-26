
import PackageDescription

let package = Package(name: "Alamofire",
                      platforms: [ .iOS(.v10) ],
                      products: [.library(name: "PSACommon", targets: ["PSACommon"])],
                      targets: [.target(name: "PSACommon", .testTarget(name: "AlamofireTests", dependencies: ["Alamofire"], path: "Tests")]