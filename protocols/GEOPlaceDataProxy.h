/* Generated by RuntimeBrowser.
 */

@protocol GEOPlaceDataProxy <NSObject>

@required

- (unsigned long long)calculateFreeableSpaceSync;
- (void)calculateFreeableSpaceWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)cancelRequest:(GEOPDPlaceRequest *)arg1;
- (void)clearCache;
- (void)fetchAllCacheEntriesWithRequesterHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performPlaceDataRequest:(void *)arg1 traits:(void *)arg2 cachePolicy:(void *)arg3 timeout:(void *)arg4 auditToken:(void *)arg5 throttleToken:(void *)arg6 networkActivity:(void *)arg7 requesterHandler:(void *)arg8; // needs 8 arg types, found 20: GEOPDPlaceRequest *, GEOMapServiceTraits *, unsigned long long, double, GEOApplicationAuditToken *, GEODataRequestThrottlerToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, GEOPDPlaceResponse *, NSError *, NSDictionary *, void*
- (void)requestComponentsFromNetwork:(void *)arg1 identifier:(void *)arg2 resultProviderID:(void *)arg3 traits:(void *)arg4 auditToken:(void *)arg5 throttleToken:(void *)arg6 requesterHandler:(void *)arg7; // needs 7 arg types, found 14: NSDictionary *, GEOMapItemIdentifier *, int, GEOMapServiceTraits *, GEOApplicationAuditToken *, GEODataRequestThrottlerToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOPDPlaceResponse *, NSError *, NSDictionary *, void*
- (void)requestIdentifiers:(void *)arg1 resultProviderID:(void *)arg2 traits:(void *)arg3 options:(void *)arg4 auditToken:(void *)arg5 throttleToken:(void *)arg6 requesterHandler:(void *)arg7; // needs 7 arg types, found 14: NSArray *, int, GEOMapServiceTraits *, unsigned long long, GEOApplicationAuditToken *, GEODataRequestThrottlerToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOPDPlaceResponse *, NSError *, NSDictionary *, void*
- (void)requestPhoneNumbers:(void *)arg1 allowCellularDataForLookup:(void *)arg2 traits:(void *)arg3 auditToken:(void *)arg4 throttleToken:(void *)arg5 requesterHandler:(void *)arg6; // needs 6 arg types, found 13: NSArray *, bool, GEOMapServiceTraits *, GEOApplicationAuditToken *, GEODataRequestThrottlerToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOPDPlaceResponse *, NSError *, NSDictionary *, void*
- (void)shrinkBySize:(void *)arg1 finished:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (void)trackPlaceData:(GEOPDPlace *)arg1;

@end