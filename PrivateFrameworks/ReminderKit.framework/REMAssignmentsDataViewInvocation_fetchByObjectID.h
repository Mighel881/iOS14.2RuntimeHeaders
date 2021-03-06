/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMAssignmentsDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {
    NSArray * _objectIDs;
    bool  _showLazyDeleteObjects;
}

@property (nonatomic, readonly) NSArray *objectIDs;
@property (nonatomic) bool showLazyDeleteObjects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;
- (void)setShowLazyDeleteObjects:(bool)arg1;
- (bool)showLazyDeleteObjects;

@end
