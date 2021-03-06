/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMFindChatProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount * _account;
    IMDChatRegistry * _chatRegistry;
}

- (void).cxx_destruct;
- (id)_findGroupChatWithFromIdentifier:(id)arg1 toIdentifier:(id)arg2 groupName:(id)arg3 participants:(id)arg4 groupID:(id)arg5;
- (bool)_participantsContainBizID:(id)arg1;
- (bool)_shouldDropMessageGroupID:(id)arg1 participants:(id)arg2 fromIdentifier:(id)arg3 toIdentifier:(id)arg4;
- (id)initWithChatRegistry:(id)arg1 account:(id)arg2;
- (id)runIndividuallyWithInput:(id)arg1;
- (bool)shouldDropDueToGroupSize:(id)arg1;

@end
