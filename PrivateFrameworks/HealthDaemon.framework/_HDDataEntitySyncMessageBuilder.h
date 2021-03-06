/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataEntitySyncMessageBuilder : NSObject {
    long long  _currentEncodedBytes;
    bool  _didSendFinal;
    Class  _entityClass;
    HDEntityEncoder * _entityEncoder;
    bool  _hasEncodedAnyObject;
    long long  _lastEntityAnchor;
    long long  _maxEncodedBytesPerChange;
    long long  _maxEncodedBytesPerChangeSet;
    <HDSyncMessageHandler> * _messageHandler;
    HDProfile * _profile;
    HDDataProvenanceCache * _provenanceCache;
    long long  _sequence;
    long long  _totalEncodedBytes;
}

@property (nonatomic, readonly, copy) NSArray *orderedProperties;

- (void).cxx_destruct;
- (long long)_addCodableRepresentation:(id)arg1 encodedSize:(long long)arg2 anchor:(long long)arg3 provenance:(id)arg4 error:(id*)arg5;
- (long long)_addEntity:(id)arg1 row:(struct HDSQLiteRow { }*)arg2 anchor:(long long)arg3 provenance:(id)arg4;
- (bool)_sendCurrentCollectionIsFinal:(bool)arg1 error:(id*)arg2;
- (long long)addEntity:(id)arg1 row:(struct HDSQLiteRow { }*)arg2 anchor:(long long)arg3 error:(id*)arg4;
- (id)description;
- (bool)finishAndFlushWithError:(id*)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1 transaction:(id)arg2 entityClass:(Class)arg3 provenanceCache:(id)arg4 encodingOptions:(id)arg5 messageHandler:(id)arg6 bytesPerChangeSet:(long long)arg7 bytesPerChange:(long long)arg8;
- (id)orderedProperties;

@end
