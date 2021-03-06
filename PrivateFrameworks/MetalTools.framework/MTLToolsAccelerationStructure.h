/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsAccelerationStructure : MTLToolsResource <MTLAccelerationStructureSPI> {
    MTLToolsBuffer * _toolsBuffer;
}

@property (readonly) unsigned long long allocatedSize;
@property (nonatomic, readonly) <MTLBuffer> *buffer;
@property (nonatomic, readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTLAccelerationStructureDescriptor *descriptor;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (readonly) unsigned long long resourceOptions;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;

- (id)buffer;
- (unsigned long long)bufferOffset;
- (void)dealloc;
- (id)descriptor;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned long long)size;
- (unsigned long long)uniqueIdentifier;

@end
