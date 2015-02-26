/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/NSSecureCoding.h>

@class CLLocation, NSString, CLPlacemark;

@interface CalLocation : NSObject <NSSecureCoding> {

	CLLocation* _location;
	NSString* _address;
	NSString* _title;
	NSString* _displayName;
	NSString* _abURLString;
	CLPlacemark* _placemark;
	BOOL _isCurrentLocation;
	double _radius;
	NSString* _routeType;
	int _type;

}

@property (nonatomic,copy) CLLocation * location; 
@property (copy) NSString * address;                                //@synthesize address=_address - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * abURLString;                            //@synthesize abURLString=_abURLString - In the implementation block
@property (copy) NSString * routeType;                              //@synthesize routeType=_routeType - In the implementation block
@property (retain) CLPlacemark * placemark;                         //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentLocation; 
@property (assign) int type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double radius;                         //@synthesize radius=_radius - In the implementation block
+(id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2 ;
+(long long)routingModeEnumForCalRouteType:(id)arg1 ;
+(id)routeTypeStringForCalLocationRoutingMode:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)geoURLStringFromCoordinates:(id)arg1 ;
+(id)coordinatesFromGeoURLString:(id)arg1 ;
-(BOOL)isCurrentLocation;
-(CLPlacemark *)placemark;
-(void)setAddress:(NSString *)arg1 ;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(void)setRouteType:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)routeType;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayString;
-(CLLocation *)location;
-(NSString *)displayName;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(id)typeString;
-(id)geoURLString;
-(id)fullTitleAndAddressString;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(double)distanceFromLocation:(id)arg1 ;
@end
