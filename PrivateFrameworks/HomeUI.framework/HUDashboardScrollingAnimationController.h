/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDashboardScrollingAnimationController : NSObject {
    UIView * _animatingView;
    UIViewPropertyAnimator * _animator;
    <HUDashboardScrollingAnimationControllerDelegate> * _delegate;
    double  _minimumMargin;
    unsigned long long  _visibilityState;
}

@property (nonatomic, retain) UIView *animatingView;
@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic) <HUDashboardScrollingAnimationControllerDelegate> *delegate;
@property (nonatomic) double minimumMargin;
@property (nonatomic) unsigned long long visibilityState;

- (void).cxx_destruct;
- (id)animatingView;
- (id)animator;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (double)minimumMargin;
- (void)setAnimatingView:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimumMargin:(double)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)updateWithCurrentMargin:(double)arg1 animated:(bool)arg2;
- (unsigned long long)visibilityState;

@end