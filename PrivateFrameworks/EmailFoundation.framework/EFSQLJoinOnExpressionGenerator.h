/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLJoinOnExpressionGenerator : NSObject {
    NSString * _columns;
    NSString * _table;
    NSString * _tableAlias;
}

@property (nonatomic, readonly) NSString *columns;
@property (nonatomic, readonly) NSString *table;
@property (nonatomic, readonly) NSString *tableAlias;

- (void).cxx_destruct;
- (id)columns;
- (unsigned long long)hash;
- (id)initWithTable:(id)arg1 tableAlias:(id)arg2 columns:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToJoinOnExpressonGenerator:(id)arg1;
- (id)joinOnExpression;
- (id)table;
- (id)tableAlias;

@end