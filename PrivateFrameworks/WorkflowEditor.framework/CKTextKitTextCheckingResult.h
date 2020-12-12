/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKTextKitTextCheckingResult : NSTextCheckingResult {
    CKTextKitEntityAttribute * _entityAttribute;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOverride;
    unsigned long long  _resultTypeOverride;
}

@property (nonatomic, readonly) CKTextKitEntityAttribute *entityAttribute;

- (void).cxx_destruct;
- (id)entityAttribute;
- (id)initWithType:(unsigned long long)arg1 entityAttribute:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)resultType;

@end