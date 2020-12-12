/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventDirections : PBCodable <NSCopying> {
    bool  _acceptedCyclingWorkout;
    bool  _arrivedAtDestination;
    bool  _batteryDied;
    bool  _chargingStopAdded;
    NSMutableArray * _directionsFeedbacks;
    NSMutableArray * _durationInNavigationModes;
    double  _durationOfTrip;
    NSString * _evChargingMode;
    NSString * _evConsumptionModel;
    GEOLocation * _finalLocation;
    struct { 
        unsigned int has_navigationAudioFeedback : 1; 
        unsigned int has_navSessionId : 1; 
        unsigned int has_durationOfTrip : 1; 
        unsigned int has_originalEta : 1; 
        unsigned int has_stateOfChargeAtDestActual : 1; 
        unsigned int has_stateOfChargeAtDestPredicted : 1; 
        unsigned int has_stateOfChargeAtOrigin : 1; 
        unsigned int has_stateOfChargeDiffAtDest : 1; 
        unsigned int has_acceptedCyclingWorkout : 1; 
        unsigned int has_arrivedAtDestination : 1; 
        unsigned int has_batteryDied : 1; 
        unsigned int has_chargingStopAdded : 1; 
        unsigned int has_isBadEvExperience : 1; 
        unsigned int has_isCoarseLocationUsed : 1; 
        unsigned int has_isCyclingNlgAvailable : 1; 
        unsigned int has_isEvSampleTrip : 1; 
        unsigned int has_isSiriEngaged : 1; 
        unsigned int has_isVlfImprovementUsed : 1; 
        unsigned int has_preArrival : 1; 
        unsigned int read_directionsFeedbacks : 1; 
        unsigned int read_durationInNavigationModes : 1; 
        unsigned int read_evChargingMode : 1; 
        unsigned int read_evConsumptionModel : 1; 
        unsigned int read_finalLocation : 1; 
        unsigned int read_tripOrigin : 1; 
        unsigned int read_waypoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isBadEvExperience;
    bool  _isCoarseLocationUsed;
    bool  _isCyclingNlgAvailable;
    bool  _isEvSampleTrip;
    bool  _isSiriEngaged;
    bool  _isVlfImprovementUsed;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _navSessionId;
    struct GEONavigationAudioFeedback { 
        bool _bTHFPAvailableAtEndOfNav; 
        bool _bTHFPRoutesAvailable; 
        bool _currentRouteHFPEnabledAtEndOfNav; 
        int _currentRouteTypeAtEndOfNav; 
        bool _everManuallyChangedRoute; 
        bool _everManuallyEnabledHFPRoute; 
        bool _everViewedAudioSheet; 
        bool _everViewedAudioSheetBTAny; 
        bool _everViewedAudioSheetBTHFP; 
        unsigned int _manuallyChangedRouteCount; 
        unsigned int _manuallyDisabledHFPCount; 
        unsigned int _manuallyEnabledHFPCount; 
        bool _pauseSpokenAudioEnabled; 
        unsigned int _spokenPromptsCount; 
        bool _viewedAudioSheet; 
        bool _viewedAudioSheetBTAny; 
        bool _viewedAudioSheetBTHFP; 
        bool _wirelessRoutesAvailable; 
        struct { 
            unsigned int bTHFPAvailableAtEndOfNav : 1; 
            unsigned int bTHFPRoutesAvailable : 1; 
            unsigned int currentRouteHFPEnabledAtEndOfNav : 1; 
            unsigned int currentRouteTypeAtEndOfNav : 1; 
            unsigned int everManuallyChangedRoute : 1; 
            unsigned int everManuallyEnabledHFPRoute : 1; 
            unsigned int everViewedAudioSheet : 1; 
            unsigned int everViewedAudioSheetBTAny : 1; 
            unsigned int everViewedAudioSheetBTHFP : 1; 
            unsigned int manuallyChangedRouteCount : 1; 
            unsigned int manuallyDisabledHFPCount : 1; 
            unsigned int manuallyEnabledHFPCount : 1; 
            unsigned int pauseSpokenAudioEnabled : 1; 
            unsigned int spokenPromptsCount : 1; 
            unsigned int viewedAudioSheet : 1; 
            unsigned int viewedAudioSheetBTAny : 1; 
            unsigned int viewedAudioSheetBTHFP : 1; 
            unsigned int wirelessRoutesAvailable : 1; 
        } _has; 
    }  _navigationAudioFeedback;
    unsigned int  _originalEta;
    bool  _preArrival;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _stateOfChargeAtDestActual;
    unsigned int  _stateOfChargeAtDestPredicted;
    unsigned int  _stateOfChargeAtOrigin;
    unsigned int  _stateOfChargeDiffAtDest;
    GEOLatLng * _tripOrigin;
    NSMutableArray * _waypoints;
}

@property (nonatomic) bool acceptedCyclingWorkout;
@property (nonatomic) bool arrivedAtDestination;
@property (nonatomic) bool batteryDied;
@property (nonatomic) bool chargingStopAdded;
@property (nonatomic, retain) NSMutableArray *directionsFeedbacks;
@property (nonatomic, retain) NSMutableArray *durationInNavigationModes;
@property (nonatomic) double durationOfTrip;
@property (nonatomic, retain) NSString *evChargingMode;
@property (nonatomic, retain) NSString *evConsumptionModel;
@property (nonatomic, retain) GEOLocation *finalLocation;
@property (nonatomic) bool hasAcceptedCyclingWorkout;
@property (nonatomic) bool hasArrivedAtDestination;
@property (nonatomic) bool hasBatteryDied;
@property (nonatomic) bool hasChargingStopAdded;
@property (nonatomic) bool hasDurationOfTrip;
@property (nonatomic, readonly) bool hasEvChargingMode;
@property (nonatomic, readonly) bool hasEvConsumptionModel;
@property (nonatomic, readonly) bool hasFinalLocation;
@property (nonatomic) bool hasIsBadEvExperience;
@property (nonatomic) bool hasIsCoarseLocationUsed;
@property (nonatomic) bool hasIsCyclingNlgAvailable;
@property (nonatomic) bool hasIsEvSampleTrip;
@property (nonatomic) bool hasIsSiriEngaged;
@property (nonatomic) bool hasIsVlfImprovementUsed;
@property (nonatomic) bool hasNavSessionId;
@property (nonatomic) bool hasNavigationAudioFeedback;
@property (nonatomic) bool hasOriginalEta;
@property (nonatomic) bool hasPreArrival;
@property (nonatomic) bool hasStateOfChargeAtDestActual;
@property (nonatomic) bool hasStateOfChargeAtDestPredicted;
@property (nonatomic) bool hasStateOfChargeAtOrigin;
@property (nonatomic) bool hasStateOfChargeDiffAtDest;
@property (nonatomic, readonly) bool hasTripOrigin;
@property (nonatomic) bool isBadEvExperience;
@property (nonatomic) bool isCoarseLocationUsed;
@property (nonatomic) bool isCyclingNlgAvailable;
@property (nonatomic) bool isEvSampleTrip;
@property (nonatomic) bool isSiriEngaged;
@property (nonatomic) bool isVlfImprovementUsed;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } navSessionId;
@property (nonatomic) struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; } navigationAudioFeedback;
@property (nonatomic) unsigned int originalEta;
@property (nonatomic) bool preArrival;
@property (nonatomic) unsigned int stateOfChargeAtDestActual;
@property (nonatomic) unsigned int stateOfChargeAtDestPredicted;
@property (nonatomic) unsigned int stateOfChargeAtOrigin;
@property (nonatomic) unsigned int stateOfChargeDiffAtDest;
@property (nonatomic, retain) GEOLatLng *tripOrigin;
@property (nonatomic, retain) NSMutableArray *waypoints;

