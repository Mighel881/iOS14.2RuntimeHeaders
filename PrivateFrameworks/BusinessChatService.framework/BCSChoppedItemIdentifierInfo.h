/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSChoppedItemIdentifierInfo : NSObject {
    long long  _chopID;
    BCSLinkItemIdentifier * _itemIdentifier;
}

@property (nonatomic) long long chopID;
@property (nonatomic, retain) BCSLinkItemIdentifier *itemIdentifier;

+ (id)newWithLinkItemIdentifier:(id)arg1 chopID:(long long)arg2;

- (void).cxx_destruct;
- (long long)chopID;
- (id)itemIdentifier;
- (void)setChopID:(long long)arg1;
- (void)setItemIdentifier:(id)arg1;

@end
