/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)longCharacterIsMember:(unsigned long)arg1 ;
-(char)hasMemberInPlane:(unsigned char)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(id)bitmapRepresentation;
-(char)isSupersetOfSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(id)retain;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(char)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(oneway void)release;
-(id)invertedSet;
-(void)finalize;
@end

