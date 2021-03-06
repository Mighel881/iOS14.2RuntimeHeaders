/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisMovieClip : MovieClip {
    bool  _front;
    PVEffect * _kenBurnsEffect;
    KenBurnsInfo * _kenBurnsInfo;
}

@property (getter=isFront, nonatomic) bool front;
@property (nonatomic, retain) PVEffect *kenBurnsEffect;
@property (nonatomic, retain) KenBurnsInfo *kenBurnsInfo;

+ (id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)isFront;
- (id)kenBurnsEffect;
- (id)kenBurnsInfo;
- (int)maxDuration;
- (void)setFront:(bool)arg1;
- (void)setKenBurnsEffect:(id)arg1;
- (void)setKenBurnsInfo:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;

@end
