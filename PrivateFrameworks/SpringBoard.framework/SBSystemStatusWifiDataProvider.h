/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable> {
    void * _cellularFallbackWatcher;
    bool  _fallingBackToCellular;
    bool  _wifiActive;
    STWifiStatusDomainPublisher * _wifiDataPublisher;
}

@property (nonatomic) void*cellularFallbackWatcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFallingBackToCellular, nonatomic) bool fallingBackToCellular;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isWifiActive, nonatomic) bool wifiActive;
@property (nonatomic, readonly) STWifiStatusDomainPublisher *wifiDataPublisher;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_updateData;
- (void)_updateWifiActive;
- (void*)cellularFallbackWatcher;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)isFallingBackToCellular;
- (bool)isWifiActive;
- (void)setCellularFallbackWatcher:(void*)arg1;
- (void)setFallingBackToCellular:(bool)arg1;
- (void)setWifiActive:(bool)arg1;
- (id)wifiDataPublisher;

@end
