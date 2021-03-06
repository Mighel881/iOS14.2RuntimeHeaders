/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDisplayLink : NSObject {
    CADisplayLink * _displayLink;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readonly) double currentMediaTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) long long preferredFramesPerSecond;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (void)_addToRunLoop;
- (void)_tick:(id)arg1;
- (double)currentMediaTime;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)init;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(bool)arg3;
- (void)invalidate;
- (bool)paused;
- (long long)preferredFramesPerSecond;
- (SEL)selector;
- (void)setPaused:(bool)arg1;
- (id)target;
- (double)targetTimestamp;
- (double)timestamp;

@end
