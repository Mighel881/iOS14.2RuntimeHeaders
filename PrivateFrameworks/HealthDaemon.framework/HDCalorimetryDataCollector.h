/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector

+ (bool)isCoreMotionCaloriePushModelEnabled;
+ (bool)isNatalimeterAvailable;
+ (bool)supportsCollectionForProfile:(id)arg1;

- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (id)initWithProfile:(id)arg1;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;

@end
