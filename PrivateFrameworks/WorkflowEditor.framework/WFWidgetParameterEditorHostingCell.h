/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFWidgetParameterEditorHostingCell : WFParameterEditorHostingCell {
    UIColor * _cardBackgroundColor;
    MTVisualStylingProvider * _fillProvider;
    UIView * _highlighedBackgroundView;
    UIColor * _labelColor;
    WFComponentNavigationContextImpl * _navigationContext;
    UIColor * _overridingBackgroundColor;
    MTVisualStylingProvider * _strokeProvider;
}

@property (nonatomic, retain) UIColor *cardBackgroundColor;
@property (nonatomic, retain) MTVisualStylingProvider *fillProvider;
@property (nonatomic, retain) UIView *highlighedBackgroundView;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) WFComponentNavigationContextImpl *navigationContext;
@property (nonatomic, retain) UIColor *overridingBackgroundColor;
@property (nonatomic, retain) MTVisualStylingProvider *strokeProvider;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)applyStylingWithStrokeProvider:(id)arg1 fillProvider:(id)arg2 cardBackgroundColor:(id)arg3;
- (id)cardBackgroundColor;
- (id)fillProvider;
- (id)highlighedBackgroundView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelColor;
- (id)navigationContext;
- (id)overridingBackgroundColor;
- (void)setCardBackgroundColor:(id)arg1;
- (void)setContainingViewController:(id)arg1;
- (void)setFillProvider:(id)arg1;
- (void)setHighlighedBackgroundView:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setNavigationContext:(id)arg1;
- (void)setOverridingBackgroundColor:(id)arg1;
- (void)setStrokeProvider:(id)arg1;
- (id)strokeProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContext;

@end