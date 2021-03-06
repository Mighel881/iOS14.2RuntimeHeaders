/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {
    <SNSystemAudioAnalyzerProtocol> * _analyzer;
    id /* block */  _generator;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registeredRequests;
}

+ (id)connectionLostError;

- (void).cxx_destruct;
- (id)_acquireSystemAudioAnalyzer;
- (void)_addRequest:(id)arg1 withObserver:(id)arg2;
- (void)_invalidateActiveAnalyzer;
- (void)_invalidateAnalyzer:(id)arg1;
- (void)_removeAllRequests;
- (void)_removeRequest:(id)arg1;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (id)initWithRemoteAnalyzerGenerator:(id /* block */)arg1 queue:(id)arg2;
- (void)invalidateActiveAnalyzer;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)start;
- (void)stop;

@end
