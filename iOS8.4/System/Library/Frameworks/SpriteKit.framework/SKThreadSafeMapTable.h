/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCopying.h>
#import <SpriteKit/NSCoding.h>
#import <SpriteKit/NSFastEnumeration.h>

@class NSMutableArray;

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

	int _storageLock;
	NSMutableArray* _storage;

}
-(id)initWithNSMapTable:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

