/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebLoadPluginAction : NSObject <AMSUIWebActionRunnable> {
    NSString * _bundleIdentifier;
    AMSUIWebClientContext * _context;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)context;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;

@end
