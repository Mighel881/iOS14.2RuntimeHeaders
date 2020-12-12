/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStreamingCameraCalibrationDataNode : BWNode {
    NSDictionary * _cameraInfoByPortType;
    int  _horizontalSensorBinningFactor;
    struct { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _lensDistortionCorrectionBasePolynomial;
    struct { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _lensDistortionCorrectionDynamicPolynomial;
    bool  _mirroringEnabled;
    float  _pixelSizeInMicrons;
    int  _rotationDegrees;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) bool mirroringEnabled;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) int verticalSensorBinningFactor;

+ (void)initialize;

- (id)_cameraCalibrationDataDictionaryFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 portType:(id)arg2;
- (int)_getDistortionCoefficientsWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 lensDistortionCoefficientsOut:(id*)arg2 inverseLensDistortionCoefficientsOut:(id*)arg3;
- (int)_getLensDistortionCenterWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 referenceDimensions:(struct CGSize { double x1; double x2; })arg2 distortionCenterOut:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)dealloc;
- (int)horizontalSensorBinningFactor;
- (id)initWithCameraInfoByPortType:(id)arg1;
- (bool)mirroringEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotationDegrees;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (int)verticalSensorBinningFactor;

@end