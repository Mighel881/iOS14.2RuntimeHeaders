/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagNetworkTaskResult : NSObject {
    NSDictionary * _data;
    NSDate * _expirationDate;
    NSString * _storefront;
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) bool expired;
@property (nonatomic, retain) NSString *storefront;

- (void).cxx_destruct;
- (id)data;
- (id)expirationDate;
- (bool)expired;
- (id)initWithData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setStorefront:(id)arg1;
- (id)storefront;

@end
