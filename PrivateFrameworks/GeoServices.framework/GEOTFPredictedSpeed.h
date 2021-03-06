/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {
    unsigned int  _deltaMinutesInFuture;
    struct { 
        unsigned int has_deltaMinutesInFuture : 1; 
        unsigned int has_speed : 1; 
    }  _flags;
    unsigned int  _speed;
}

@property (nonatomic) unsigned int deltaMinutesInFuture;
@property (nonatomic) bool hasDeltaMinutesInFuture;
@property (nonatomic) bool hasSpeed;
@property (nonatomic) unsigned int speed;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deltaMinutesInFuture;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeltaMinutesInFuture;
- (bool)hasSpeed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeltaMinutesInFuture:(unsigned int)arg1;
- (void)setHasDeltaMinutesInFuture:(bool)arg1;
- (void)setHasSpeed:(bool)arg1;
- (void)setSpeed:(unsigned int)arg1;
- (unsigned int)speed;
- (void)writeTo:(id)arg1;

@end
