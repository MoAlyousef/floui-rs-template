# floui-rs-template

This builds a staticlib crate called myapp.

To build the static lib (for example for my android simulator and my iphone simulator):
```
cargo build --target=i686-linux-android
cargo build --target=x86_64-apple-ios
cargo build --target=aarch64-apple-ios
```

To build for android, either open the android dir in Android Studio, otherwise you can do it from the command-line:
```
emulator -list-avds # to get list of emulators
emulator -avd "Nexus_5X_API_29_x86" # to start my Nexus emulator
cd android
gradlew assembleDebug
gradlew installDebug
adb shell am start -n "com.example.android/com.example.android.MainActivity" -a android.intent.action.MAIN -c android.intent.category.LAUNCHER
```

To build for ios, open the ios folder in XCode, or from the command-line:
```
xcrun simctl list # to get list of simulators
xcrun simctl boot "iPhone 13 Pro" # to start my iphone 13 pro simulator
xcodebuild build -configuration Debug -sdk iphonesimulator CODE_SIGN_IDENTITY="" CODE_SIGNING_REQUIRED=NO
xcrun simctl install "iPhone 13 Pro" build/Debug-iphonesimulator/ios.app
xcrun simctl launch "iPhone 13 Pro" <your bundle identifier>
```
