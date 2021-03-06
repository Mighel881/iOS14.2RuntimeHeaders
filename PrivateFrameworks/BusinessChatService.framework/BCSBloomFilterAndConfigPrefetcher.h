/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBloomFilterAndConfigPrefetcher : NSObject {
    <BCSBloomFilterAndConfigRemoteFetching> * _bloomFilterAndConfigRemoteFetch;
    <BCSConfigCaching> * _configCache;
    <BCSFeatureFlagArbitrating> * _featureFlagAribiter;
    <BCSMetricFactoryProtocol> * _metricFactory;
    <BCSPrefetchTrigger> * _prefetchTrigger;
    <BCSShardCacheQueryable> * _shardCache;
    <BCSShardCacheSkipping> * _shardCacheSkipper;
    <BCSShardItemInstantiating> * _shardInstantiator;
    NSMutableSet * _triggers;
    <BCSUserDefaultsProviding> * _userDefaults;
}

@property (nonatomic, retain) <BCSBloomFilterAndConfigRemoteFetching> *bloomFilterAndConfigRemoteFetch;
@property (nonatomic, retain) <BCSConfigCaching> *configCache;
@property (nonatomic, retain) <BCSFeatureFlagArbitrating> *featureFlagAribiter;
@property (nonatomic, retain) <BCSMetricFactoryProtocol> *metricFactory;
@property (nonatomic, retain) <BCSPrefetchTrigger> *prefetchTrigger;
@property (nonatomic, retain) <BCSShardCacheQueryable> *shardCache;
@property (nonatomic, retain) <BCSShardCacheSkipping> *shardCacheSkipper;
@property (nonatomic, retain) <BCSShardItemInstantiating> *shardInstantiator;
@property (nonatomic, retain) NSMutableSet *triggers;
@property (nonatomic, retain) <BCSUserDefaultsProviding> *userDefaults;

- (void).cxx_destruct;
- (long long)_hoursSinceLastSuccessfulPrefetchForType:(long long)arg1;
- (void)_notePrefetchForType:(long long)arg1 finishedSuccessfully:(bool)arg2;
- (void)_prefetchBloomFilterAndConfigIfNecessaryWithXPCActivity:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldPrefetchType:(long long)arg1;
- (void)addPrefetchTrigger:(id)arg1;
- (id)bloomFilterAndConfigRemoteFetch;
- (id)configCache;
- (id)featureFlagAribiter;
- (id)initWithConfigCache:(id)arg1 shardCache:(id)arg2 shardCacheSkipper:(id)arg3 shardInstantiator:(id)arg4 featureFlagArbiter:(id)arg5 businessLinkRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8;
- (id)metricFactory;
- (id)prefetchTrigger;
- (void)setBloomFilterAndConfigRemoteFetch:(id)arg1;
- (void)setConfigCache:(id)arg1;
- (void)setFeatureFlagAribiter:(id)arg1;
- (void)setMetricFactory:(id)arg1;
- (void)setPrefetchTrigger:(id)arg1;
- (void)setShardCache:(id)arg1;
- (void)setShardCacheSkipper:(id)arg1;
- (void)setShardInstantiator:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)shardCache;
- (id)shardCacheSkipper;
- (id)shardInstantiator;
- (id)triggers;
- (id)userDefaults;

@end
