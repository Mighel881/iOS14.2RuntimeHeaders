/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMyArticlesOperation : FCOperation {
    long long  _binOverride;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    FCDateRange * _dateRange;
    NSError * _error;
    NSDictionary * _feedContextByFeedID;
    id /* block */  _feedItemCompletionBlock;
    NSArray * _feedItems;
    id /* block */  _feedItemsChangedHandler;
    bool  _includeEvergreenFeedItems;
    bool  _isStreamingFinished;
    unsigned long long  _maxNumberOfFeedsToQuery;
    NSMapTable * _nonEditorialScoreProfiles;
    unsigned long long  _perFeedLimit;
    NSArray * _sortedNonEditorialFeedItems;
    bool  _streamFeedItems;
    long long  _streamFeedItemsCount;
}

@property (nonatomic) long long binOverride;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) FCDateRange *dateRange;
@property (copy) NSError *error;
@property (copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, copy) id /* block */ feedItemCompletionBlock;
@property (copy) NSArray *feedItems;
@property (nonatomic, copy) id /* block */ feedItemsChangedHandler;
@property (nonatomic) bool includeEvergreenFeedItems;
@property (nonatomic) bool isStreamingFinished;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (retain) NSMapTable *nonEditorialScoreProfiles;
@property (nonatomic) unsigned long long perFeedLimit;
@property (copy) NSArray *sortedNonEditorialFeedItems;
@property (nonatomic) bool streamFeedItems;
@property (nonatomic) long long streamFeedItemsCount;

- (void).cxx_destruct;
- (void)_appendFeedItems:(id)arg1 forceChangeNotification:(bool)arg2;
- (void)_fetchTagsForQueryingWithCompletionHandler:(id /* block */)arg1;
- (long long)binOverride;
- (id)configuration;
- (id)context;
- (id)dateRange;
- (id)error;
- (id)feedContextByFeedID;
- (id /* block */)feedItemCompletionBlock;
- (id)feedItems;
- (id /* block */)feedItemsChangedHandler;
- (bool)includeEvergreenFeedItems;
- (id)init;
- (bool)isStreamingFinished;
- (unsigned long long)maxNumberOfFeedsToQuery;
- (id)nonEditorialScoreProfiles;
- (void)operationWillFinishWithError:(id)arg1;
- (unsigned long long)perFeedLimit;
- (void)performOperation;
- (void)setBinOverride:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDateRange:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setFeedItemCompletionBlock:(id /* block */)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setFeedItemsChangedHandler:(id /* block */)arg1;
- (void)setIncludeEvergreenFeedItems:(bool)arg1;
- (void)setIsStreamingFinished:(bool)arg1;
- (void)setMaxNumberOfFeedsToQuery:(unsigned long long)arg1;
- (void)setNonEditorialScoreProfiles:(id)arg1;
- (void)setPerFeedLimit:(unsigned long long)arg1;
- (void)setSortedNonEditorialFeedItems:(id)arg1;
- (void)setStreamFeedItems:(bool)arg1;
- (void)setStreamFeedItemsCount:(long long)arg1;
- (id)sortedNonEditorialFeedItems;
- (bool)streamFeedItems;
- (long long)streamFeedItemsCount;
- (bool)validateOperation;

@end