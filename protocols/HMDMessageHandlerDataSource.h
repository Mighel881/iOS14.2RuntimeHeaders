/* Generated by RuntimeBrowser.
 */

@protocol HMDMessageHandlerDataSource <NSObject>

@required

- (HMDDevice *)messageHandler:(HMDMessageHandler *)arg1 deviceForOutgoingMessage:(HMFMessage *)arg2;
- (bool)messageHandler:(HMDMessageHandler *)arg1 reachableForOutgoingMessage:(HMFMessage *)arg2;
- (NSNumber *)messageHandler:(HMDMessageHandler *)arg1 shouldRelayIncomingMessage:(HMFMessage *)arg2;

@optional

- (bool)messageHandler:(HMDMessageHandler *)arg1 isReadyForIncomingMessage:(HMFMessage *)arg2;

@end