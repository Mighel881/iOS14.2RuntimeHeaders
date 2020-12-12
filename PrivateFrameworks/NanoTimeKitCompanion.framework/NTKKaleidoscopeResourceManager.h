/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopeResourceManager : NSObject {
    NSBundle * _bundle;
    unsigned long long  _clients;
    <MTLDevice> * _device;
    NTKPromise * _mtlBuffer;
    NTKPromise * _renderPipelines;
    unsigned long long  _viewMtlPixelFormat;
}

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexFunction:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 librarySPI:(id)arg5;
- (void)addClient;
- (void)dealloc;
- (id)getGeometryBuffer;
- (id)getPipelineForShaderType:(unsigned long long)arg1 blending:(bool)arg2;
- (id)initWithPixelFormat:(unsigned long long)arg1;
- (void)removeClient;

@end