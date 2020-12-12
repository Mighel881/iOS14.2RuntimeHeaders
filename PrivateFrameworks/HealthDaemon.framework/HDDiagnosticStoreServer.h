/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiagnosticStoreServer : HDStandardTaskServer <HKDiagnosticStoreServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchDiagnosticsWithKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchURLForAnalyticsFileWithName:(id)arg1 completion:(id /* block */)arg2;

@end