/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIInCallSceneClientSettings : UIApplicationSceneClientSettings

@property (getter=isCallConnected, nonatomic, readonly) bool callConnected;
@property (nonatomic, readonly) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic, readonly) int preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) bool shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, readonly) bool supportsDeviceLockActions;
@property (nonatomic, readonly) bool transientOverlayHomeIndicatorAutoHidden;

- (bool)homeIndicatorAutoHidden;
- (bool)isCallConnected;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (int)preferredStatusBarStyleOverridesToSuppress;
- (bool)shouldBecomeVisibleWhenWakingDisplay;
- (bool)supportsDeviceLockActions;
- (bool)transientOverlayHomeIndicatorAutoHidden;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
