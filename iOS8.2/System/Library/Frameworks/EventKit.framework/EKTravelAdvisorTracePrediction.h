/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/NSSecureCoding.h>

@class NSDate, EKTravelPrediction;

@interface EKTravelAdvisorTracePrediction : NSObject <NSSecureCoding> {

	NSDate* _date;
	EKTravelPrediction* _prediction;
	double _delay;

}

@property (nonatomic,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) EKTravelPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
@property (nonatomic,readonly) double delay;                                 //@synthesize delay=_delay - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDate:(id)arg1 prediction:(id)arg2 delay:(double)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)delay;
-(NSDate *)date;
-(EKTravelPrediction *)prediction;
@end
