/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMutableFeaturedItem : NSObject {
    unsigned short  _countForAlgorithm;
    unsigned short  _countForNECategory;
    unsigned int  _countInCal;
    unsigned int  _countInChat;
    unsigned int  _countInCoreRoutine;
    NSMutableArray * _countInHour;
    unsigned int  _countInMail;
    unsigned int  _countInMaps;
    unsigned int  _countInMobileCal;
    unsigned int  _countInMobileMail;
    unsigned int  _countInMobileNotes;
    unsigned int  _countInMobileSMS;
    unsigned int  _countInMobileSafari;
    unsigned int  _countInMobileSlideShow;
    unsigned int  _countInMusic;
    unsigned int  _countInNetflix;
    unsigned int  _countInNews;
    unsigned int  _countInNotes;
    unsigned int  _countInPodcast;
    unsigned int  _countInReminders;
    unsigned int  _countInSafari;
    unsigned int  _countInSpotify;
    unsigned int  _countInWebKit;
    unsigned int  _countInYelp;
    unsigned int  _countInYoutube;
    float  _decayRate;
    PPDecayedFeedbackCounts * _decayedFeedbackCounts;
    float  _decayedSum;
    unsigned int  _exactMatchInSourceTextCount;
    bool  _matchesPrimaryLanguage;
    float  _maxScore;
    float  _meanInterArrivalHour;
    float  _meanScore;
    float  _meanScoreWithOutliersRemoved;
    float  _meanSourceDateInHours;
    float  _minScore;
    unsigned long long  _namedEntityCharacterLength;
    unsigned short  _rankCount;
    float  _recordCount;
    float  _relativeTimeToRelevanceDate;
    NSDate * _scoringDate;
    PPSourceStats * _sourceStats;
    bool  _strictFiltering;
    unsigned long long  _sumContactHandleCount;
    unsigned long long  _sumDonationCount;
    float  _sumDwellTimeInHours;
    unsigned long long  _sumLengthCharacters;
    unsigned long long  _sumLengthSeconds;
    float  _timeElapsedInHours;
    float  _timeSpanInHours;
    unsigned long long  _uniqueAlgorithmCount;
    unsigned long long  _uniqueAssetVersionCount;
    unsigned long long  _uniqueBundleIdCount;
    unsigned long long  _uniqueGroupIdCount;
    unsigned long long  _uniqueNamedEntityCategoryCount;
    unsigned long long  _uniqueOsBuildCount;
    unsigned long long  _uniqueSourceDayOfWeekCount;
    unsigned long long  _uniqueSourceHourCount;
    bool  _userCreated;
    float  _varianceInterArrivalHour;
    float  _varianceScoreWithOutliersRemoved;
    float  _varianceSourceDateInHours;
}

@property (nonatomic, readonly) unsigned int countInCal;
@property (nonatomic, readonly) unsigned int countInChat;
@property (nonatomic, readonly) unsigned int countInCoreRoutine;
@property (nonatomic, readonly) NSMutableArray *countInHour;
@property (nonatomic, readonly) unsigned int countInMail;
@property (nonatomic, readonly) unsigned int countInMaps;
@property (nonatomic, readonly) unsigned int countInMobileCal;
@property (nonatomic, readonly) unsigned int countInMobileMail;
@property (nonatomic, readonly) unsigned int countInMobileNotes;
@property (nonatomic, readonly) unsigned int countInMobileSMS;
@property (nonatomic, readonly) unsigned int countInMobileSafari;
@property (nonatomic, readonly) unsigned int countInMobileSlideShow;
@property (nonatomic, readonly) unsigned int countInMusic;
@property (nonatomic, readonly) unsigned int countInNetflix;
@property (nonatomic, readonly) unsigned int countInNews;
@property (nonatomic, readonly) unsigned int countInNotes;
@property (nonatomic, readonly) unsigned int countInPodcast;
@property (nonatomic, readonly) unsigned int countInReminders;
@property (nonatomic, readonly) unsigned int countInSafari;
@property (nonatomic, readonly) unsigned int countInSpotify;
@property (nonatomic, readonly) unsigned int countInWebKit;
@property (nonatomic, readonly) unsigned int countInYelp;
@property (nonatomic, readonly) unsigned int countInYoutube;
@property (nonatomic, readonly) float decayRate;
@property (nonatomic, readonly) PPDecayedFeedbackCounts *decayedFeedbackCounts;
@property (nonatomic, readonly) float decayedSum;
@property (nonatomic, readonly) unsigned int exactMatchInSourceTextCount;
@property (nonatomic, readonly) bool matchesPrimaryLanguage;
@property (nonatomic, readonly) float maxScore;
@property (nonatomic, readonly) float meanInterArrivalHour;
@property (nonatomic, readonly) float meanScore;
@property (nonatomic, readonly) float meanScoreWithOutliersRemoved;
@property (nonatomic, readonly) float meanSourceDateInHours;
@property (nonatomic, readonly) float minScore;
@property (nonatomic, readonly) unsigned long long namedEntityCharacterLength;
@property (nonatomic, readonly) float recordCount;
@property (nonatomic, readonly) float relativeTimeToRelevanceDate;
@property (nonatomic, readonly) NSDate *scoringDate;
@property (nonatomic, readonly) PPSourceStats *sourceStats;
@property (nonatomic, readonly) bool strictFiltering;
@property (nonatomic, readonly) unsigned long long sumContactHandleCount;
@property (nonatomic, readonly) unsigned long long sumDonationCount;
@property (nonatomic, readonly) float sumDwellTimeInHours;
@property (nonatomic, readonly) unsigned long long sumLengthCharacters;
@property (nonatomic, readonly) unsigned long long sumLengthSeconds;
@property (nonatomic, readonly) float timeElapsedInHours;
@property (nonatomic, readonly) float timeSpanInHours;
@property (nonatomic, readonly) unsigned long long uniqueAlgorithmCount;
@property (nonatomic, readonly) unsigned long long uniqueAssetVersionCount;
@property (nonatomic, readonly) unsigned long long uniqueBundleIdCount;
@property (nonatomic, readonly) unsigned long long uniqueGroupIdCount;
@property (nonatomic, readonly) unsigned long long uniqueNamedEntityCategoryCount;
@property (nonatomic, readonly) unsigned long long uniqueOsBuildCount;
@property (nonatomic, readonly) unsigned long long uniqueSourceDayOfWeekCount;
@property (nonatomic, readonly) unsigned long long uniqueSourceHourCount;
@property (nonatomic, readonly) bool userCreated;
@property (nonatomic, readonly) float varianceInterArrivalHour;
@property (nonatomic, readonly) float varianceScoreWithOutliersRemoved;
@property (nonatomic, readonly) float varianceSourceDateInHours;

