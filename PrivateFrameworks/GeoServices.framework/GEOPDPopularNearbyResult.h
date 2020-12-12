/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_litePlaceResults : 1; 
        unsigned int read_sectionHeader : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _litePlaceResults;
    unsigned long long  _litePlaceResultsCount;
    unsigned long long  _litePlaceResultsSpace;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sectionHeader;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSectionHeader;
@property (nonatomic, readonly) struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*litePlaceResults;
@property (nonatomic, readonly) unsigned long long litePlaceResultsCount;
@property (nonatomic, retain) NSString *sectionHeader;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addLitePlaceResult:(struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearLitePlaceResults;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionHeader;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })litePlaceResultAtIndex:(unsigned long long)arg1;
- (struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)litePlaceResults;
- (unsigned long long)litePlaceResultsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionHeader;
- (void)setLitePlaceResults:(struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setSectionHeader:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end