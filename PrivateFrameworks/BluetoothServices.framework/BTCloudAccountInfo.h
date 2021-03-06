/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
 */

@interface BTCloudAccountInfo : NSObject <NSSecureCoding> {
    bool  _isSignedIn;
    NSString * _loginID;
    bool  _manateeAvailable;
}

@property (nonatomic) bool isSignedIn;
@property (nonatomic, retain) NSString *loginID;
@property (nonatomic) bool manateeAvailable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSignedIn;
- (id)loginID;
- (bool)manateeAvailable;
- (void)setIsSignedIn:(bool)arg1;
- (void)setLoginID:(id)arg1;
- (void)setManateeAvailable:(bool)arg1;

@end
