/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCGPUDeviceOps : MLCDeviceOps {
    int  _arithmeticOp;
    NSArray * _begin;
    NSArray * _bnMovingUpdateKernels;
    NSArray * _centerWeightVectors;
    id  _combinedForwardAndGradientLossKernel;
    NSArray * _count;
    bool  _countIncludesPadding;
    NSArray * _end;
    id  _exportableState;
    id  _forwardKernel;
    id  _forwardStatisticsKernel;
    id  _gradientKernel;
    id  _gradientState;
    id  _gradientStatisticsKernel;
    id  _imageToMatrixCopyKernel;
    _MLCGPULayer * _layer;
    id  _lossInitialGradientKernel;
    NSMutableArray * _matrixDescsBackward;
    NSMutableArray * _matrixDescsForward;
    id  _matrixToImageCopyKernel;
    NSArray * _momentumVectors;
    id  _movingState;
    MLCActivationDescriptor * _neuronDescriptor;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingTop;
    bool  _permutationNeededForFC;
    id  _permuteKernel;
    id  _reduceLossKernel;
    id  _secondaryGradientKernel;
    NSArray * _source0Shape;
    NSArray * _source1Shape;
    NSArray * _stride;
    unsigned long long  _totalElementsPerChannel;
    bool  _transposeX;
    bool  _transposeY;
    bool  _useSourceGradientDeviceMemoryForResultGradientTensor;
    bool  _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
    NSArray * _velocityVectors;
}

@property (nonatomic) int arithmeticOp;
@property (nonatomic, copy) NSArray *begin;
@property (nonatomic, retain) NSArray *bnMovingUpdateKernels;
@property (nonatomic, retain) NSArray *centerWeightVectors;
@property (nonatomic, retain) id combinedForwardAndGradientLossKernel;
@property (nonatomic, copy) NSArray *count;
@property (nonatomic) bool countIncludesPadding;
@property (nonatomic, copy) NSArray *end;
@property (nonatomic, retain) id exportableState;
@property (nonatomic, readonly, retain) id forwardKernel;
@property (nonatomic, retain) id forwardStatisticsKernel;
@property (nonatomic, readonly, retain) id gradientKernel;
@property (nonatomic, retain) id gradientState;
@property (nonatomic, retain) id gradientStatisticsKernel;
@property (nonatomic, retain) id imageToMatrixCopyKernel;
@property (nonatomic, retain) _MLCGPULayer *layer;
@property (nonatomic, retain) id lossInitialGradientKernel;
@property (nonatomic, retain) NSMutableArray *matrixDescsBackward;
@property (nonatomic, retain) NSMutableArray *matrixDescsForward;
@property (nonatomic, retain) id matrixToImageCopyKernel;
@property (nonatomic, retain) NSArray *momentumVectors;
@property (nonatomic, retain) id movingState;
@property (nonatomic, retain) MLCActivationDescriptor *neuronDescriptor;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) bool permutationNeededForFC;
@property (nonatomic, retain) id permuteKernel;
@property (nonatomic, retain) id reduceLossKernel;
@property (nonatomic, readonly, retain) id secondaryGradientKernel;
@property (nonatomic, copy) NSArray *source0Shape;
@property (nonatomic, copy) NSArray *source1Shape;
@property (nonatomic, copy) NSArray *stride;
@property (nonatomic) unsigned long long totalElementsPerChannel;
@property (nonatomic) bool transposeX;
@property (nonatomic) bool transposeY;
@property (nonatomic) bool useSourceGradientDeviceMemoryForResultGradientTensor;
@property (nonatomic) bool useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
@property (nonatomic, retain) NSArray *velocityVectors;

+ (id)deviceOps;
+ (id)deviceOpsWithForwardKernel:(id)arg1;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3;
+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5;

- (void).cxx_destruct;
- (int)arithmeticOp;
- (id)begin;
- (id)bnMovingUpdateKernels;
- (id)centerWeightVectors;
- (id)combinedForwardAndGradientLossKernel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)count;
- (bool)countIncludesPadding;
- (id)description;
- (id)end;
- (id)exportableState;
- (id)forwardKernel;
- (id)forwardStatisticsKernel;
- (id)gradientKernel;
- (id)gradientState;
- (id)gradientStatisticsKernel;
- (id)imageToMatrixCopyKernel;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5;
- (id)layer;
- (id)lossInitialGradientKernel;
- (id)matrixDescsBackward;
- (id)matrixDescsForward;
- (id)matrixToImageCopyKernel;
- (id)momentumVectors;
- (id)movingState;
- (id)neuronDescriptor;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingTop;
- (bool)permutationNeededForFC;
- (id)permuteKernel;
- (id)reduceLossKernel;
- (id)secondaryGradientKernel;
- (void)setArithmeticOp:(int)arg1;
- (void)setBegin:(id)arg1;
- (void)setBnMovingUpdateKernels:(id)arg1;
- (void)setCenterWeightVectors:(id)arg1;
- (void)setCombinedForwardAndGradientLossKernel:(id)arg1;
- (void)setCount:(id)arg1;
- (void)setCountIncludesPadding:(bool)arg1;
- (void)setEnd:(id)arg1;
- (void)setExportableState:(id)arg1;
- (void)setForwardStatisticsKernel:(id)arg1;
- (void)setGradientState:(id)arg1;
- (void)setGradientStatisticsKernel:(id)arg1;
- (void)setImageToMatrixCopyKernel:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setLossInitialGradientKernel:(id)arg1;
- (void)setMatrixDescsBackward:(id)arg1;
- (void)setMatrixDescsForward:(id)arg1;
- (void)setMatrixToImageCopyKernel:(id)arg1;
- (void)setMomentumVectors:(id)arg1;
- (void)setMovingState:(id)arg1;
- (void)setNeuronDescriptor:(id)arg1;
- (void)setPaddingBottom:(unsigned long long)arg1;
- (void)setPaddingLeft:(unsigned long long)arg1;
- (void)setPaddingRight:(unsigned long long)arg1;
- (void)setPaddingTop:(unsigned long long)arg1;
- (void)setPermutationNeededForFC:(bool)arg1;
- (void)setPermuteKernel:(id)arg1;
- (void)setReduceLossKernel:(id)arg1;
- (void)setSource0Shape:(id)arg1;
- (void)setSource1Shape:(id)arg1;
- (void)setStride:(id)arg1;
- (void)setTotalElementsPerChannel:(unsigned long long)arg1;
- (void)setTransposeX:(bool)arg1;
- (void)setTransposeY:(bool)arg1;
- (void)setUseSourceGradientDeviceMemoryForResultGradientTensor:(bool)arg1;
- (void)setUseSourceGradientDeviceMemoryForSecondaryResultGradientTensor:(bool)arg1;
- (void)setVelocityVectors:(id)arg1;
- (id)source0Shape;
- (id)source1Shape;
- (id)stride;
- (unsigned long long)totalElementsPerChannel;
- (bool)transposeX;
- (bool)transposeY;
- (bool)useSourceGradientDeviceMemoryForResultGradientTensor;
- (bool)useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
- (id)velocityVectors;

@end