+ (Class)directionsFeedbackType;
+ (Class)durationInNavigationModeType;
+ (bool)isValid:(id)arg1;
+ (Class)waypointsType;

- (void).cxx_destruct;
- (bool)acceptedCyclingWorkout;
- (void)addDirectionsFeedback:(id)arg1;
- (void)addDurationInNavigationMode:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (bool)arrivedAtDestination;
- (bool)batteryDied;
- (bool)chargingStopAdded;
- (void)clearDirectionsFeedbacks;
- (void)clearDurationInNavigationModes;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (id)directionsFeedbacks;
- (unsigned long long)directionsFeedbacksCount;
- (id)durationInNavigationModeAtIndex:(unsigned long long)arg1;
- (id)durationInNavigationModes;
- (unsigned long long)durationInNavigationModesCount;
- (double)durationOfTrip;
- (id)evChargingMode;
- (id)evConsumptionModel;
- (id)finalLocation;
- (bool)hasAcceptedCyclingWorkout;
- (bool)hasArrivedAtDestination;
- (bool)hasBatteryDied;
- (bool)hasChargingStopAdded;
- (bool)hasDurationOfTrip;
- (bool)hasEvChargingMode;
- (bool)hasEvConsumptionModel;
- (bool)hasFinalLocation;
- (bool)hasIsBadEvExperience;
- (bool)hasIsCoarseLocationUsed;
- (bool)hasIsCyclingNlgAvailable;
- (bool)hasIsEvSampleTrip;
- (bool)hasIsSiriEngaged;
- (bool)hasIsVlfImprovementUsed;
- (bool)hasNavSessionId;
- (bool)hasNavigationAudioFeedback;
- (bool)hasOriginalEta;
- (bool)hasPreArrival;
- (bool)hasStateOfChargeAtDestActual;
- (bool)hasStateOfChargeAtDestPredicted;
- (bool)hasStateOfChargeAtOrigin;
- (bool)hasStateOfChargeDiffAtDest;
- (bool)hasTripOrigin;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isBadEvExperience;
- (bool)isCoarseLocationUsed;
- (bool)isCyclingNlgAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isEvSampleTrip;
- (bool)isSiriEngaged;
- (bool)isVlfImprovementUsed;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })navSessionId;
- (struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })navigationAudioFeedback;
- (unsigned int)originalEta;
- (bool)preArrival;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAcceptedCyclingWorkout:(bool)arg1;
- (void)setArrivedAtDestination:(bool)arg1;
- (void)setBatteryDied:(bool)arg1;
- (void)setChargingStopAdded:(bool)arg1;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setDurationInNavigationModes:(id)arg1;
- (void)setDurationOfTrip:(double)arg1;
- (void)setEvChargingMode:(id)arg1;
- (void)setEvConsumptionModel:(id)arg1;
- (void)setFinalLocation:(id)arg1;
- (void)setHasAcceptedCyclingWorkout:(bool)arg1;
- (void)setHasArrivedAtDestination:(bool)arg1;
- (void)setHasBatteryDied:(bool)arg1;
- (void)setHasChargingStopAdded:(bool)arg1;
- (void)setHasDurationOfTrip:(bool)arg1;
- (void)setHasIsBadEvExperience:(bool)arg1;
- (void)setHasIsCoarseLocationUsed:(bool)arg1;
- (void)setHasIsCyclingNlgAvailable:(bool)arg1;
- (void)setHasIsEvSampleTrip:(bool)arg1;
- (void)setHasIsSiriEngaged:(bool)arg1;
- (void)setHasIsVlfImprovementUsed:(bool)arg1;
- (void)setHasNavSessionId:(bool)arg1;
- (void)setHasNavigationAudioFeedback:(bool)arg1;
- (void)setHasOriginalEta:(bool)arg1;
- (void)setHasPreArrival:(bool)arg1;
- (void)setHasStateOfChargeAtDestActual:(bool)arg1;
- (void)setHasStateOfChargeAtDestPredicted:(bool)arg1;
- (void)setHasStateOfChargeAtOrigin:(bool)arg1;
- (void)setHasStateOfChargeDiffAtDest:(bool)arg1;
- (void)setIsBadEvExperience:(bool)arg1;
- (void)setIsCoarseLocationUsed:(bool)arg1;
- (void)setIsCyclingNlgAvailable:(bool)arg1;
- (void)setIsEvSampleTrip:(bool)arg1;
- (void)setIsSiriEngaged:(bool)arg1;
- (void)setIsVlfImprovementUsed:(bool)arg1;
- (void)setNavSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNavigationAudioFeedback:(struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })arg1;
- (void)setOriginalEta:(unsigned int)arg1;
- (void)setPreArrival:(bool)arg1;
- (void)setStateOfChargeAtDestActual:(unsigned int)arg1;
- (void)setStateOfChargeAtDestPredicted:(unsigned int)arg1;
- (void)setStateOfChargeAtOrigin:(unsigned int)arg1;
- (void)setStateOfChargeDiffAtDest:(unsigned int)arg1;
- (void)setTripOrigin:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (unsigned int)stateOfChargeAtDestActual;
- (unsigned int)stateOfChargeAtDestPredicted;
- (unsigned int)stateOfChargeAtOrigin;
- (unsigned int)stateOfChargeDiffAtDest;
- (id)tripOrigin;
- (id)waypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

@end