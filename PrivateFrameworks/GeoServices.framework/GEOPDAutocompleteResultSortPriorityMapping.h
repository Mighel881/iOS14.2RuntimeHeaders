/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int has_resultSubtype : 1; 
        unsigned int has_resultType : 1; 
        unsigned int has_sortPriority : 1; 
    }  _flags;
    int  _resultSubtype;
    int  _resultType;
    int  _sortPriority;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasResultSubtype;
@property (nonatomic) bool hasResultType;
@property (nonatomic) bool hasSortPriority;
@property (nonatomic) int resultSubtype;
@property (nonatomic) int resultType;
@property (nonatomic) int sortPriority;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsResultSubtype:(id)arg1;
- (int)StringAsResultType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResultSubtype;
- (bool)hasResultType;
- (bool)hasSortPriority;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultSubtype;
- (id)resultSubtypeAsString:(int)arg1;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setHasResultSubtype:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasSortPriority:(bool)arg1;
- (void)setResultSubtype:(int)arg1;
- (void)setResultType:(int)arg1;
- (void)setSortPriority:(int)arg1;
- (int)sortPriority;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end