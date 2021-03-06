/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpNumeric, NSMutableDictionary;

@interface TCDumpUnion : TCDumpType {

	NSString* mSelectorFieldName;
	TCDumpNumeric* mSelectorField;
	NSMutableDictionary* mSelectorToMemberMap;

}
-(void)dealloc;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 selectorField:(id)arg3 members:(id)arg4 ;
-(id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 members:(id)arg3 ;
-(id)initWithSelectorField:(id)arg1 members:(id)arg2 ;
@end

