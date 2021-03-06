/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiterDebug : NSObject {
    bool  _disable;
    NSMutableArray * _entries;
    int  _importantCount;
    bool  _pause;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool pause;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addAsynchronousData:(id /* block */)arg1;
- (void)addEntry:(id)arg1;
- (void)debugWithFormat:(const char *)arg1;
- (void)errorWithFormat:(const char *)arg1;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)arg1;
- (void)infoWithFormat:(const char *)arg1;
- (id)init;
- (bool)pause;
- (void)setPause:(bool)arg1;

@end
