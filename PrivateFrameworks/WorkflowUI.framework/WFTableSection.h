/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTableSection : NSObject <WFTreeObserver> {
    NSString * _footerText;
    NSString * _headerText;
    NSMutableArray * _mutableItems;
    WFTableSectionTreeNode * _node;
}

@property (nonatomic, readonly) WFTableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *headerText;
@property (nonatomic, readonly) NSMutableArray *mutableItems;
@property (nonatomic, readonly) WFTableSectionTreeNode *node;
@property (readonly) Class superclass;

+ (id)section;
+ (id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(id /* block */)arg3;
+ (id)sectionWithItems:(id)arg1;
+ (id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)applyItems:(id)arg1;
- (unsigned long long)currentIndex;
- (id)dataSource;
- (id)footerText;
- (id)headerText;
- (id)initWithItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableItems;
- (id)node;
- (void)performBatchUpdates:(id /* block */)arg1;
- (unsigned long long)recursiveChildrenCount;
- (void)setFooterText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (id)tableView;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (void)updateCellForItem:(id)arg1;

@end
