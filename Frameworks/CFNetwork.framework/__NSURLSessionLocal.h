/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLSessionLocal : NSURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDataDelegate_Internal, NSURLSessionDelegate_Internal, NSURLSessionSubclass, NSURLSessionTaskDelegatePrivate, __NSURLSessionTaskGroupForConfiguration> {
    NSMutableDictionary * _connectionsToTasks;
    unsigned long long  _identSeed;
    id /* block */  _invalidateCallback;
    NSObject<OS_dispatch_queue> * _invalidateQueue;
    bool  _isInvalid;
    NSMutableArray * _outstandingTasks;
    NSURLSessionConfiguration * _proxyConfig;
    NSMutableDictionary * _proxyDelegates;
    NSURLSession * _proxySession;
    NSURLSession * _sessionForCacheLookups;
    bool  _shouldRecreateProxySession;
    struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, GlueTubeManager *> { int (**x_4_1_1)(); struct __CFDictionary {} *x_4_1_2; } x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; struct shared_ptr<NSObject<OS_nw_context> > { id x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; } * _tubeManager;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _xCookieStorageInitLock;
    const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCookies;
    bool  _xCookiesInitComplete;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _xCredStorageInitLock;
    const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCreds;
    bool  _xCredsInitComplete;
}

@property (readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly) NSURLSession *_groupSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)_URLSession:(id)arg1 companionAvailabilityChanged:(bool)arg2;
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_dataTaskWithTaskForClass:(id)arg1;
- (id)_downloadTaskWithTaskForClass:(id)arg1;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(id /* block */)arg1;
- (id)_uploadTaskWithTaskForClass:(id)arg1;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 delegateDispatchQueue:(id)arg4;
- (unsigned long long)nextSeed;
- (id)webSocketTaskForRequest:(id)arg1;
- (id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2;

@end