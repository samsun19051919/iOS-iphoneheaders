/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPostAdjust : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonPostAdjustDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonPostAdjustDoubleMap;              //@synthesize bonPostAdjustDoubleMap=_bonPostAdjustDoubleMap - In the implementation block
+(id)bonPostAdjust;
+(id)bonPostAdjustWithJSONResource:(id)arg1 ;
+(id)bonPostAdjustWithArray:(id)arg1 ;
-(unsigned long long)adjustBON:(unsigned long long)arg1 forLevel:(float)arg2 ;
-(id)initBonPostAdjustWithDoubleMap:(id)arg1 ;
-(id)initBonPostAdjustWithJSONResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonPostAdjustDoubleMap;
-(id)initBonPostAdjustWithArray:(id)arg1 ;
-(void)setBonPostAdjustDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
@end
