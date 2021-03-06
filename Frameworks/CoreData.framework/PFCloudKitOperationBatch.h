/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitOperationBatch : NSObject {
    NSMutableSet * _deletedRecordIDs;
    NSMutableSet * _recordIDs;
    NSMutableDictionary * _recordTypeToDeletedRecordID;
    NSMutableArray * _records;
    unsigned long long  _sizeInBytes;
}

@property (nonatomic, readonly) NSSet *deletedRecordIDs;
@property (nonatomic, readonly) NSSet *recordIDs;
@property (nonatomic, readonly) NSDictionary *recordTypeToDeletedRecordID;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly) unsigned long long totalObjectCount;

- (void)addDeletedRecordID:(id)arg1 forRecordOfType:(id)arg2;
- (void)addRecord:(id)arg1;
- (void)dealloc;
- (id)deletedRecordIDs;
- (id)init;
- (id)recordIDs;
- (id)recordTypeToDeletedRecordID;
- (id)records;
- (unsigned long long)sizeInBytes;
- (unsigned long long)totalObjectCount;

@end
