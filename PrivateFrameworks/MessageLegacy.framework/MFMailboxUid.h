/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailboxUid : NSObject <EDIndexableMailbox, EFPubliclyDescribable, NSCopying> {
    MailAccount * _account;
    unsigned int  _attributes;
    NSMutableArray * _children;
    MFMessageCriterion * _criterion;
    NSArray * _extraAttributes;
    long long  _mailboxID;
    MFWeakReferenceHolder * _parent;
    NSString * _pathComponent;
    NSNumber * _pendingLevel;
    NSString * _realFullPath;
    MailAccount * _representedAccount;
    _Atomic int  _type;
    NSMutableDictionary * _userInfo;
    bool  allCriteriaMustBeSatisfied;
    NSString * uniqueId;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, readonly) MFInvocationQueue *attachmentDownloadQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, retain) NSArray *extraAttributes;
@property (readonly) unsigned long long hash;
@property int mailboxType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) EMObjectID *objectID;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, readonly) unsigned long long suggestionsLostMessageSearchResultCount;
@property (nonatomic, readonly) double suggestionsLostMessageSearchTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)defaultScheduler;
+ (id)fileURLForMailboxURL:(id)arg1;
+ (bool)isDraftsMailboxType:(int)arg1;
+ (bool)isOutgoingMailboxType:(int)arg1;
+ (bool)isSentMailboxType:(int)arg1;
+ (bool)isStandardizedMailboxUidType:(int)arg1;
+ (id)specialNameForType:(int)arg1;
+ (bool)typeIsValidTransferDestination:(int)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLString;
- (id)URLStringNonNil;
- (id)URLWithAccount:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;
- (id)_loadUserInfo;
- (id)_mutableChildren;
- (id)_privacySafeDescription;
- (id)account;
- (id)accountDisplayName;
- (id)accountRelativePath;
- (void)addToPostOrderTraversal:(id)arg1;
- (bool)alwaysWriteFullMessageFile;
- (id)ancestralAccount;
- (id)attachmentDownloadQueue;
- (unsigned int)attributes;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)childEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(bool)arg1;
- (id)childWithExtraAttribute:(id)arg1;
- (id)childWithName:(id)arg1;
- (id)children;
- (long long)compareWithMailboxUid:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criterion;
- (id)debugDescription;
- (id)depthFirstEnumerator;
- (id)descendantWithExtraAttribute:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)displayNameUsingSpecialNames;
- (id)ef_publicDescription;
- (id)extraAttributes;
- (void)flushCriteria;
- (id)fullPath;
- (id)fullPathNonNil;
- (bool)hasChildren;
- (unsigned long long)indexOfChild:(id)arg1;
- (long long)indexToInsertChildMailboxUid:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (void)invalidate;
- (bool)isContainer;
- (bool)isDescendantOfMailbox:(id)arg1;
- (bool)isNotesMailboxUid;
- (bool)isOutgoingMailboxUid;
- (bool)isSentMailboxUid;
- (bool)isShared;
- (bool)isSpecialMailboxUid;
- (bool)isStandardizedMailboxUid;
- (bool)isStore;
- (bool)isValid;
- (bool)isVisible;
- (long long)mailboxID;
- (int)mailboxType;
- (bool)mergeWithUserInfo:(id)arg1;
- (id)mutableCopyOfChildren;
- (id)mutableDictionaryRepresentation;
- (id)name;
- (unsigned long long)nonDeletedCount;
- (unsigned long long)numberOfChildren;
- (unsigned long long)numberOfDescendants;
- (id)objectID;
- (id)oldURLString;
- (id)parent;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)persistentID;
- (id)realFullPath;
- (id)redactedName:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)representedAccount;
- (id)rootMailbox;
- (void)saveUserInfo;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (void)setAttributes:(unsigned int)arg1;
- (bool)setChildren:(id)arg1;
- (void)setCriterion:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setRepresentedAccount:(id)arg1;
- (void)setUserInfoBool:(bool)arg1 forKey:(id)arg2;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setUserInfoWithDictionary:(id)arg1;
- (bool)shouldRestoreMessagesAfterFailedDelete;
- (bool)shouldUseNonDeletedForUnreadCount;
- (void)sortChildren;
- (long long)statusCountDelta;
- (id)store;
- (unsigned long long)suggestionsLostMessageSearchResultCount;
- (double)suggestionsLostMessageSearchTimestamp;
- (id)topMailbox;
- (long long)type;
- (id)uniqueId;
- (unsigned long long)unreadCount;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (void)updateMostRecentStatusCount:(unsigned long long)arg1;
- (void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1;
- (bool)userInfoBoolForKey:(id)arg1;
- (id)userInfoDictionary;
- (id)userInfoForSerialization;
- (id)userInfoObjectForKey:(id)arg1;

@end