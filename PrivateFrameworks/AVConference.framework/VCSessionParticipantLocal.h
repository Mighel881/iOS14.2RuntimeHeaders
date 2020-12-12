/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantLocal : VCSessionParticipant <VCMomentTransportDelegate, VCSessionUplinkVideoStreamControllerDelegate, VCVideoCaptureClient, VCVideoSink> {
    NSMutableDictionary * _activeUplinkAudioStreams;
    NSMutableSet * _audioPayloadTypes;
    unsigned char  _audioPriorityDecayFast;
    unsigned char  _audioPriorityDecaySlow;
    unsigned char  _audioPriorityRampUp;
    struct opaqueCMSimpleQueue { } * _audioRedundancyChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _audioRedundancyEventPool;
    float  _audioSilencePowerAverageMultiplier;
    struct opaqueCMSimpleQueue { } * _audioStreamUpdateEventQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _audioStreamUpdatePool;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _audioTimestampRWLock;
    float  _audioVoiceDetectionSensitivity;
    float  _averageSilenceAudioPower;
    unsigned short  _connectionStatsStreamID;
    unsigned int  _currentUplinkTargetBitrate;
    unsigned int  _currentUplinkTotalBitrateAudio;
    unsigned int  _currentUplinkTotalBitrateVideo;
    int  _currentVideoCaptureFrameRate;
    bool  _enableRedundancy;
    bool  _enableVADFiltering;
    bool  _encryptionInfoReceived;
    double  _fecRatio;
    bool  _forcedAudioPriorityEnabled;
    double  _forcedAudioPriorityLastUpdateTime;
    unsigned char  _forcedAudioPriorityValue;
    unsigned char  _lastAudioPriority;
    double  _lastSentAudioHostTime;
    unsigned int  _lastSentAudioSampleTime;
    unsigned char  _lastVideoPriority;
    NSMutableSet * _localPublishedStreams;
    int  _maxSupportedMultiwayFrameRate;
    long long  _maxSupportedMultiwayVideoResolution;
    VCMoments * _moments;
    bool  _oneToOneModeEnabled;
    struct _VCSessionParticipantLocalOneToOneSettings { 
        struct tagHANDLE {} *mediaQueue; 
        VCRedundancyControllerAudio *audioRedundancyController; 
        VCRedundancyControllerVideo *videoRedundancyController; 
        VCSessionParticipantMediaStreamInfo *audioStreamInfo; 
        VCSessionParticipantMediaStreamInfo *videoStreamInfo; 
        VCSwitchManager *switchManager; 
        unsigned int targetBitrate; 
        unsigned int rateChangeCounter; 
    }  _oneToOneSettings;
    NSMutableArray * _peerSubscribedStreams;
    NSMutableDictionary * _pendingActiveUplinkVideoStreams;
    VCAudioPowerSpectrumSource * _powerSpectrumSource;
    bool  _shouldResize;
    int  _shouldUpdateActiveVideoStream;
    bool  _speechDetected;
    VCSessionUplinkBandwidthAllocator * _uplinkBandwidthAllocator;
    unsigned int  _uplinkBitrateCapCell;
    unsigned int  _uplinkBitrateCapWifi;
    VCSessionUplinkVideoStreamController * _uplinkVideoStreamController;
    NSMutableSet * _videoPayloadTypes;
    _Atomic unsigned char  _videoPriority;
    bool  _videoPriorityEnabled;
    struct opaqueCMSimpleQueue { } * _videoRedundancyChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _videoRedundancyPool;
    VCVideoRule * _videoRule;
    struct opaqueVCVoiceDetector { } * _voiceDetector;
}

@property (nonatomic, readonly) struct __CFString { }*activeStreamKeys;
@property (nonatomic, readonly) NSSet *audioPayloadTypes;
@property (nonatomic, readonly) unsigned short connectionStatsStreamID;
@property (nonatomic, readonly) unsigned int currentUplinkTotalBitrateAudio;
@property (nonatomic, readonly) unsigned int currentUplinkTotalBitrateVideo;
@property (nonatomic) int currentVideoCaptureFrameRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableVADFiltering;
@property (nonatomic) bool encryptionInfoReceived;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCMoments *moments;
@property (getter=isOneToOneModeEnabled, nonatomic) bool oneToOneModeEnabled;
@property (nonatomic, copy) NSArray *peerSubscribedStreams;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uplinkBitrateCapCell;
@property (nonatomic) unsigned int uplinkBitrateCapWifi;
@property (nonatomic, readonly) NSSet *videoPayloadTypes;

