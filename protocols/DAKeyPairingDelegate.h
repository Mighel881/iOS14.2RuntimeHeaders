/* Generated by RuntimeBrowser.
 */

@protocol DAKeyPairingDelegate <DASessionDelegate>

@required

- (void)didFinishFirstTransactionForSession:(DAKeyPairingSession *)arg1 error:(NSError *)arg2;
- (void)didFinishPreWarmWithResult:(NSError *)arg1;
- (void)didFinishProbingWithResult:(bool)arg1;
- (void)keyPairingSession:(DAKeyPairingSession *)arg1 didFinishPairingWithKey:(DAKeyInformation *)arg2 trackingRequest:(DAKeyEncryptedRequest *)arg3 error:(NSError *)arg4;

@optional

- (void)didStartPairing;

@end
