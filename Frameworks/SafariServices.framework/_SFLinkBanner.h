/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFLinkBanner : _SFPinnableBanner {
    UIImageView * _icon;
    NSLayoutConstraint * _messageBottomConstraint;
    UILabel * _messageLabel;
    NSLayoutConstraint * _messageTopConstraint;
    id /* block */  _openActionHandler;
    _SFDimmingButton * _openButton;
    UIView * _separator;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTopConstraint;
}

@property (nonatomic, retain) UIImageView *icon;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) NSString *messageLabelText;
@property (nonatomic, copy) id /* block */ openActionHandler;
@property (nonatomic, retain) _SFDimmingButton *openButton;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_messageLabelFont;
- (void)_open;
- (id)_titleLabelFont;
- (void)contentSizeCategoryDidChange;
- (id)icon;
- (id)init;
- (void)invalidateBannerLayout;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)messageLabelText;
- (id /* block */)openActionHandler;
- (id)openButton;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIcon:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageLabelText:(id)arg1;
- (void)setOpenActionHandler:(id /* block */)arg1;
- (void)setOpenButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end