/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject {

	UIImage* _originalImage;
	CGSize _pretiledSize;

}
+(id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

