/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPQuickTypeMetrics : NSObject {
    PETDistributionEventTracker * _contactsMatches;
    PETDistributionEventTracker * _eventsMatches;
    PETDistributionEventTracker * _foundInAppsMatches;
    PETScalarEventTracker * _frameworkErrors;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) PETDistributionEventTracker *contactsMatches;
@property (nonatomic, retain) PETDistributionEventTracker *eventsMatches;
@property (nonatomic, retain) PETDistributionEventTracker *foundInAppsMatches;
@property (nonatomic, retain) PETScalarEventTracker *frameworkErrors;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2;
+ (id)counter:(id)arg1 withProperties:(id)arg2;
+ (void)eventsMatches:(unsigned long long)arg1;
+ (void)frameworkError:(id)arg1 errorCode:(long long)arg2;
+ (id)instance;
+ (id)trackerForDistribution:(id)arg1 withProperties:(id)arg2;
+ (id)trackerForGoal:(id)arg1 withProperties:(id)arg2;

- (void).cxx_destruct;
- (id)contactsMatches;
- (id)eventsMatches;
- (id)foundInAppsMatches;
- (id)frameworkErrors;
- (id)init;
- (id)queue;
- (void)setContactsMatches:(id)arg1;
- (void)setEventsMatches:(id)arg1;
- (void)setFoundInAppsMatches:(id)arg1;
- (void)setFrameworkErrors:(id)arg1;
- (void)setQueue:(id)arg1;

@end
