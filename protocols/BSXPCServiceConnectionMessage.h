/* Generated by RuntimeBrowser.
 */

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding, BSXPCDecoding>

@required

- (<BSXPCServiceConnectionMessage> *)createReply;
- (bool)expectsReply;
- (bool)send;
- (bool)sendSynchronously;

@end
