/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriTestingContext : SiriContext {
    NSDictionary * _testingContext;
}

@property (nonatomic, readonly) NSDictionary *testingContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsAudioInput;
- (bool)containsRecognitionStrings;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioInput:(id)arg1;
- (id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPPTContext:(id)arg1;
- (id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithRecognitionStrings:(id)arg1;
- (id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2;
- (id)testingContext;

@end
