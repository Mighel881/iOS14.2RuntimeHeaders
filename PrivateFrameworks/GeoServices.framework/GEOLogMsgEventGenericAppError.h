/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {
    long long  _appErrorCode;
    NSString * _appErrorDomain;
    struct { 
        unsigned int has_appErrorCode : 1; 
    }  _flags;
}

@property (nonatomic) long long appErrorCode;
@property (nonatomic, retain) NSString *appErrorDomain;
@property (nonatomic) bool hasAppErrorCode;
@property (nonatomic, readonly) bool hasAppErrorDomain;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (long long)appErrorCode;
- (id)appErrorDomain;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppErrorCode;
- (bool)hasAppErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppErrorCode:(long long)arg1;
- (void)setAppErrorDomain:(id)arg1;
- (void)setHasAppErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
