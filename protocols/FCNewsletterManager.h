/* Generated by RuntimeBrowser.
 */

@protocol FCNewsletterManager <NSObject>

@required

- (long long)activeNewsletter;
- (void)addObserver:(id <FCNewsletterSubscriptionObserver>)arg1;
- (bool)canSubscribe;
- (bool)canSubscribeToNewsletter:(long long)arg1;
- (bool)canUnsubscribe;
- (void)deletePersonalizationVector;
- (bool)enabled;
- (NFPromise *)forceUpdateSubscription;
- (bool)isSubscribed;
- (void)notifyObservers;
- (void)removeObserver:(id <FCNewsletterSubscriptionObserver>)arg1;
- (bool)shouldSubmitPersonalizationVector;
- (void)submitPersonalizationVector:(NTPBVersionedPersonalizationVector *)arg1;
- (void)subscribe;
- (void)subscribeTo:(long long)arg1;
- (long long)subscription;
- (long long)subscriptionStatusForNewsletter:(long long)arg1;
- (void)unsubscribe;
- (void)updateCacheWithNewsletterString:(NSString *)arg1;
- (NFPromise *)updateSubscription;

@end