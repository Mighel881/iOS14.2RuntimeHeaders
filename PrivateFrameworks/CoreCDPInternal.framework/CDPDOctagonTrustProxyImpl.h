/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy> {
    CDPContext * _cdpContext;
}

@property (nonatomic, retain) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cdpContext;
- (id)fetchAllEscrowRecords:(id)arg1 forceFetch:(bool)arg2 error:(id*)arg3;
- (id)fetchEscrowRecords:(id)arg1 forceFetch:(bool)arg2 error:(id*)arg3;
- (id)initWithContext:(id)arg1;
- (void)setCdpContext:(id)arg1;

@end
