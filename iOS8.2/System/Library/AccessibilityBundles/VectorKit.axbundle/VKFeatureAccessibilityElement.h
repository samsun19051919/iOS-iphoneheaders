/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSString;

@interface VKFeatureAccessibilityElement : UIAccessibilityElement {

	NSMutableArray* _featureArray;
	NSMutableArray* _paths;
	int _style;
	NSMutableArray* _hitTestPaths;
	float _strokeWidth;
	NSString* _iconName;
	NSString* _shieldText;
	int _mapFeatureType;
	unsigned long long _featureId;
	unsigned long long _shieldType;

}

@property (assign,nonatomic) int style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long featureId;                 //@synthesize featureId=_featureId - In the implementation block
@property (assign,nonatomic) unsigned long long shieldType;                //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * featureArray;              //@synthesize featureArray=_featureArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                       //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) NSMutableArray * hitTestPaths;                //@synthesize hitTestPaths=_hitTestPaths - In the implementation block
@property (nonatomic,readonly) char isRoad; 
@property (nonatomic,readonly) char isPOI; 
@property (assign,nonatomic) float strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) NSString * iconName;                          //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,readonly) NSString * trueLabel; 
@property (nonatomic,retain) NSString * shieldText;                        //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) int mapFeatureType;                           //@synthesize mapFeatureType=_mapFeatureType - In the implementation block
-(void)_mergePaths;
-(unsigned long long)featureId;
-(NSMutableArray *)hitTestPaths;
-(NSString *)trueLabel;
-(char)isPOI;
-(NSMutableArray *)featureArray;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(void)addFeature:(void*)arg1 ;
-(char)isRoad;
-(int)mapFeatureType;
-(void)setHitTestPaths:(NSMutableArray *)arg1 ;
-(id)accessibilityPaths;
-(id)_accessibilityShortAddress:(id)arg1 alwaysIncludeLocality:(char)arg2 ;
-(id)_accessibilityShortAddress:(id)arg1 ;
-(id)_distanceAwayString;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(id)_distanceStringForPoint:(SCD_Struct_VK2)arg1 ;
-(void)startLocationInformationRequest:(CGPoint)arg1 ;
-(id)pointsFromFeature:(id)arg1 ;
-(void)_updateElementStatus;
-(id)initWithAccessibilityContainer:(id)arg1 feature:(SCD_Struct_VK3*)arg2 featureTypeContext:(void*)arg3 ignoreMissingName:(char)arg4 useLocalizedLabels:(char)arg5 ;
-(void)setMapFeatureType:(int)arg1 ;
-(void)addFeaturesFromElement:(id)arg1 ;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(char)pointInside:(CGPoint)arg1 ;
-(char)_allowCustomActionHintSpeakOverride;
-(void)setIconName:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(int)style;
-(id)accessibilityLabel;
-(void)setStyle:(int)arg1 ;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(id)_accessibilityMapDetailedInfoAtPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(float)strokeWidth;
-(void)setStrokeWidth:(float)arg1 ;
-(unsigned long long)shieldType;
-(NSString *)iconName;
-(void)setShieldType:(unsigned long long)arg1 ;
@end
