/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContextMenuGenerator : NSObject

+ (id)_menuActionToInitiateFaceTimeAudioForConversation:(id)arg1 andContactsManager:(id)arg2;
+ (id)_menuActionToInitiateFaceTimeVideoForConversation:(id)arg1 andContactsManager:(id)arg2;
+ (id)_menuActionToInviteHandleToShareTheirScreen:(id)arg1;
+ (id)_menuActionToSendEmailForConversation:(id)arg1 andContactsManager:(id)arg2;
+ (id)_menuActionToShareMyScreenWithHandle:(id)arg1;
+ (id)conversationSubmenuForHandle:(id)arg1 allowingRemovalFromConversation:(id)arg2 includeAddToContactsAction:(bool)arg3;
+ (id)menuActionToCreateContactForID:(id)arg1 handler:(id /* block */)arg2;
+ (id)menuActionToDisplayRecipientForHandle:(id)arg1;
+ (id)menuActionToInitiateFaceTimeAudioWithHandle:(id)arg1 andContactsManager:(id)arg2;
+ (id)menuActionToInitiateFaceTimeVideoWithHandle:(id)arg1 andContactsManager:(id)arg2;
+ (id)menuActionToOpenContactCardForContact:(id)arg1;
+ (id)menuActionToRemoveHandle:(id)arg1 fromConversation:(id)arg2;
+ (id)menuActionToSendEmailToAddress:(id)arg1;
+ (id)menuActionToSendPrivateMessageToHandleID:(id)arg1;
+ (id)menuActionToShowIDAsLargeType:(id)arg1 handler:(id /* block */)arg2;
+ (id)menuActionsToInitiateRelayPhoneCallWithHandle:(id)arg1;
+ (id)menuForNamedGroupConversation:(id)arg1 andContactsManager:(id)arg2;
+ (id)recipientSubmenuForHandle:(id)arg1;
+ (id)relayPhoneCallActionTextForPhoneNumber:(id)arg1;
+ (id)subMenuForScreenSharingOptionsWithHandle:(id)arg1;
+ (bool)supportsRelayPhoneCallsCalls;

@end
