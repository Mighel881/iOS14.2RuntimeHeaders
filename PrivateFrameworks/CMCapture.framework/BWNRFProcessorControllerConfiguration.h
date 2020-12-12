/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWNRFProcessorControllerConfiguration : BWStillImageProcessorConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration> {
    bool  _alwaysAllowModifyingInputBuffers;
    bool  _deepFusionEnabled;
    bool  _deepFusionWaitForProcessingToFinish;
    bool  _depthDataDeliveryEnabled;
    unsigned int  _figThreadPriority;
    bool  _fusionEnabled;
    float  _gainMapMainImageDownscalingFactor;
    BWVideoFormat * _inputFormat;
    bool  _lowLightFusionEnabled;
    BWVideoFormat * _outputFormat;
    bool  _semanticRenderingEnabled;
    FigStillImageSharedProcessingResources * _sharedResources;
}

@property (nonatomic) bool alwaysAllowModifyingInputBuffers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deepFusionEnabled;
@property (nonatomic) bool deepFusionWaitForProcessingToFinish;
@property (nonatomic) bool deferredProcessingEnabled;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic) bool fusionEnabled;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic) bool lowLightFusionEnabled;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, retain) BWVideoFormat *outputFormat;
@property (nonatomic) bool semanticRenderingEnabled;
@property (nonatomic, retain) NSArray *sensorConfigurations;
@property (nonatomic, retain) FigStillImageSharedProcessingResources *sharedResources;
@property (readonly) Class superclass;

- (bool)alwaysAllowModifyingInputBuffers;
- (void)dealloc;
- (bool)deepFusionEnabled;
- (bool)deepFusionWaitForProcessingToFinish;
- (bool)depthDataDeliveryEnabled;
- (unsigned int)figThreadPriority;
- (bool)fusionEnabled;
- (float)gainMapMainImageDownscalingFactor;
- (id)inputFormat;
- (bool)lowLightFusionEnabled;
- (id)outputFormat;
- (bool)semanticRenderingEnabled;
- (void)setAlwaysAllowModifyingInputBuffers:(bool)arg1;
- (void)setDeepFusionEnabled:(bool)arg1;
- (void)setDeepFusionWaitForProcessingToFinish:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setGainMapMainImageDownscalingFactor:(float)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setLowLightFusionEnabled:(bool)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setSemanticRenderingEnabled:(bool)arg1;
- (void)setSharedResources:(id)arg1;
- (id)sharedResources;

@end