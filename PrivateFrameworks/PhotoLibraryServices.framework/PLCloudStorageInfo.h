/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudStorageInfo : NSObject {
    long long  _availableBytes;
    long long  _cameraRollBackupBytes;
    bool  _hasMaxQuotaTier;
    long long  _photosMediaUsageBytes;
    long long  _totalBytes;
    long long  _usedBytes;
}

@property (nonatomic, readonly) long long availableBytes;
@property (nonatomic, readonly) long long cameraRollBackupBytes;
@property (nonatomic, readonly) bool hasMaxQuotaTier;
@property (nonatomic, readonly) long long photosMediaUsageBytes;
@property (nonatomic, readonly) long long totalBytes;
@property (nonatomic, readonly) long long usedBytes;

+ (id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4 photosMediaUsage:(long long)arg5 hasMaxQuotaTier:(bool)arg6;

- (long long)availableBytes;
- (long long)cameraRollBackupBytes;
- (id)description;
- (bool)hasMaxQuotaTier;
- (id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4 photosMediaUsage:(long long)arg5 hasMaxQuotaTier:(bool)arg6;
- (long long)photosMediaUsageBytes;
- (long long)totalBytes;
- (long long)usedBytes;

@end