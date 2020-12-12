/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity <HDSeriesEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_insertCodableSeriesDataFromObject:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)_routeSampleWithID:(id)arg1 canBeUnfrozen:(bool)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)createTableSQL;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateLocationDataInDatabase:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)isBackedByTable;
+ (bool)isConcreteEntity;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (bool)participatesInInsertion;
+ (bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)supportsObjectMerging;

- (id)_frozenUUIDForUnfrozenSeriesSample:(id)arg1 HFDKey:(long long)arg2 frozenStartTime:(double)arg3 frozenEndTime:(double)arg4 frozenCount:(long long)arg5 profile:(id)arg6 transaction:(id)arg7 error:(id*)arg8;
- (id)dateIntervalForSeriesInDatabase:(id)arg1 error:(id*)arg2;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateLocationDataFromTimestamp:(double)arg1 toTimestamp:(double)arg2 database:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (bool)enumerateLocationDataInDatabase:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)freezeWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (bool)insertLocationData:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)sampleCountForSeriesInDatabase:(id)arg1 error:(id*)arg2;
- (void)willDeleteFromDatabase:(id)arg1;

@end