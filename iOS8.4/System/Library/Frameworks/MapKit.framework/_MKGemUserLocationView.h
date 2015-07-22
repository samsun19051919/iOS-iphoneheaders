/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer;

@interface _MKGemUserLocationView : MKUserLocationView {

	CALayer* _gemLayer;

}
-(void)_setMapType:(unsigned long long)arg1 ;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(UIImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(id)_baseLayer;
-(void)_updateLayers;
-(void)_setupLayers;
-(UIImage*)normalImage;
-(UIImage*)staleImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end
