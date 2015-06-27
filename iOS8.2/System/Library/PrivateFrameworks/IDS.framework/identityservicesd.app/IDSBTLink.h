/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/NSStreamDelegate.h>

@protocol IDSLinkDelegate;
@class NSString, CBScalablePipe;

@interface IDSBTLink : NSObject <IDSLink, NSStreamDelegate> {

	NSString* _deviceID;
	unsigned _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _linkID;
	CBScalablePipe* _pipe;
	int _socket;
	unsigned _totalReceivedRawBytes;
	SCD_Struct_ID13* _currentIncomingPacket;
	SCD_Struct_ID13* _currentOutgoingPacket;
	char _resyncing;
	double _lastResyncTime;
	double _lastDownstreamDumpLogTime;
	double _lastUpstreamDumpLogTime;
	char _writeSuspended;
	char _remoteHostAwake;
	char _postedFirstHostStateChange;
	char _linkSuspended;
	id<IDSLinkDelegate> _delegate;

}

@property (readonly) NSString * linkID;                                            //@synthesize linkID=_linkID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned headerOverhead; 
@property (assign) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)copyLinkStatsDict;
-(unsigned)sendPacketBuffer:(SCD_Struct_ID13*)arg1 toDeviceID:(id)arg2 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2 ;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(NSString *)linkID;
-(void)_processIncomingPacket;
-(char)isLinkSuspended;
-(void)suspendLink:(char)arg1 ;
-(void)remoteDetectedCorruption;
-(id)initWithPipe:(id)arg1 withIdentifier:(id)arg2 deviceID:(id)arg3 ;
-(void)_dumpLogs:(double)arg1 isDownstream:(char)arg2 ;
-(void)_processOutgoingPacket;
-(void)_localDetectedCorruption;
-(void)dealloc;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)invalidate;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
@end
