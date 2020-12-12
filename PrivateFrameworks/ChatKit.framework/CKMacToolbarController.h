/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMacToolbarController : UIViewController <CKMacToolbarViewDelegate> {
    bool  _isInStandaloneWindow;
    double  _preferredPrimaryHeight;
    double  _preferredSecondaryHeight;
    <CKMacToolbarItemProvider> * _primaryItemProvider;
    UIView * _primaryProvidedVirtualView;
    UIVisualEffectView * _primaryVirtualBackgroundView;
    NSString * _sceneSessionIdentifier;
    <CKMacToolbarItemProvider> * _secondaryItemProvider;
    UIView * _secondaryProvidedVirtualView;
    UIVisualEffectView * _secondaryVirtualBackgroundView;
    bool  _shouldDrawPrimaryBlur;
    bool  _shouldDrawSecondaryBlur;
    double  _splitViewDividerXPosition;
    NSMutableDictionary * _toolbarItemCache;
    UIWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInStandaloneWindow;
@property (nonatomic) double preferredPrimaryHeight;
@property (nonatomic) double preferredSecondaryHeight;
@property (nonatomic, retain) <CKMacToolbarItemProvider> *primaryItemProvider;
@property (nonatomic) UIView *primaryProvidedVirtualView;
@property (nonatomic, readonly) UIVisualEffectView *primaryVirtualBackgroundView;
@property (nonatomic, readonly) NSString *sceneSessionIdentifier;
@property (nonatomic, retain) <CKMacToolbarItemProvider> *secondaryItemProvider;
@property (nonatomic) UIView *secondaryProvidedVirtualView;
@property (nonatomic, readonly) UIVisualEffectView *secondaryVirtualBackgroundView;
@property (nonatomic) bool shouldDrawPrimaryBlur;
@property (nonatomic) bool shouldDrawSecondaryBlur;
@property (nonatomic) double splitViewDividerXPosition;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *toolbarItemCache;
@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_cachedVirtualViewForProviderType:(long long)arg1;
- (double)_getPreferredHeightForProviderType:(long long)arg1 withDefaultHeight:(double)arg2;
- (id)_providerForType:(long long)arg1;
- (long long)_providerTypeForItemIdentifier:(id)arg1;
- (long long)_providerTypeForPointInsideVirtualView:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_setVirtualView:(id)arg1 forProviderType:(long long)arg2;
- (bool)_shouldDisAllowTouchesToPassForProviderType:(long long)arg1;
- (void)_updateBackgroundViewsRefreshingViewHeights:(bool)arg1;
- (bool)_updateFrameWithPreferredHeightsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateVirtualViewForProviderType:(long long)arg1;
- (id)_virtualBackgroundViewForProviderType:(long long)arg1;
- (id)initWithScene:(id)arg1 connectingToSession:(id)arg2 inStandaloneWindow:(bool)arg3;
- (bool)isInStandaloneWindow;
- (void)loadView;
- (bool)macToolbarView:(id)arg1 shouldAllowTouchesForPoint:(struct CGPoint { double x1; double x2; })arg2 andEvent:(id)arg3;
- (double)preferredPrimaryHeight;
- (double)preferredSecondaryHeight;
- (id)primaryItemProvider;
- (id)primaryProvidedVirtualView;
- (id)primaryVirtualBackgroundView;
- (void)reloadToolbarItems;
- (void)removeItemProvider:(id)arg1;
- (void)removeItemProviders;
- (void)removeToolbarItems;
- (void)removeVirtualViewForProvider:(id)arg1;
- (bool)reparentToolbarItemsForProvider:(id)arg1;
- (id)sceneSessionIdentifier;
- (id)secondaryItemProvider;
- (id)secondaryProvidedVirtualView;
- (id)secondaryVirtualBackgroundView;
- (void)setIsInStandaloneWindow:(bool)arg1;
- (void)setPreferredPrimaryHeight:(double)arg1;
- (void)setPreferredSecondaryHeight:(double)arg1;
- (void)setPrimaryItemProvider:(id)arg1;
- (void)setPrimaryProvidedVirtualView:(id)arg1;
- (void)setSecondaryItemProvider:(id)arg1;
- (void)setSecondaryProvidedVirtualView:(id)arg1;
- (void)setShouldDrawPrimaryBlur:(bool)arg1;
- (void)setShouldDrawSecondaryBlur:(bool)arg1;
- (void)setSplitViewDividerXPosition:(double)arg1;
- (void)setToolbarItemCache:(id)arg1;
- (bool)shouldDrawPrimaryBlur;
- (bool)shouldDrawSecondaryBlur;
- (double)splitViewDividerXPosition;
- (id)toolbarItemCache;
- (void)updateVirtualViewForProvider:(id)arg1;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)viewWillLayoutSubviews;
- (id)windowScene;

@end