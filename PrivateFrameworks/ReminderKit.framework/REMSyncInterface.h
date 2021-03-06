/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMSyncInterface : NSObject {
    REMXPCDaemonController * _daemonController;
}

@property (nonatomic, retain) REMXPCDaemonController *daemonController;

- (void).cxx_destruct;
- (id)daemonController;
- (id)init;
- (id)initWithDaemonController:(id)arg1;
- (void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)setDaemonController:(id)arg1;
- (void)syncCloudKitWithReason:(id)arg1 discretionary:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

@end
