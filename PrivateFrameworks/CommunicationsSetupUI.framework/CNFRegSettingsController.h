/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSettingsController : CNFRegListController <AKAppleIDAuthenticationDelegate, CNFRegFirstRunDelegate, CNFRegViewAccountControllerDelegate, CNFRegWizardControllerDelegate> {
    NSArray * _GFTProminenceGroupSpecifiers;
    NSArray * _accountGroupSpecifiers;
    NSMutableArray * _addresses;
    NSArray * _aliasGroupSpecifiers;
    NSArray * _blocklistGroupSpecifiers;
    NSArray * _callerIdGroupSpecifiers;
    NSNumber * _delayedRefreshAnimatedFlag;
    PSSpecifier * _faceTimeEnabledGroupSpecifier;
    PSSpecifier * _faceTimeEnabledSpecifier;
    NSArray * _faceTimePhotosGroupSpecifiers;
    NSArray * _faceTimeVPCGroupSpecifiers;
    bool  _hideAppleIDLogin;
    NSArray * _receiveRelayCallsGroupSpecifiers;
    NSArray * _replyWithMessageGroupSpecifiers;
    struct { 
        unsigned int listeningForFinishedEditingEvents : 1; 
        unsigned int appeared : 1; 
        unsigned int ignoringTextFieldChanges : 1; 
        unsigned int showEnableSwitch : 1; 
        unsigned int refreshingCallerIdValues : 1; 
    }  _settingsFlags;
    bool  _showDeviceAliases;
    bool  _showReceiveRelayCalls;
    NSArray * _temporaryPhoneDescriptionGroupSpecifiers;
    NSArray * _temporaryPhoneGroupSpecifiers;
    NSArray * _temporaryPhoneRemoveGroupSpecifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideAppleIDLogin;
@property (nonatomic) bool showDeviceAliases;
@property (nonatomic) bool showEnableSwitch;
@property (nonatomic, readonly) bool showReceiveRelayCalls;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (bool)_allAccountsAreDeactivated;
- (id)_appleIDAccounts;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (bool)_canDeselectAlias:(id)arg1;
- (void)_handleAccountRegistrarChanged;
- (void)_handleDeactivation:(id)arg1;
- (void)_handleFaceTimeCTRegistrationStatusChanged;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_handleOutgoingRelayCallerIDChanged;
- (void)_handleRelayCapabilitiesChanged;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (void)_handleThumperCapabilitiesChanged;
- (bool)_hasActiveFaceTimeCall;
- (void)_hideLocaleChooser;
- (id)_localeChooserForAccount:(id)arg1;
- (id)_operationalAccounts;
- (id)_operationalAccountsForService:(long long)arg1;
- (bool)_popFromSettingsAnimated:(bool)arg1;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (void)_reloadSpecifier:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)_setupAccountHandlersForDisabling;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_setupAllListeners;
- (bool)_shouldDisableAccountConfigurationUI;
- (bool)_shouldShowAliasInfo;
- (bool)_shouldUseDisabledHandlers;
- (void)_showAccountAlertForAccount:(id)arg1;
- (void)_showAliasValidationError:(id)arg1;
- (void)_showAuthKitSignInIfNecessary;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (void)_showPrivacySheet:(id)arg1;
- (void)_showRemoveAlertForAlias:(id)arg1 specifier:(id)arg2;
- (void)_showRemoveTemporaryPhoneAlertForAlias:(id)arg1;
- (void)_showSignInController;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (id)_switchFooterText;
- (void)_tearDownAllListeners;
- (void)_updateControllerStateAnimated:(bool)arg1;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (id)_useableAccounts;
- (id)accountSpecifiers;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)accountToShowInCallerIDFooter;
- (bool)additionalAliasesAvailable;
- (id)aliasForSpecifier:(id)arg1;
- (id)aliasSpecifiers;
- (id)aliasWithIdentifier:(id)arg1;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)bundle;
- (id)callerIdAliasSpecifiers;
- (void)clearAccountCache;
- (void)clearFooterFromSpecifier:(id)arg1;
- (void)configureAccountFooterForGroupSpecifier:(id)arg1;
- (id)createSpecifierForAccount:(id)arg1;
- (id)createSpecifierForAlias:(id)arg1;
- (id)createSpecifierForCallerIdAlias:(id)arg1;
- (id)customTitle;
- (void)dealloc;
- (void)deleteTemporaryPhoneAliasSelected:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(bool)arg2;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (id)ftImServiceString;
- (id)getAccountNameForSpecifier:(id)arg1;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (id)getFaceTimePhotosEnabledForSpecifier:(id)arg1;
- (id)getFaceTimeVPCEnabledForSpecifier:(id)arg1;
- (id)getGFTAudioProminenceEnabledForSpecifier:(id)arg1;
- (id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg1;
- (long long)groupIdForSpecifier:(id)arg1;
- (long long)groupIdForSpecifierId:(id)arg1;
- (void)handleCallStatusChanged;
- (bool)hideAppleIDLogin;
- (long long)indexOfLastSpecifierInGroup:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (id)logName;
- (bool)oppositeServiceTypeEnabled;
- (bool)popToFirstRunControllerAnimated:(bool)arg1;
- (id)possibleCallerIdAliases;
- (void)refreshAccountsAnimated:(bool)arg1;
- (void)refreshAliasSpecifier:(id)arg1;
- (void)refreshAliasesAnimated:(bool)arg1;
- (void)refreshAllAliasSpecifiers;
- (void)refreshAllCallerIdAliasSpecifiers;
- (void)refreshBlocklistSettingsAnimated:(bool)arg1;
- (void)refreshCallerIdAliasesAnimated:(bool)arg1;
- (void)refreshCallerIdSpecifier:(id)arg1;
- (void)refreshEnabledStateAnimated:(bool)arg1;
- (void)refreshFaceTimePhotosSettingsAnimated:(bool)arg1;
- (void)refreshFaceTimeSettingsAnimated:(bool)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(bool)arg1;
- (void)refreshFaceTimeVPCSettingsAnimated:(bool)arg1;
- (void)refreshGFTProminenceSettingsAnimated:(bool)arg1;
- (void)refreshReceiveRelayCallsSettingsAnimated:(bool)arg1;
- (void)refreshTemporaryPhoneAnimated:(bool)arg1;
- (bool)refreshiMessageAccountFooterText:(bool)arg1;
- (void)setAliasSelected:(id)arg1;
- (void)setCallerId:(id)arg1;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(bool)arg3;
- (void)setFaceTimePhotosEnabled:(id)arg1 specifier:(id)arg2;
- (void)setFaceTimeVPCEnabled:(id)arg1 specifier:(id)arg2;
- (void)setGFTAudioProminenceEnabled:(id)arg1 specifier:(id)arg2;
- (void)setHideAppleIDLogin:(bool)arg1;
- (void)setReceiveRelayedCallsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setShowDeviceAliases:(bool)arg1;
- (void)setShowEnableSwitch:(bool)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowBlocklistSettings;
- (bool)shouldShowCallDirectorySettingsBundleSpecifiers;
- (bool)shouldShowFaceTimePhotosSpecifiers;
- (bool)shouldShowFaceTimeVPCSpecifiers;
- (bool)shouldShowGFTProminenceSpecifiers;
- (bool)shouldShowIncomingCallSettingsBundleSpecifiers;
- (bool)shouldShowReceiveRelayCalls;
- (bool)shouldShowReceiveThumperCalls;
- (bool)shouldShowReplyWithMessage;
- (bool)shouldShowSiriSpecifiers;
- (bool)showAccounts:(bool)arg1 animated:(bool)arg2;
- (bool)showAliases:(bool)arg1 animated:(bool)arg2;
- (void)showAllSettings:(bool)arg1 animated:(bool)arg2;
- (void)showBlocklistSettings:(bool)arg1 animated:(bool)arg2;
- (bool)showCallerId:(bool)arg1 animated:(bool)arg2;
- (bool)showDeviceAliases;
- (bool)showEnableSwitch;
- (void)showFaceTimePhotosSettings:(bool)arg1 animated:(bool)arg2;
- (void)showFaceTimeSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(bool)arg3;
- (void)showFaceTimeVPCSpecifiers:(bool)arg1 animated:(bool)arg2;
- (void)showGFTProminenceSettings:(bool)arg1 animated:(bool)arg2;
- (bool)showReceiveRelayCalls;
- (void)showReceiveRelayCallsSettings:(bool)arg1 animated:(bool)arg2;
- (void)showReplyWithMessage:(bool)arg1 animated:(bool)arg2;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(bool)arg3;
- (id)specifierList;
- (id)statusForAlias:(id)arg1;
- (id)statusForSpecifier:(id)arg1;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end