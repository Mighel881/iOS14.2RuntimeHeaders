/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlaybackDetails : PBCodable <NSCopying> {
    NSMutableArray * _bookmarks;
    double  _currentPosition;
    int  _eventType;
    struct { 
        unsigned int currentPosition : 1; 
        unsigned int pedestrianTraceStartRelativeTimestamp : 1; 
        unsigned int traceDuration : 1; 
        unsigned int eventType : 1; 
        unsigned int recordedBookmarkID : 1; 
    }  _has;
    NSString * _pedestrianTracePath;
    double  _pedestrianTraceStartRelativeTimestamp;
    unsigned int  _recordedBookmarkID;
    double  _traceDuration;
    NSString * _tracePath;
}

@property (nonatomic, retain) NSMutableArray *bookmarks;
@property (nonatomic) double currentPosition;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasCurrentPosition;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasPedestrianTracePath;
@property (nonatomic) bool hasPedestrianTraceStartRelativeTimestamp;
@property (nonatomic) bool hasRecordedBookmarkID;
@property (nonatomic) bool hasTraceDuration;
@property (nonatomic, readonly) bool hasTracePath;
@property (nonatomic, retain) NSString *pedestrianTracePath;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;
@property (nonatomic) unsigned int recordedBookmarkID;
@property (nonatomic) double traceDuration;
@property (nonatomic, retain) NSString *tracePath;

+ (Class)bookmarkType;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)addBookmark:(id)arg1;
- (id)bookmarkAtIndex:(unsigned long long)arg1;
- (id)bookmarks;
- (unsigned long long)bookmarksCount;
- (void)clearBookmarks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentPosition;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasCurrentPosition;
- (bool)hasEventType;
- (bool)hasPedestrianTracePath;
- (bool)hasPedestrianTraceStartRelativeTimestamp;
- (bool)hasRecordedBookmarkID;
- (bool)hasTraceDuration;
- (bool)hasTracePath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pedestrianTracePath;
- (double)pedestrianTraceStartRelativeTimestamp;
- (bool)readFrom:(id)arg1;
- (unsigned int)recordedBookmarkID;
- (void)setBookmarks:(id)arg1;
- (void)setCurrentPosition:(double)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasCurrentPosition:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasPedestrianTraceStartRelativeTimestamp:(bool)arg1;
- (void)setHasRecordedBookmarkID:(bool)arg1;
- (void)setHasTraceDuration:(bool)arg1;
- (void)setPedestrianTracePath:(id)arg1;
- (void)setPedestrianTraceStartRelativeTimestamp:(double)arg1;
- (void)setRecordedBookmarkID:(unsigned int)arg1;
- (void)setTraceDuration:(double)arg1;
- (void)setTracePath:(id)arg1;
- (double)traceDuration;
- (id)tracePath;
- (void)writeTo:(id)arg1;

@end