- (void).cxx_destruct;
- (id)computeModelScoreAndReturnFeaturesWithScoreInterpreter:(id)arg1;
- (float)computeModelScoreWithScoreInterpreter:(id)arg1;
- (unsigned int)countInCal;
- (unsigned int)countInChat;
- (unsigned int)countInCoreRoutine;
- (id)countInHour;
- (unsigned int)countInMail;
- (unsigned int)countInMaps;
- (unsigned int)countInMobileCal;
- (unsigned int)countInMobileMail;
- (unsigned int)countInMobileNotes;
- (unsigned int)countInMobileSMS;
- (unsigned int)countInMobileSafari;
- (unsigned int)countInMobileSlideShow;
- (unsigned int)countInMusic;
- (unsigned int)countInNetflix;
- (unsigned int)countInNews;
- (unsigned int)countInNotes;
- (unsigned int)countInPodcast;
- (unsigned int)countInReminders;
- (unsigned int)countInSafari;
- (unsigned int)countInSpotify;
- (unsigned int)countInWebKit;
- (unsigned int)countInYelp;
- (unsigned int)countInYoutube;
- (float)decayRate;
- (id)decayedFeedbackCounts;
- (float)decayedSum;
- (unsigned int)exactMatchInSourceTextCount;
- (id)initWithMutableAggregatedItem:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sourceStats:(id)arg4 decayedFeedbackCounts:(id)arg5 strictFiltering:(bool)arg6;
- (id /* block */)inputAssignmentBlock;
- (id /* block */)inputInitializationBlock;
- (bool)matchesPrimaryLanguage;
- (float)maxScore;
- (float)meanInterArrivalHour;
- (float)meanScore;
- (float)meanScoreWithOutliersRemoved;
- (float)meanSourceDateInHours;
- (float)minScore;
- (unsigned long long)namedEntityCharacterLength;
- (float)recordCount;
- (float)relativeTimeToRelevanceDate;
- (id)scoringDate;
- (id)sourceStats;
- (bool)strictFiltering;
- (unsigned long long)sumContactHandleCount;
- (unsigned long long)sumDonationCount;
- (float)sumDwellTimeInHours;
- (unsigned long long)sumLengthCharacters;
- (unsigned long long)sumLengthSeconds;
- (float)timeElapsedInHours;
- (float)timeSpanInHours;
- (unsigned long long)uniqueAlgorithmCount;
- (unsigned long long)uniqueAssetVersionCount;
- (unsigned long long)uniqueBundleIdCount;
- (unsigned long long)uniqueGroupIdCount;
- (unsigned long long)uniqueNamedEntityCategoryCount;
- (unsigned long long)uniqueOsBuildCount;
- (unsigned long long)uniqueSourceDayOfWeekCount;
- (unsigned long long)uniqueSourceHourCount;
- (void)updateSpecializedFeaturesNamedEntity:(id)arg1;
- (bool)userCreated;
- (float)varianceInterArrivalHour;
- (float)varianceScoreWithOutliersRemoved;
- (float)varianceSourceDateInHours;

@end