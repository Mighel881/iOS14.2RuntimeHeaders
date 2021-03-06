/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAuthorizationContext : NSObject <AKAuthenticationContext, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appProvidedContext;
    NSDictionary * _appProvidedData;
    NSString * _clientID;
    AKDevice * _companionDevice;
    NSString * _proxiedAppName;
    AKDevice * _proxiedDevice;
    NSString * _realUserVerificationData;
    AKAuthorizationRequest * _request;
    long long  _serviceType;
    NSString * _teamID;
    AKAuthorizationScopesUserSelection * _userSelection;
}

@property (nonatomic, readonly) bool _hasApplicationMetaData;
@property (setter=_setProxiedAppName:, nonatomic, copy) NSString *_proxiedAppName;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appProvidedContext;
@property (nonatomic, copy) NSDictionary *appProvidedData;
@property (nonatomic) long long authenticationMode;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) AKDevice *companionDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) AKDevice *proxiedDevice;
@property (nonatomic, copy) NSString *realUserVerificationData;
@property (nonatomic, readonly, copy) AKAuthorizationRequest *request;
@property (nonatomic) long long serviceType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, retain) AKAuthorizationScopesUserSelection *userSelection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_hasApplicationMetaData;
- (id)_proxiedAppName;
- (void)_setProxiedAppName:(id)arg1;
- (id)altDSID;
- (id)appProvidedContext;
- (id)appProvidedData;
- (id)clientID;
- (id)companionDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)proxiedDevice;
- (id)realUserVerificationData;
- (id)request;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setAppProvidedContext:(id)arg1;
- (void)setAppProvidedData:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setRealUserVerificationData:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (id)teamID;
- (id)userSelection;

@end
