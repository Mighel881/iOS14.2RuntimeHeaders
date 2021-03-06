/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHPickerFilter : NSObject <NSCopying> {
    <PUPickerFilter> * __puPickerFilter;
}

@property (nonatomic, readonly) <PUPickerFilter> *_puPickerFilter;

+ (id)anyFilterMatchingSubfilters:(id)arg1;
+ (id)imagesFilter;
+ (id)livePhotosFilter;
+ (id)videosFilter;

- (void).cxx_destruct;
- (id)_initWithPUPickerFilter:(id)arg1;
- (id)_puPickerFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
