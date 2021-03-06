/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalPaintRenderCacheBuffer : NSObject {
    unsigned long long  _numPoints;
    unsigned long long  _numVertices;
    PKMetalBuffer * _pkStrokePointBuffer;
    PKMetalBuffer * _pkUniformsBuffer;
    unsigned long long  _strokePointBufferOffset;
    unsigned long long  _uniformsBufferOffset;
}

@property (nonatomic, readonly) unsigned long long numPoints;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) <MTLBuffer> *strokePointBuffer;
@property (nonatomic, readonly) unsigned long long strokePointBufferOffset;
@property (nonatomic, readonly) <MTLBuffer> *uniformsBuffer;
@property (nonatomic, readonly) unsigned long long uniformsBufferOffset;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUniforms:(const struct PKMetalPaintKernelUniforms { unsigned int x1; unsigned int x2; unsigned int x3; float x4; float x5; }*)arg1 points:(const struct PKMetalPaintStrokePoint { float x1; unsigned int x2 : 16; unsigned int x3 : 16; }*)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5;
- (bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (unsigned long long)numPoints;
- (unsigned long long)numVertices;
- (id)strokePointBuffer;
- (unsigned long long)strokePointBufferOffset;
- (id)uniformsBuffer;
- (unsigned long long)uniformsBufferOffset;

@end
