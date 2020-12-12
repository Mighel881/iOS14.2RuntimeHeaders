/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
 */

@interface AMPICUNumberFormatter : NSObject {
    unsigned long long  _extendedStyle;
    void ** _icuNumberFormatter;
    NSLocale * _locale;
}

@property (nonatomic) unsigned long long extendedStyle;
@property (nonatomic) void**icuNumberFormatter;
@property (nonatomic, retain) NSLocale *locale;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)extendedStyle;
- (void**)icuNumberFormatter;
- (id)init;
- (id)initWithExtendedStyle:(unsigned long long)arg1 locale:(id)arg2;
- (id)locale;
- (void)setExtendedStyle:(unsigned long long)arg1;
- (void)setIcuNumberFormatter:(void**)arg1;
- (void)setLocale:(id)arg1;
- (id)stringFromNumber:(id)arg1;

@end