- (struct __CFString { }*)activeStreamKeys;
- (void)addCallInfoBlobToParticipantInfo:(id)arg1;
- (bool)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;
- (void)applyOneToOneVideoRedundancyPercentage:(unsigned int)arg1;
- (void)applyVideoEnabledSetting:(bool)arg1;
- (id)audioPayloadTypes;
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (void)avConferencePreviewError:(id)arg1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (void)cameraAvailabilityDidChange:(bool)arg1;
- (bool)checkSubscribedStreamsConsistency:(id)arg1;
- (id)clientCaptureRule;
- (void)collectAudioChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; double x4; }*)arg1;
- (void)collectVideoChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; double x4; }*)arg1;
- (bool)configureAudioIOWithDeviceRole:(int)arg1;
- (bool)configureWithOneToOneParticipantConfig:(id)arg1;
- (unsigned short)connectionStatsStreamID;
- (bool)containsStreamWithIDSStreamID:(unsigned short)arg1;
- (bool)containsStreamWithSSRC:(unsigned int)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)createOpaqueData;
- (bool)createParticipantInfo;
- (unsigned int)currentUplinkTotalBitrateAudio;
- (unsigned int)currentUplinkTotalBitrateVideo;
- (int)currentVideoCaptureFrameRate;
- (void)dealloc;
- (void)deregisterForVideoCapture;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (bool)enableRedundancy:(bool)arg1;
- (bool)enableVADFiltering;
- (bool)encryptionInfoReceived;
- (void)flushAudioEventQueue;
- (void)flushAudioRedundancyEventQueue;
- (void)flushVideoRedundancyEventQueue;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(bool)arg2 powerLevelDidChange:(bool)arg3;
- (void)generateKeyFrameWithStreamID:(unsigned short)arg1;
- (unsigned int)generateSSRC;
- (unsigned short)generateStreamID;
- (id)getAudioDumpName;
- (struct CGSize { double x1; double x2; })getCaptureEncodingSize;
- (void)handleActiveConnectionChange:(id)arg1;
- (id)initWithIDSDestination:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 sessionUUID:(id)arg5;
- (id)initWithIDSDestination:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 sessionUUID:(id)arg5 oneToOneModeEnabled:(bool)arg6 isGKVoiceChat:(bool)arg7;
- (bool)initializeMediaNegotiator;
- (void)initializeUplinkVideoStreamController;
- (bool)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(bool)arg2;
- (bool)isOneToOneModeEnabled;
- (id)moments;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1;
- (id)multiwayVideoStreamConfigs;
- (id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(bool)arg2;
- (int)negotiateOneToOne:(id)arg1;
- (id)newAudioStreamOneToOneConfiguration;
- (id)newMediaNegotiatorAudioConfiguration;
- (id)newVideoStreamOneToOneConfiguration;
- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (id)peerSubscribedStreams;
- (void)processAudioRedundancyChangeEvent;
- (void)processAudioStreamUpdateEvent;
- (void)processEventQueues;
- (void)processVideoEventQueue;
- (void)processVideoPriority;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[16]; })arg2;
- (void)registerForVideoCapture:(int)arg1;
- (void)setCurrentVideoCaptureFrameRate:(int)arg1;
- (void)setEnableVADFiltering:(bool)arg1;
- (void)setEncryptionInfoReceived:(bool)arg1;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1;
- (void)setPeerSubscribedStreams:(id)arg1;
- (bool)setState:(unsigned int)arg1;
- (void)setUplinkBitrateCapCell:(unsigned int)arg1;
- (void)setUplinkBitrateCapWifi:(unsigned int)arg1;
- (bool)setupAudioStreamWithConfiguration:(id)arg1;
- (bool)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (bool)setupAudioStreamsWithConfigProvider:(id)arg1;
- (bool)setupAudioStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;
- (int)setupMaxCaptureFrameRate;
- (long long)setupMaxCaptureResolution;
- (void)setupOneToOneAudioRedundancyController;
- (bool)setupOneToOneRedundancyControllers;
- (void)setupOneToOneSwitchManager;
- (void)setupOneToOneVideoRedundancyController;
- (id)setupStreamRTP:(id)arg1;
- (bool)setupVideoStreamWithConfiguration:(id)arg1;
- (bool)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (bool)setupVideoStreamsWithConfigProvider:(id)arg1;
- (bool)setupVideoStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)start;
- (void)startVoiceActivityDetection;
- (void)stop;
- (void)stopAudioIOCompletion;
- (void)stopVoiceActivityDetection;
- (id)supportedAudioRules;
- (void)thermalLevelDidChange:(int)arg1;
- (void)updateActiveAudioStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveAudioStreams:(id)arg1 allStreamIds:(id)arg2;
- (void)updateActiveVideoStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveVideoStreamWithTargetBitrateForMultiway:(unsigned int)arg1;
- (void)updateActiveVoiceOnly;
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)updateMediaSettingsWithConfig:(id)arg1;
- (void)updateMomentsCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;
- (void)updatePayloadTypesWithConfigProvider:(id)arg1;
- (void)updateStreamIDCompoundingWithActiveStreamIds:(id)arg1 streamIds:(id)arg2 block:(id /* block */)arg3;
- (void)updateSupportedAudioRules:(id)arg1;
- (void)updateTargetBitrateOneToOne:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (void)updateUplinkTargetBitrate:(unsigned int)arg1;
- (void)updateVideoOneToOneBitrate;
- (void)updateVideoPaused:(bool)arg1;
- (void)updateVideoStreamAndProcessFrame:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 lastSentAudioHostTime:(double)arg3 lastSentAudioSampleTime:(unsigned int)arg4 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg6;
- (unsigned int)uplinkBitrateCapCell;
- (unsigned int)uplinkBitrateCapWifi;
- (id)videoPayloadTypes;

@end