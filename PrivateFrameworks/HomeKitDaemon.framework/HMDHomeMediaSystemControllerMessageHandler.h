/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFMessageReceiver> {
    <HMDHomeMediaSystemMessageHandlerDelegate> * _delegate;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDHomeMediaSystemMessageHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAddMediaSystem:(id)arg1;
- (void)_handleAddMediaSystemWithPreProcessedMessage:(id)arg1;
- (void)_handleRemoveMediaSystem:(id)arg1;
- (void)_registerForMessages;
- (id)delegate;
- (void)handleUpdateMediaSystem:(id)arg1;
- (id)home;
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)preProcessMediaSystemMessage:(id)arg1;
- (id)queue;

@end