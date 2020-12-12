/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFChooseFromListIntentHandler : NSObject <WFChooseFromListIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleChooseFromList:(id)arg1 completion:(id /* block */)arg2;
- (void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(id /* block */)arg2;

@end