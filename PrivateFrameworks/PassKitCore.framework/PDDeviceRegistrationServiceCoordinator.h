/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDDeviceRegistrationServiceCoordinator : NSObject {
    PDPaymentWebServiceCoordinator * _paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator * _peerPaymentWebServiceCoordinator;
    NSMutableArray * _registrationTasks;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (nonatomic, readonly) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;

- (void).cxx_destruct;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 forceRegister:(bool)arg3 completion:(id /* block */)arg4;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceApplePayRegister:(bool)arg2 forcePeerPaymentRegister:(bool)arg3;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceApplePayRegister:(bool)arg2 forcePeerPaymentRegister:(bool)arg3 completion:(id /* block */)arg4;
- (bool)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)dealloc;
- (id)init;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (void)notePasscodeChanged;
- (id)paymentWebServiceCoordinator;
- (id)peerPaymentWebServiceCoordinator;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 forceApplePayRegister:(bool)arg3 forcePeerPaymentRegister:(bool)arg4 completion:(id /* block */)arg5;

@end