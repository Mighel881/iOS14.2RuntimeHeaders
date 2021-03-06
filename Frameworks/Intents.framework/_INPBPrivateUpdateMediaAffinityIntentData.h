/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPrivateUpdateMediaAffinityIntentData : PBCodable <NSCopying, NSSecureCoding, _INPBPrivateUpdateMediaAffinityIntentData> {
    struct { }  _has;
    _INPBPrivateMediaIntentData * _privateMediaIntentData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPrivateMediaIntentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPrivateMediaIntentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateMediaIntentData;
- (bool)readFrom:(id)arg1;
- (void)setPrivateMediaIntentData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
