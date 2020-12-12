/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding> {
    NSNumber * _attachedToDevice;
    NSString * _detailedProductCategory;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    NSString * _productCategory;
    NSString * _vendorName;
}

@property (getter=isAttachedToDevice, nonatomic, copy) NSNumber *attachedToDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailedProductCategory;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, copy) NSString *productCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detailedProductCategory;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)isAttachedToDevice;
- (id)productCategory;
- (void)setAttachedToDevice:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDetailedProductCategory:(id)arg1;
- (void)setProductCategory:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)vendorName;

@end