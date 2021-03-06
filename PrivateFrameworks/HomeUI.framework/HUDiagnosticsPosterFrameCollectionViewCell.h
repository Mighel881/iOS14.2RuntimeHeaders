/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDiagnosticsPosterFrameCollectionViewCell : UICollectionViewCell {
    NSOperationQueue * _diagnosticOperationQueue;
    UIImageView * _imageView;
    UILabel * _textLabel;
}

@property (nonatomic) NSOperationQueue *diagnosticOperationQueue;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (id)diagnosticOperationQueue;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDiagnosticOperationQueue:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;
- (void)updateHeroFrameWithCameraClip:(id)arg1 clipManager:(id)arg2;
- (void)updateWithPosterFrame:(id)arg1 cameraClip:(id)arg2 clipManager:(id)arg3;

@end
