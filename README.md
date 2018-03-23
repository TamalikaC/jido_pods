# How to save AR sessions with Jido

The Jido API allows you to add persistence to your augmented reality app. Using Jido, users can save, reload and share an AR session so that it will always appear in the exact same physical location.

## SDK installation with CocoaPods
Jido swift SDK is available for installation using CocoaPods. (If you have not used CocoaPods before, [here](https://www.raywenderlich.com/156971/cocoapods-tutorial-swift-getting-started) is a tutorial to get you started). Installation of the Jido CocoaPod will install the 3 pods that Jido depends upon: Alamofire, SwiftyJSON, and AWSS3.

Currently, the the Jido swift SDK, referred to as MapsyncLib, uses a local podspec file for installation. The latest MapsyncLib.podspec file can be found in the [LightSaver Sample App](https://github.com/jidomaps/sample_lightsaver). Download the [MapsyncLib.podsec](https://github.com/jidomaps/sample_lightsaver/blob/master/MapsyncLib.podspec) file there and move it to the top level directory of your project.

In the terminal, navigate to your project directory and initialize a podfile if you have not done so already.

```pod init```

Then edit the produced podfile to include Jido as well as the 3 dependencies. In the end, your podfile should look something like this:

```
platform :ios, '11.0'

target 'InsertYourTarget' do
  use_frameworks!

  # Pods for your Target
  pod ‘MapsyncLib', :podspec => './MapsyncLib.podspec'
  
end
```

Finally, install the pod with

```pod install```


## Running a map session

Jido runs in the background during an ARSession to handle data management and synchronization with the API. Three steps are required to start a map session in your app. 

First, you must import the Jido SDK in the ViewController that implements your ARSessionDelegate.

```import MapsyncLib```

Next, you must initialize a unique MapSession.

```MapSession.init(arSession: sceneView.session, mapMode: mapMode, userID: userID!, mapID: mapID!, developerKey: DEV_KEY, assetsFoundCallback: reloadAssetsCallback, statusCallback: mapStatusCallback)```

Here, your MapMode determines if you are attempting to create a new session or are relocalizing on a previously stored session. Your userID, and mapID are set to uniquely identify your session. Your developer key is unique to your Jido account. Finally you can set two callbacks. An `reloadAssetsCallback` which is triggered when assets are found on a relocalization, and a `statusCallback` function to receive `MapStatus` updates about your MapSession.

Finally, you must update the MapSession by implementing the following method of your ARSessionDelegate:

```
func session(_ session: ARSession, didUpdate frame: ARFrame) {
        if let map = mapSession {
           //This is where you update your MapSession 
           map.update(frame: frame)
        }
    }
```

## Saving an AR Session

The MapSession class has one method that can be used to save an assets in a MapSession when it is in .mapping mode. 

```public func storePlacement(assets: [MapAsset], callback:  @escaping (_ assetPlaced: Bool)  -> (Void))```

`storePlacement()` will store an array of `MapAsset`s which are used to reference assets or waypoints in your user’s AR session. See the description of the MapAsset class on how to store information in a MapAsset. storePlacement returns a true value if the asses were successfully stored.

## Reloading an AR session

Before reloading an AR session ensure that the MapSession was initialized in .localization mode. The reloadAssets callback must comply to the following interface:

```public func reloadAssetsCallback(_ assets: [MapAsset]) -> (Void)```

MapSession will return the callback with the stored array of `MapAsset`s that were saved in the prior session and transformed to the current session’s coordinate frame when the user is relocalized.

To use the `MapAsset`s in your current session, simply create assets that correspond to the AssetIDs you saved and place them in your scene using the position and orientation that was returned. Now the assets will be back in the session where you had left them! 

## MapAsset Class

The MapAsset class is a convenience class that stores the information necessary for each asset that is saved or reloaded from the Jido API. Each MapAsset has three member variables that are set when initialized.

```public init(_ assetID: String,_ position: SCNVector3,_ orientation: Float)```

The assetID can be set to any desired String. The position is the global position of the asset in the saved session. The orientation is the y-axis orientation of the asset in the saved session.

## Jido V1 Notes

 1. ARSession must be configured so [z-axis is set to True North](https://developer.apple.com/documentation/arkit/arconfiguration.worldalignment/2873776-gravityandheading) - for example:

```
let configuration = ARWorldTrackingConfiguration()
configuration.worldAlignment = ARConfiguration.WorldAlignment.gravityAndHeading
session.run(configuration)
```

 2. The phone must be connected to wifi and/or a cellular connection.

 3. For an ideal relocalization, the user should be encouraged to move around so that they will cover an interesting part of the saved session.

 <img src="https://s3-us-west-2.amazonaws.com/unity-integration-screenshots/media-20180227.png" width="500">
