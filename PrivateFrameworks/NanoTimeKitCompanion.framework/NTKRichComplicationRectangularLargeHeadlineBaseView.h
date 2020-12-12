/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {
    NTKRichComplicationImageView * _headerImageView;
    NTKColoringLabel * _headerLabel;
    _TtC19ComplicationDisplay23ComplicationHostingView * _headerSwiftUIView;
}

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_updateTemplateHeaderWithTextProvider:(id)arg1 imageProvider:(id)arg2 viewData:(id)arg3 reason:(long long)arg4;
- (id)init;
- (void)layoutSubviews;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end