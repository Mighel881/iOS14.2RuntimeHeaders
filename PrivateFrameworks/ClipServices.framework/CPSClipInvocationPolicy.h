/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
 */

@interface CPSClipInvocationPolicy : NSObject <NSSecureCoding> {
    bool  _eligible;
    long long  _reason;
}

@property (nonatomic, readonly) bool canShowHeroImage;
@property (getter=isEligible, nonatomic, readonly) bool eligible;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) long long reason;
@property (getter=isRecoverable, nonatomic, readonly) bool recoverable;

+ (id)eligiblePolicy;
+ (id)ineligiblePolicyWithReason:(long long)arg1;
+ (id)invocationPolicyWithAMSDict:(id)arg1;
+ (void)requestAccountPolicyWithCompletion:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (bool)canShowHeroImage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEligible:(bool)arg1 reason:(long long)arg2;
- (bool)isEligible;
- (bool)isRecoverable;
- (id)localizedMessageForClipMetadata:(id)arg1;
- (id)localizedTitle;
- (long long)reason;

@end
