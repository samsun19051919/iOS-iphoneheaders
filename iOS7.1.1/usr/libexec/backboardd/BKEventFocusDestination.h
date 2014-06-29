/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BKEventFocusDestination : NSObject {

	NSString* _clientID;
	unsigned _eventPort;
	unsigned _contextID;
	NSString* _displayUUID;

}

@property (nonatomic,readonly) NSString * clientID;              //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) unsigned eventPort;                 //@synthesize eventPort=_eventPort - In the implementation block
@property (assign,nonatomic) unsigned contextID;                 //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy) NSString * displayUUID;               //@synthesize displayUUID=_displayUUID - In the implementation block
-(id)initWithClientID:(id)arg1 ;
-(void)setDisplayUUID:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)contextID;
-(void)setContextID:(unsigned)arg1 ;
-(id)displayUUID;
-(unsigned)eventPort;
-(void)setEventPort:(unsigned)arg1 ;
-(id)clientID;
@end
