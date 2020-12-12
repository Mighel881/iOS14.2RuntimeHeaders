/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXAssetsDataSourceManagerObserver, PXCloudQuotaControllerDelegate> {
    PXPhotoKitAssetsDataSourceManager * _assetsDataSourceManager;
    PXCloudQuotaController * _cloudQuotaController;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    <PXPhotosLibraryFooterViewModelPresentationDelegate> * _presentingDelegate;
    NSArray * _syncProgressAlbums;
}

@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, retain) PXCloudQuotaController *cloudQuotaController;
@property (nonatomic, retain) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosLibraryFooterViewModelPresentationDelegate> *presentingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *syncProgressAlbums;

- (void).cxx_destruct;
- (void)_updateExposedProperties;
- (id)assetsDataSourceManager;
- (id)cloudQuotaController;
- (void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2;
- (id)cplUIStatusProvider;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentingDelegate;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (void)setCloudQuotaController:(id)arg1;
- (void)setCplUIStatusProvider:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (id)syncProgressAlbums;

@end