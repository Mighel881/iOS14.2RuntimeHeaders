/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKTransactionalComponentDataSourceChangesetBuilder : NSObject {
    NSDictionary * _insertedItems;
    NSIndexSet * _insertedSections;
    NSDictionary * _movedItems;
    NSSet * _removedItems;
    NSIndexSet * _removedSections;
    NSDictionary * _updatedItems;
}

+ (id)transactionalComponentDataSourceChangeset;

- (void).cxx_destruct;
- (id)build;
- (id)withInsertedItems:(id)arg1;
- (id)withInsertedSections:(id)arg1;
- (id)withMovedItems:(id)arg1;
- (id)withRemovedItems:(id)arg1;
- (id)withRemovedSections:(id)arg1;
- (id)withUpdatedItems:(id)arg1;

@end