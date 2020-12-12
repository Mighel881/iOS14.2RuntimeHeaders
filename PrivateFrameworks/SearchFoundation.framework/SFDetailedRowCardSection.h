/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFDetailedRowCardSection : SFCardSection <NSCopying, NSSecureCoding, SFDetailedRowCardSection> {
    SFActionItem * _action;
    SFColor * _backgroundColor;
    SFButton * _button;
    bool  _canBeHidden;
    NSArray * _descriptions;
    SFRichText * _footnote;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int preventThumbnailImageScaling : 1; 
        unsigned int isSecondaryTitleDetached : 1; 
        unsigned int shouldUseCompactDisplay : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isSecondaryTitleDetached;
    bool  _preventThumbnailImageScaling;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    SFFormattedText * _secondaryTitle;
    SFImage * _secondaryTitleImage;
    int  _separatorStyle;
    bool  _shouldUseCompactDisplay;
    SFImage * _thumbnail;
    SFRichText * _title;
    SFFormattedText * _trailingBottomText;
    SFFormattedText * _trailingMiddleText;
    SFFormattedText * _trailingTopText;
    NSString * _type;
}

@property (nonatomic, retain) SFActionItem *action;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, retain) SFButton *button;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFRichText *footnote;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isSecondaryTitleDetached;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic) bool preventThumbnailImageScaling;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, retain) SFFormattedText *secondaryTitle;
@property (nonatomic, retain) SFImage *secondaryTitleImage;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldUseCompactDisplay;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFRichText *title;
@property (nonatomic, retain) SFFormattedText *trailingBottomText;
@property (nonatomic, retain) SFFormattedText *trailingMiddleText;
@property (nonatomic, retain) SFFormattedText *trailingTopText;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)backgroundColor;
- (id)button;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptions;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasIsSecondaryTitleDetached;
- (bool)hasPreventThumbnailImageScaling;
- (bool)hasSeparatorStyle;
- (bool)hasShouldUseCompactDisplay;
- (bool)hasTopPadding;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isSecondaryTitleDetached;
- (id)jsonData;
- (bool)preventThumbnailImageScaling;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (int)separatorStyle;
- (void)setAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShouldUseCompactDisplay:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingBottomText:(id)arg1;
- (void)setTrailingMiddleText:(id)arg1;
- (void)setTrailingTopText:(id)arg1;
- (void)setType:(id)arg1;
- (bool)shouldUseCompactDisplay;
- (id)thumbnail;
- (id)title;
- (id)trailingBottomText;
- (id)trailingMiddleText;
- (id)trailingTopText;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIHorizontallyScrollingButtonControllerClass;
- (Class)_searchUIViewClass;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)_SUICKPInteractiveCardSectionViewController_shouldHandlePunchout;
- (bool)_SUICKPInteractiveCardSectionViewController_shouldRenderButtonOverlay;

@end