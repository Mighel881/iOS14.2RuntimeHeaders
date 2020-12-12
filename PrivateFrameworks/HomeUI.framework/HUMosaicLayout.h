/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames> {
    NSMutableArray * _attributeCache;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    <HUMosaicLayoutDelegate> * _delegate;
    bool  _layoutInvalidatedForBoundsChange;
}

@property (nonatomic, retain) NSMutableArray *attributeCache;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUMosaicLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool layoutInvalidatedForBoundsChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3;
- (id)attributeCache;
- (void)clearAllOverrideAttributesForItems:(id)arg1;
- (void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)currentMosaicFrames;
- (id)delegate;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)layoutInvalidatedForBoundsChange;
- (void)prepareLayout;
- (void)setAttributeCache:(id)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutInvalidatedForBoundsChange:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end