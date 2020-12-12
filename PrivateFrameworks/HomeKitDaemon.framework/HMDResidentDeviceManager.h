/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentDeviceManager : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate, NSSecureCoding> {
    bool  _confirming;
    NSHashTable * _dataSources;
    <HMDResidentDeviceManagerDelegate> * _delegate;
    bool  _firstHomeZoneFetch;
    bool  _firstLegacyFetch;
    HMDHome * _home;
    long long  _lastAtHomeLevel;
    <HMFLocking> * _lock;
    HMDMessageDispatcher * _messageDispatcher;
    NSUUID * _primaryResidentUUID;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _residentAvailable;
    NSMutableSet * _residentDevices;
    HMFTimer * _residentMonitorTimer;
    bool  _residentSupported;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSArray *availableResidentDevices;
@property (getter=isConfirming, nonatomic) bool confirming;
@property (getter=isCurrentDeviceAvailableResident, nonatomic, readonly) bool currentDeviceAvailableResident;
@property (getter=isCurrentDeviceConfirmedPrimaryResident, nonatomic, readonly) bool currentDeviceConfirmedPrimaryResident;
@property (getter=isCurrentDevicePrimaryResident, nonatomic, readonly) bool currentDevicePrimaryResident;
@property (readonly, copy) NSString *debugDescription;
@property <HMDResidentDeviceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=hasFirstHomeZoneFetch, nonatomic) bool firstHomeZoneFetch;
@property (getter=hasFirstLegacyFetch, nonatomic) bool firstLegacyFetch;
@property (nonatomic, readonly) bool hasTrustZoneCapableResident;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) long long lastAtHomeLevel;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDResidentDevice *primaryResidentDevice;
@property (nonatomic, readonly) NSUUID *primaryResidentUUID;
@property (getter=isResidentAvailable, nonatomic, readonly) bool residentAvailable;
@property (nonatomic, readonly, copy) NSArray *residentDevices;
@property (retain) HMFTimer *residentMonitorTimer;
@property (getter=isResidentSupported, nonatomic) bool residentSupported;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__currentDeviceUpdated:(id)arg1 completion:(id /* block */)arg2;
- (void)__handleAppleAccountResolved:(id)arg1;
- (void)__handleConfirmationRequest:(id)arg1;
- (void)_addResidentDevice:(id)arg1;
- (void)_addResidentDeviceWithModel:(id)arg1 message:(id)arg2;
- (void)_confirmResidentDevice:(id)arg1 electionParameters:(id)arg2 againstDevices:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_electResidentDevice;
- (id)_electionParameters;
- (id)_electionParameters:(id)arg1;
- (void)_handleCloudZoneReadyNotification:(id)arg1;
- (void)_handleConfirmResidentDevice:(id)arg1;
- (void)_handleResidentDeviceUpdateEnabled:(id)arg1;
- (void)_handleResidentElectionParameters:(id)arg1;
- (bool)_isAtHome;
- (void)_pingResident;
- (void)_registerForMessages;
- (void)_removeResidentDevice:(id)arg1;
- (void)_removeResidentDeviceWithModel:(id)arg1 message:(id)arg2;
- (void)_run;
- (void)_sendResidentDeviceNotificationWithName:(id)arg1 forResidentDevice:(id)arg2;
- (void)_setupSessionWithPrimaryResidentDevice;
- (void)_startMonitoringResident;
- (void)_stopMonitoringResident;
- (void)_teardownSessionWithPrimaryResidentDevice;
- (void)_updateChargingTimer;
- (void)_updateDischargingTimer:(long long)arg1;
- (void)_updateReachability:(bool)arg1 forResidentDevice:(id)arg2;
- (void)_updateResidentAvailability;
- (void)addDataSource:(id)arg1;
- (void)atHomeLevelChanged:(long long)arg1;
- (id)availableResidentDevices;
- (long long)compareResidentDeviceA:(id)arg1 electionParametersA:(id)arg2 residentDeviceB:(id)arg3 electionParametersB:(id)arg4;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
- (void)confirmPrimaryResident;
- (void)confirmWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)dumpState;
- (void)electResidentDevice;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBatteryLevelChange:(id)arg1;
- (void)handleBatteryStateChange:(id)arg1;
- (void)handleCurrentDeviceChanged:(id)arg1;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleResidentDeviceIsNotReachable:(id)arg1;
- (void)handleResidentDeviceIsReachable:(id)arg1;
- (bool)hasFirstHomeZoneFetch;
- (bool)hasFirstLegacyFetch;
- (bool)hasTrustZoneCapableResident;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isConfirming;
- (bool)isCurrentDeviceAvailableResident;
- (bool)isCurrentDeviceConfirmedPrimaryResident;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isResidentAvailable;
- (bool)isResidentSupported;
- (long long)lastAtHomeLevel;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)notifyClientsOfUpdatedResidentDevice:(id)arg1;
- (void)notifyResidentAvailable:(bool)arg1;
- (void)notifyUpdatedPrimaryResident:(id)arg1;
- (id)ourSelf;
- (id)primaryResidentDevice;
- (id)primaryResidentUUID;
- (void)removeDataSource:(id)arg1;
- (void)removeResidentDevice:(id)arg1;
- (id)residentDeviceForDevice:(id)arg1;
- (id)residentDevices;
- (id)residentMonitorTimer;
- (id)residentWithUUID:(id)arg1;
- (void)run;
- (void)setConfirming:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstHomeZoneFetch:(bool)arg1;
- (void)setFirstLegacyFetch:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastAtHomeLevel:(long long)arg1;
- (void)setResidentAvailable:(bool)arg1;
- (void)setResidentMonitorTimer:(id)arg1;
- (void)setResidentSupported:(bool)arg1;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updatePrimaryResidentWithUUID:(id)arg1 actions:(id)arg2;
- (void)updateResidentAvailability;
- (id)uuid;

@end