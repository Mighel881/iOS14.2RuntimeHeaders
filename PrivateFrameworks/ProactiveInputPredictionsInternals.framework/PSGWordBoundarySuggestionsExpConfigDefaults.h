/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
 */

@interface PSGWordBoundarySuggestionsExpConfigDefaults : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol> {
    NSString * _espressoBinFilePath;
    NSString * _experimentId;
    NSString * _inferenceModelConfigPath;
    bool  _isMLModelEnabled;
    NSString * _treatmentId;
    NSString * _treatmentName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *espressoBinFilePath;
@property (nonatomic, readonly) NSString *experimentId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inferenceModelConfigPath;
@property (nonatomic, readonly) bool isMLModelEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *treatmentId;
@property (nonatomic, readonly) NSString *treatmentName;

- (void).cxx_destruct;
- (id)espressoBinFilePath;
- (id)experimentId;
- (id)inferenceModelConfigPath;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfig:(id)arg1;
- (bool)isMLModelEnabled;
- (id)treatmentId;
- (id)treatmentName;

@end