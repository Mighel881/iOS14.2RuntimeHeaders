/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate> {
    WFWorkflowController * _workflowController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) WFWorkflowController *workflowController;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishRunningWithError:(id)arg1;
- (void)getHandoffWorkflowControllerState:(id /* block */)arg1;
- (id)getWorkflowWithError:(id*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setHandoffWorkflowControllerState:(id)arg1;
- (void)setWorkflowController:(id)arg1;
- (void)stop;
- (id)targetContentAttribution;
- (id)workflowController;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(bool)arg3;
- (bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;

@end
