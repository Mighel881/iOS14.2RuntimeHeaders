/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPManeuver : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _attributedInstructionVariants;
    NSArray * _dashboardAttributedInstructionVariants;
    NSArray * _dashboardInstructionVariants;
    CPImageSet * _dashboardJunctionImageSet;
    CPImageSet * _dashboardSymbolImageSet;
    long long  _displayStyle;
    NSUUID * _identifier;
    CPTravelEstimates * _initialTravelEstimates;
    NSArray * _instructionVariants;
    NSSet * _junctionElementAngles;
    NSMeasurement * _junctionExitAngle;
    CPImageSet * _junctionImageSet;
    unsigned long long  _junctionType;
    unsigned long long  _maneuverType;
    NSArray * _notificationAttributedInstructionVariants;
    NSArray * _notificationInstructionVariants;
    CPImageSet * _notificationSymbolImageSet;
    NSArray * _roadFollowingManeuverVariants;
    CPImageSet * _symbolSet;
    unsigned long long  _trafficSide;
    id  _userInfo;
}

@property (nonatomic, copy) NSArray *attributedInstructionVariants;
@property (nonatomic, copy) NSArray *dashboardAttributedInstructionVariants;
@property (nonatomic, copy) NSArray *dashboardInstructionVariants;
@property (nonatomic, retain) UIImage *dashboardJunctionImage;
@property (nonatomic, retain) CPImageSet *dashboardJunctionImageSet;
@property (nonatomic, retain) UIImage *dashboardSymbolImage;
@property (nonatomic, retain) CPImageSet *dashboardSymbolImageSet;
@property (nonatomic) long long displayStyle;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) CPTravelEstimates *initialTravelEstimates;
@property (nonatomic, copy) NSArray *instructionVariants;
@property (nonatomic, copy) NSSet *junctionElementAngles;
@property (nonatomic, copy) NSMeasurement *junctionExitAngle;
@property (nonatomic, retain) UIImage *junctionImage;
@property (nonatomic, retain) CPImageSet *junctionImageSet;
@property (nonatomic) unsigned long long junctionType;
@property (nonatomic) unsigned long long maneuverType;
@property (nonatomic, copy) NSArray *notificationAttributedInstructionVariants;
@property (nonatomic, copy) NSArray *notificationInstructionVariants;
@property (nonatomic, retain) UIImage *notificationSymbolImage;
@property (nonatomic, retain) CPImageSet *notificationSymbolImageSet;
@property (nonatomic, copy) NSArray *roadFollowingManeuverVariants;
@property (readonly) NSArray *stringInstructionVariants;
@property (nonatomic, retain) UIImage *symbolImage;
@property (nonatomic, retain) CPImageSet *symbolSet;
@property (nonatomic) unsigned long long trafficSide;
@property (nonatomic, retain) id userInfo;

+ (id)_descriptionForJunctionType:(unsigned long long)arg1;
+ (id)_descriptionForManeuverType:(unsigned long long)arg1;
+ (id)_descriptionForTrafficSide:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedInstructionVariants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dashboardAttributedInstructionVariants;
- (id)dashboardInstructionVariants;
- (id)dashboardJunctionImage;
- (id)dashboardJunctionImageSet;
- (id)dashboardSymbolImage;
- (id)dashboardSymbolImageSet;
- (id)description;
- (long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialTravelEstimates;
- (id)instructionVariants;
- (bool)isEqual:(id)arg1;
- (id)junctionElementAngles;
- (id)junctionExitAngle;
- (id)junctionImage;
- (id)junctionImageSet;
- (unsigned long long)junctionType;
- (unsigned long long)maneuverType;
- (id)notificationAttributedInstructionVariants;
- (id)notificationInstructionVariants;
- (id)notificationSymbolImage;
- (id)notificationSymbolImageSet;
- (id)roadFollowingManeuverVariants;
- (void)setAttributedInstructionVariants:(id)arg1;
- (void)setDashboardAttributedInstructionVariants:(id)arg1;
- (void)setDashboardInstructionVariants:(id)arg1;
- (void)setDashboardJunctionImage:(id)arg1;
- (void)setDashboardJunctionImageSet:(id)arg1;
- (void)setDashboardSymbolImage:(id)arg1;
- (void)setDashboardSymbolImageSet:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setInitialTravelEstimates:(id)arg1;
- (void)setInstructionVariants:(id)arg1;
- (void)setJunctionElementAngles:(id)arg1;
- (void)setJunctionExitAngle:(id)arg1;
- (void)setJunctionImage:(id)arg1;
- (void)setJunctionImageSet:(id)arg1;
- (void)setJunctionType:(unsigned long long)arg1;
- (void)setManeuverType:(unsigned long long)arg1;
- (void)setNotificationAttributedInstructionVariants:(id)arg1;
- (void)setNotificationInstructionVariants:(id)arg1;
- (void)setNotificationSymbolImage:(id)arg1;
- (void)setNotificationSymbolImageSet:(id)arg1;
- (void)setRoadFollowingManeuverVariants:(id)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setSymbolSet:(id)arg1;
- (void)setTrafficSide:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)stringInstructionVariants;
- (id)symbolImage;
- (id)symbolSet;
- (unsigned long long)trafficSide;
- (id)userInfo;

@end
