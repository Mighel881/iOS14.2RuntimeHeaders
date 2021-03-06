/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIContentFilterController : UITableViewController <PXContentFilterController, UITableViewDataSource, UITableViewDelegate> {
    <PXContentFilterControllerDelegate> * _contentFilterDelegate;
    NSArray * _contentFilterGroups;
    PXContentFilterState * _filterState;
    NSString * _identifier;
}

@property (nonatomic, readonly) <PXContentFilterControllerDelegate> *contentFilterDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PXContentFilterState *filterState;
@property (nonatomic, readonly) bool filteringIsActive;
@property (nonatomic, readonly) NSString *filteringLocalizedCaption;
@property (nonatomic, readonly) NSString *filteringLocalizedTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clickedContentFilterCell:(id)arg1;
- (void)_clickedRowAtIndexPath:(id)arg1;
- (id)_contentFilterGroups;
- (void)_doneButtonPressed:(id)arg1;
- (void)_enumerateExistingCellsUsingBlock:(id /* block */)arg1;
- (id)_existingCellForFilterItemTag:(long long)arg1;
- (id)_existingCellForRowAtIndexPath:(id)arg1;
- (long long)_filterItemTagForExistingCellForRowAtIndexPath:(id)arg1;
- (id)_getUpdatedFilterState;
- (bool)_selectCellWithFilterItemTag:(long long)arg1;
- (void)_setupNavigationBar;
- (void)_setupTableView;
- (void)_updateFilterState:(id)arg1;
- (id)contentFilterDelegate;
- (id)filterState;
- (bool)filteringIsActive;
- (id)filteringLocalizedCaption;
- (id)filteringLocalizedTitle;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setFilterState:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
