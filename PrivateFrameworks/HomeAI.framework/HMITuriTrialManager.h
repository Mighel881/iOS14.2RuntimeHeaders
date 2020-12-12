/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMITuriTrialManager : HMFObject <HMFLogging> {
    NSString * _compiledModelArchivePath;
    double  _faceThreshold;
    NSString * _modelPath;
    double  _personThresholdHigh;
    double  _personThresholdMedium;
    double  _petThresholdHigh;
    double  _petThresholdMedium;
    TRIClient * _trialClient;
    double  _vehicleThresholdHigh;
    double  _vehicleThresholdMedium;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double faceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *modelPath;
@property (readonly) double personThresholdHigh;
@property (readonly) double personThresholdMedium;
@property (readonly) double petThresholdHigh;
@property (readonly) double petThresholdMedium;
@property (readonly) Class superclass;
@property (readonly) double vehicleThresholdHigh;
@property (readonly) double vehicleThresholdMedium;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)configure;
- (double)faceThreshold;
- (bool)loadModelFromTrialWithError:(id*)arg1;
- (id)modelPath;
- (double)personThresholdHigh;
- (double)personThresholdMedium;
- (double)petThresholdHigh;
- (double)petThresholdMedium;
- (void)registerForTrialUpdates;
- (void)submitUpdateModelTask;
- (void)updateLevels;
- (double)vehicleThresholdHigh;
- (double)vehicleThresholdMedium;

@end