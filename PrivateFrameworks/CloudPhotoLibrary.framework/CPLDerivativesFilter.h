/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {
    bool  _dropForImages;
    bool  _dropForVideos;
}

+ (id)dropDerivativesForImages:(bool)arg1 videos:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initDroppingDerivativesForImages:(bool)arg1 videos:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 isVideo:(bool)arg2;
- (id)redactedDescription;
- (bool)shouldDropDerivativeOfType:(unsigned long long)arg1 fromSourceType:(unsigned long long)arg2 isVideo:(bool)arg3;

@end