/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristic : HMFObject <HAP2CharacteristicTupleValue, HMFMerging, NSCopying> {
    HAPCharacteristicMetadata * _accessoryMetadata;
    bool  _eventNotificationsEnabled;
    bool  _implicitWriteWithResponse;
    NSNumber * _instanceID;
    HMFUnfairLock * _lock;
    HAPCharacteristicMetadata * _metadata;
    bool  _prohibitCaching;
    unsigned long long  _properties;
    HAPService * _service;
    bool  _shouldValidateValueAfterReading;
    NSNumber * _stateNumber;
    NSString * _type;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, readonly) HAPCharacteristicMetadata *accessoryMetadata;
@property (setter=setCBCharacteristic:, nonatomic, retain) CBCharacteristic *cbCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eventNotificationsEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isWriteWithResponseImplicitlySupported, nonatomic, readonly) bool implicitWriteWithResponse;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, copy) HAPCharacteristicMetadata *metadata;
@property (nonatomic) bool prohibitCaching;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) HAPService *service;
@property (nonatomic) bool shouldValidateValueAfterReading;
@property (nonatomic, readonly) NSNumber *stateNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAdditionalAuthorizationData;
@property (nonatomic, readonly) bool supportsWriteWithResponse;
@property (nonatomic, copy) NSString *type;
@property (setter=setValue:, nonatomic, copy) id value;
@property (nonatomic, retain) NSDate *valueUpdatedTime;

+ (id)hap2_shortTypeFromUUID:(id)arg1;

- (void).cxx_destruct;
- (id)_generateValidMetadata:(id)arg1;
- (void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2;
- (id)accessoryMetadata;
- (id)cbCharacteristic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)eventNotificationsEnabled;
- (bool)hap2_canUseCachedValue;
- (bool)hap2_mergeWithCharacteristic:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(bool)arg6 implicitWriteWithResponse:(bool)arg7 metadata:(id)arg8;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(bool)arg6 metadata:(id)arg7;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCharacteristic:(id)arg1;
- (bool)isWriteWithResponseImplicitlySupported;
- (bool)mergeObject:(id)arg1;
- (id)metadata;
- (bool)prohibitCaching;
- (unsigned long long)properties;
- (id)propertiesDescription;
- (id)service;
- (void)setCBCharacteristic:(id)arg1;
- (void)setEventNotificationsEnabled:(bool)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProhibitCaching:(bool)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setShouldValidateValueAfterReading:(bool)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdatedTime:(id)arg1;
- (bool)shouldMergeObject:(id)arg1;
- (bool)shouldValidateValueAfterReading;
- (id)stateNumber;
- (bool)supportsAdditionalAuthorizationData;
- (bool)supportsWriteWithResponse;
- (id)type;
- (id)validateValue:(id)arg1 outValue:(id*)arg2;
- (id)value;
- (id)valueUpdatedTime;

@end