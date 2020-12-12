/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSRemoteContentModalViewController : CSModalViewControllerBase <CSDismissableModalViewControllerDelegate, CSRemoteContentHostDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver> {
    UIViewFloatAnimatableProperty * _alphaProperty;
    SBFFluidBehaviorSettings * _alphaSettings;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    CSRemoteContentHostViewController * _contentViewController;
    SBSRemoteContentDefinition * _definition;
    <CSRemoteContentModalViewControllerDelegate> * _delegate;
    bool  _dismissing;
    UIView * _grabberView;
    CSLockScreenSettings * _lockScreenSettings;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTranslation;
    SBSRemoteContentPreferences * _remoteContentPreferences;
    CSDashBoardRemoteContentSettings * _remoteContentSettings;
    UIImpactFeedbackGenerator * _rubberBandFeedbackGenerator;
    CSComponent * _scalableContent;
    UIViewFloatAnimatableProperty * _scaleProperty;
    SBFFluidBehaviorSettings * _scaleSettings;
    bool  _suppressingWhitePointReduction;
}

@property (nonatomic, readonly) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSRemoteContentModalViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSLockScreenSettings *lockScreenSettings;
@property (nonatomic, retain) CSDashBoardRemoteContentSettings *remoteContentSettings;
@property (nonatomic, retain) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator;
@property (nonatomic, retain) CSComponent *scalableContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_backgroundStyle;
- (void)_createProperties;
- (long long)_dateTimeStyle;
- (void)_dismissForced:(bool)arg1 animated:(bool)arg2;
- (long long)_homeGestureMode;
- (bool)_reducesWhitePoint;
- (void)_setCornerRounded:(bool)arg1;
- (bool)_shouldCancelInteractiveDismissGesture;
- (bool)_supportsLuminanceReductionForCurrentBackgroundStyle;
- (bool)_suppressesBottomEdgeContent;
- (void)_updateContentAlpha:(double)arg1 interactive:(bool)arg2;
- (void)_updateContentScale:(double)arg1 interactive:(bool)arg2;
- (void)_updateForPropertyChanged;
- (void)_updateGrabberViewVisibility;
- (void)_updateSecondaryActionButtonText;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addGrabberView:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)authenticationStatusProvider;
- (void)configureDisplayLayoutElement:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeStyle;
- (void)didInvalidate;
- (void)didReceiveTouch;
- (bool)dismissForDismissType:(long long)arg1 completion:(id /* block */)arg2;
- (void)dismissForHomeButton;
- (id)displayLayoutElementIdentifier;
- (void)handleBottomEdgeGestureBegan:(id)arg1;
- (void)handleBottomEdgeGestureChanged:(id)arg1;
- (void)handleBottomEdgeGestureEnded:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (id)initWithContentDefinition:(id)arg1 preferences:(id)arg2 authenticationStatusProvider:(id)arg3;
- (bool)isInUnlockGestureMode;
- (void)loadView;
- (id)lockScreenSettings;
- (void)remoteContentHostViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (id)remoteContentSettings;
- (id)rubberBandFeedbackGenerator;
- (id)scalableContent;
- (void)setDelegate:(id)arg1;
- (void)setLockScreenSettings:(id)arg1;
- (void)setRemoteContentSettings:(id)arg1;
- (void)setRubberBandFeedbackGenerator:(id)arg1;
- (void)setScalableContent:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldCaptureHomeGesture;
- (bool)shouldHideHomeAffordance;
- (bool)suppressesDismissalForNotification;
- (bool)suppressesDismissalGesture;
- (void)viewDidLoad;

@end