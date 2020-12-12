/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMPXFeatureSpec : PXFeatureSpec {
    NSString * _fontName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)specForFont:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)verticalExportSpecForFont:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;

@end