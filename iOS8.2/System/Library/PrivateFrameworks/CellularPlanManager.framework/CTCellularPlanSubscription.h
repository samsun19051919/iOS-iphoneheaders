/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <CellularPlanManager/NSCopying.h>
#import <CellularPlanManager/NSSecureCoding.h>

@class NSString, NSArray;

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding> {

	char _autoRenew;
	NSString* _iccid;
	NSString* _carrierName;
	int _planType;
	NSString* _planDescription;
	int _planStatus;
	int _accountStatus;
	NSString* _accountURL;
	NSArray* _dataUsage;
	int _subscriptionResult;
	double _billingStartDate;
	double _billingEndDate;
	double _timestamp;

}

@property (nonatomic,readonly) NSString * iccid;                        //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,readonly) char autoRenew;                          //@synthesize autoRenew=_autoRenew - In the implementation block
@property (nonatomic,readonly) double billingStartDate;                 //@synthesize billingStartDate=_billingStartDate - In the implementation block
@property (nonatomic,readonly) double billingEndDate;                   //@synthesize billingEndDate=_billingEndDate - In the implementation block
@property (nonatomic,readonly) NSString * carrierName;                  //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,readonly) int planType;                            //@synthesize planType=_planType - In the implementation block
@property (nonatomic,readonly) NSString * planDescription;              //@synthesize planDescription=_planDescription - In the implementation block
@property (nonatomic,readonly) int planStatus;                          //@synthesize planStatus=_planStatus - In the implementation block
@property (nonatomic,readonly) int accountStatus;                       //@synthesize accountStatus=_accountStatus - In the implementation block
@property (nonatomic,readonly) NSString * accountURL;                   //@synthesize accountURL=_accountURL - In the implementation block
@property (nonatomic,readonly) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * dataUsage;                     //@synthesize dataUsage=_dataUsage - In the implementation block
@property (assign,nonatomic) int subscriptionResult;                    //@synthesize subscriptionResult=_subscriptionResult - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)carrierName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIccid:(id)arg1 subscriptionResult:(int)arg2 autoRenew:(char)arg3 billingStartDate:(double)arg4 billingEndDate:(double)arg5 carrierName:(id)arg6 planType:(int)arg7 planDescription:(id)arg8 planStatus:(int)arg9 accountStatus:(int)arg10 accountURL:(id)arg11 timestamp:(double)arg12 dataUsage:(id)arg13 ;
-(int)planStatus;
-(NSString *)iccid;
-(char)autoRenew;
-(double)billingStartDate;
-(double)billingEndDate;
-(int)planType;
-(NSString *)planDescription;
-(int)accountStatus;
-(NSString *)accountURL;
-(NSArray *)dataUsage;
-(int)subscriptionResult;
-(char)isEqualOrNewerThanSubscription:(id)arg1 ;
-(void)setSubscriptionResult:(int)arg1 ;
@end

