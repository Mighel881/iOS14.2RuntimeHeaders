/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneSubscription : CKSubscription <NSCopying, NSSecureCoding> {
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setRecordType:(id)arg1;
- (id)zoneID;

@end