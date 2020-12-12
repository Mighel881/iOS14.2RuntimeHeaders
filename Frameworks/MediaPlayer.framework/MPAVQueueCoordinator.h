/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVQueueCoordinator : NSObject <MPAVQueueCoordinating> {
    NSOperationQueue * _assetQueue;
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    MPAVItem * _currentItem;
    <MPAVQueueCoordinatingDataSource> * _dataSource;
    id /* block */  _equilibriumAchievedHandler;
    bool  _holdingPlaybackTransactionForFirstItem;
    bool  _isPendingPlayerItemSync;
    bool  _isSyncingPlayerItems;
    NSArray * _items;
    NSHashTable * _itemsPendingAssetLoading;
    MPAVItem * _lastItemAnchor;
    unsigned long long  _lastPreferredQueueDepth;
    bool  _needsCurrentItemUpdateAfterPlayerItemSync;
    MPQueuePlayer * _player;
    bool  _preventLoadingItems;
    NSMutableSet * _reusableItems;
    bool  _shouldDeferItemLoading;
    bool  _shouldExpectEmptyQueue;
}

@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic, readonly) <MPAVQueueCoordinatingDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ equilibriumAchievedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) MPQueuePlayer *player;
@property (nonatomic) bool shouldDeferItemLoading;
@property (nonatomic) bool shouldExpectEmptyQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginBackgroundTaskAssertion;
- (void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_dequeueFailedItem:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (bool)_hasAchievedEquilibrium;
- (void)_loadAssetForItem:(id)arg1;
- (id)_playerItems;
- (unsigned long long)_preferredQueueDepthWithFirstItem:(id)arg1;
- (void)_reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)_removeItemFromPlayer:(id)arg1;
- (void)_sendItemsDidChange;
- (void)_syncItemsWithPreviousItems:(id)arg1;
- (void)_syncPlayerItems;
- (void)_updateCurrentItem;
- (void)_updateQueueDepthIfNeeded;
- (id)currentItem;
- (id)dataSource;
- (void)dealloc;
- (id /* block */)equilibriumAchievedHandler;
- (id)initWithPlayer:(id)arg1 dataSource:(id)arg2;
- (id)items;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)reset;
- (void)setEquilibriumAchievedHandler:(id /* block */)arg1;
- (void)setShouldDeferItemLoading:(bool)arg1;
- (void)setShouldExpectEmptyQueue:(bool)arg1;
- (bool)shouldDeferItemLoading;
- (bool)shouldExpectEmptyQueue;

@end