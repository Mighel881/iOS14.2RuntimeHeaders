/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASTuple2 : NSObject <NSCopying, NSSecureCoding> {
    NSObject * _first;
    NSObject * _second;
}

@property (nonatomic, readonly) NSObject *first;
@property (nonatomic, readonly) NSObject *second;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)first;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTuple2:(id)arg1;
- (id)second;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (bool)supportsSecureCoding;

- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
