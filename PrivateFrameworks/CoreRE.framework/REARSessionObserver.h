/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface REARSessionObserver : NSObject <ARInternalSessionObserver> {
    NSMutableSet * _activeChunks;
    struct UnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  _queueLock;
    struct Queue<QueuedUpdateMessage> { 
        struct Allocator {} *m_allocator; 
        unsigned long long m_capacity; 
        unsigned long long m_size; 
        unsigned long long m_head; 
        unsigned int m_version; 
        struct QueuedUpdateMessage {} *m_data; 
    }  _queuedUpdates;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _renderTransform;
    ARSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct Queue<QueuedUpdateMessage> { struct Allocator {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; struct QueuedUpdateMessage {} *x6; })getQueuedUpdatesSinceLast;
- (id)init:(id)arg1;
- (void)session:(id)arg1;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;

@end
