/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRIFactor : TRIPBMessage

@property (nonatomic) bool hasId_p;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasNamespaceId;
@property (nonatomic) bool hasNamespaceName;
@property (nonatomic) bool hasType;
@property (nonatomic, copy) NSString *id_p;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int namespaceId;
@property (nonatomic, copy) NSString *namespaceName;
@property (nonatomic) int type;

+ (id)descriptor;

- (bool)hasNamespace;
- (bool)isInNamespaceName:(id)arg1;
- (id)namespaceString;
- (id)typeString;

@end
