/* Generated by RuntimeBrowser.
 */

@protocol PXCuratedLibraryMutableAssetsDataSourceManager <PXMutableAssetsDataSourceManager>

@required

- (NSPredicate *)allPhotosFilterPredicate;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1 inZoomLevel:(long long)arg2;
- (void)loadIfNeeded;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)resumeChangeDelivery:(id)arg1;
- (void)setAllPhotosFilterPredicate:(NSPredicate *)arg1;
- (void)setTransientKeyAsset:(id <PXDisplayAsset>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2 zoomLevel:(long long)arg3;
- (void)setZoomLevel:(long long)arg1;
- (long long)zoomLevel;

@end
