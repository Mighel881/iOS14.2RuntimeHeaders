/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFSpeechRecognitionAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)icon;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)name;
- (id)protectedResourceDescription;

@end
