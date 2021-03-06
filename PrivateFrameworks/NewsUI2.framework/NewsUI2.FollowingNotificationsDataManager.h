/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.FollowingNotificationsDataManager : NSObject <FCNewsletterSubscriptionObserver, FCUserInfoObserving> {
    void configurationManager;
    void delegate;
    void newsletterManager;
    void subscriptionService;
    void tagService;
    void userNotificationCenter;
}

- (void).cxx_destruct;
- (void)determineSystemNotificationSettingsStatus;
- (id)init;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;

@end
