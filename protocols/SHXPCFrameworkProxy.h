/* Generated by RuntimeBrowser.
 */

@protocol SHXPCFrameworkProxy <NSObject>

@required

- (void)matcherDidFail:(SHMatcherResponse *)arg1 withError:(NSError *)arg2;
- (void)matcherDidFindMatch:(SHMatcherResponse *)arg1;
- (void)matcherDidFinishMatchingWithOutcome:(long long)arg1;
- (void)matcherDidNotFindMatch:(SHMatcherResponse *)arg1;

@end
