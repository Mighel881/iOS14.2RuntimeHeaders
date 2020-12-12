/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRemoteActionUserInterface : NSObject <WFRemoteUserInterface> {
    <WFRemoteUserInterface> * _remoteUserInterface;
    NSString * _userInterfaceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WFRemoteUserInterface> *remoteUserInterface;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithUserInterfaceType:(id)arg1 listenerEndpoint:(id)arg2 interface:(id)arg3;
- (id)remoteUserInterface;
- (bool)respondsToSelector:(SEL)arg1;
- (id)userInterfaceType;

@end