/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWPointCloudFormat : BWFormat <BWDataBufferBackedFormat> {
    NSDictionary * _dataBufferAttributes;
    unsigned long long  _dataBufferSize;
    unsigned int  _dataFormat;
    unsigned long long  _maxPoints;
}

@property (nonatomic, readonly) NSDictionary *dataBufferAttributes;
@property (nonatomic, readonly) unsigned long long dataBufferSize;
@property (nonatomic, readonly) unsigned int dataFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxPoints;
@property (readonly) Class superclass;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (id)formatByResolvingRequirements:(id)arg1 printErrors:(bool)arg2;
+ (void)initialize;

- (id)_initWithResolvedFormatRequirements:(id)arg1;
- (id)dataBufferAttributes;
- (unsigned long long)dataBufferSize;
- (unsigned int)dataFormat;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)maxPoints;
- (unsigned int)mediaType;

@end