/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListCellLayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avatarFrame;
    double  _cellHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _chevronFrame;
    double  _contentViewWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dateFrame;
    bool  _invalid;
    double  _lastUsedDisplayScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _senderFrame;
    bool  _shouldShowAvatarView;
    bool  _shouldShowChevron;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _summaryFrame;
    double  _summaryLabelCapFrameYOrigin;
    double  _tableViewWidth;
    double  _trailingLayoutMarginSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unreadFrame;
    double  _widthForDeterminingAvatarVisibility;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avatarFrame;
@property (nonatomic) double cellHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chevronFrame;
@property (nonatomic) double contentViewWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dateFrame;
@property (nonatomic) bool invalid;
@property (nonatomic) double lastUsedDisplayScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } senderFrame;
@property (nonatomic) bool shouldShowAvatarView;
@property (nonatomic) bool shouldShowChevron;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } summaryFrame;
@property (nonatomic) double summaryLabelCapFrameYOrigin;
@property (nonatomic) double tableViewWidth;
@property (nonatomic) double trailingLayoutMarginSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unreadFrame;
@property (nonatomic) double widthForDeterminingAvatarVisibility;

+ (id)sharedInstance;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarFrame;
- (double)cellHeight;
- (double)cellHeightForDisplayScale:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chevronFrame;
- (double)contentViewWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dateFrame;
- (id)init;
- (bool)invalid;
- (void)invalidate;
- (bool)isValidForContentViewWidth:(double)arg1 widthForDeterminingAvatarVisibility:(double)arg2;
- (double)lastUsedDisplayScale;
- (void)markAsValidForContentViewWidth:(double)arg1 widthForDeterminingAvatarVisibility:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })senderFrame;
- (void)setAvatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCellHeight:(double)arg1;
- (void)setChevronFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentViewWidth:(double)arg1;
- (void)setDateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInvalid:(bool)arg1;
- (void)setLastUsedDisplayScale:(double)arg1;
- (void)setSenderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldShowAvatarView:(bool)arg1;
- (void)setShouldShowChevron:(bool)arg1;
- (void)setSummaryFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSummaryLabelCapFrameYOrigin:(double)arg1;
- (void)setTableViewWidth:(double)arg1;
- (void)setTrailingLayoutMarginSize:(double)arg1;
- (void)setUnreadFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWidthForDeterminingAvatarVisibility:(double)arg1;
- (bool)shouldShowAvatarView;
- (bool)shouldShowChevron;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })summaryFrame;
- (double)summaryLabelCapFrameYOrigin;
- (double)tableViewWidth;
- (double)trailingLayoutMarginSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unreadFrame;
- (double)widthForDeterminingAvatarVisibility;

@end
