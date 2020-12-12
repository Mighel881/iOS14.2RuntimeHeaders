/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIKeyboardBackendController : NSObject {
    TIKeyboardInputManagerStub * _inputManager;
}

@property (nonatomic, retain) TIKeyboardInputManagerStub *inputManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 requestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputManager;
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setInputManager:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;

@end