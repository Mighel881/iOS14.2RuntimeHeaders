/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor> {
    NSDictionary * _analyticsData;
    NSObject<OS_dispatch_semaphore> * _authorizationSemaphore;
    int  _authorizationStatus;
    <_CDLocalContext> * _context;
    CLLocation * _currentLocation;
    CLLocationManager * _locationManager;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _requestLocationSemaphore;
    RTRoutineManager * _routine;
    <_DKKnowledgeQuerying> * _store;
}

@property (nonatomic, retain) NSDictionary *analyticsData;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *authorizationSemaphore;
@property (nonatomic) int authorizationStatus;
@property (nonatomic, retain) <_CDLocalContext> *context;
@property (retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore;
@property (nonatomic, retain) RTRoutineManager *routine;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (readonly) Class superclass;

+ (id)monitorWithDelegate:(id)arg1;
+ (id)monitorWithDelegate:(id)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)authorizationSemaphore;
- (int)authorizationStatus;
- (id)context;
- (id)currentLocation;
- (long long)inKnownMicrolocation;
- (bool)inTypicalChargingLocationWithError:(id*)arg1;
- (id)initWithContextStore:(id)arg1 withKnowledgeStore:(id)arg2;
- (bool)isInSameTimeZone;
- (id)likelyToBeInKnownArea;
- (bool)locationIsUncertain:(id)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)log;
- (bool)longCharges:(id)arg1 occurredInLocationsNear:(id)arg2 withError:(id*)arg3;
- (id)longChargesAroundDate:(id)arg1;
- (bool)notAuthorizedForLocation;
- (id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2;
- (id)queue;
- (id)requestLocationSemaphore;
- (id)requiredFullChargeDate;
- (id)routine;
- (void)setAnalyticsData:(id)arg1;
- (void)setAuthorizationSemaphore:(id)arg1;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestLocationSemaphore:(id)arg1;
- (void)setRoutine:(id)arg1;
- (void)setStore:(id)arg1;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)store;

@end