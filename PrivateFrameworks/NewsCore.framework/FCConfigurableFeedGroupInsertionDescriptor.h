/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCConfigurableFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor> {
    unsigned long long  _firstGroupMinPrecedingTopicGroups;
    unsigned long long  _minPrecedingTopicGroups;
    NSSet * _precedingSourceIdentifiers;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly) unsigned long long firstGroupMinPrecedingTopicGroups;
@property (nonatomic, readonly) unsigned long long minPrecedingTopicGroups;
@property (nonatomic, readonly, copy) NSSet *precedingSourceIdentifiers;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)firstGroupMinPrecedingTopicGroups;
- (id)init;
- (id)initWithSourceIdentifier:(id)arg1 precedingSourceIdentifiers:(id)arg2 firstGroupMinPrecedingTopicGroups:(unsigned long long)arg3 minPrecedingTopicGroups:(unsigned long long)arg4;
- (unsigned long long)minPrecedingTopicGroups;
- (id)precedingSourceIdentifiers;
- (id)sourceIdentifier;
- (bool)wantsToInsertGroupInContext:(id)arg1;

@end