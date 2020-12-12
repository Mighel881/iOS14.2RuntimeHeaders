/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory> {
    Class  _storageClass;
    NUPurgeableStoragePool * _storagePool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithStorageClass:(Class)arg1;
- (id)initWithStorageClass:(Class)arg1 storagePool:(id)arg2;
- (id)initWithStoragePool:(id)arg1;
- (id)newStorageWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (void)returnStorage:(id)arg1;

@end