/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class CALayer, City, NSMutableArray, CAStateController;

@interface WAWeatherCondition : NSObject {

	CALayer* _rootLayer;
	char _playing;
	char _hidden;
	char _shouldRasterize;
	char _multiCityMode;
	char _isRotating;
	char _forcesCondition;
	City* _city;
	float _alpha;
	float _speed;
	CALayer* _layer;
	int _condition;
	unsigned _CAMLState;
	int _forcesNight;
	NSMutableArray* _gyroLayers;
	CAStateController* _stateController;
	double _timeOffset;

}

@property (assign,nonatomic) City * city;                                      //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) char playing;                                     //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) float alpha;                                      //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float speed;                                      //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double timeOffset;                                //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) char hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) char shouldRasterize;                             //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) char multiCityMode;                               //@synthesize multiCityMode=_multiCityMode - In the implementation block
@property (assign,nonatomic) int condition;                                    //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) char isRotating;                                  //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) unsigned CAMLState;                               //@synthesize CAMLState=_CAMLState - In the implementation block
@property (assign,nonatomic) char forcesCondition;                             //@synthesize forcesCondition=_forcesCondition - In the implementation block
@property (assign,nonatomic) int forcesNight;                                  //@synthesize forcesNight=_forcesNight - In the implementation block
@property (nonatomic,retain) NSMutableArray * gyroLayers;                      //@synthesize gyroLayers=_gyroLayers - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
-(void)setCAMLLayerStateForInterfaceOrientation:(int)arg1 animated:(char)arg2 ;
-(void)setCorrectStateForCurrentOrientationAndMode;
-(void)setAlpha:(float)arg1 animationDuration:(double)arg2 ;
-(void)setCAMLState:(unsigned)arg1 ;
-(unsigned)CAMLState;
-(void)transitionToSize:(CGSize)arg1 animated:(char)arg2 ;
-(void)setMultiCityMode:(char)arg1 ;
-(char)multiCityMode;
-(char)forcesCondition;
-(void)setForcesCondition:(char)arg1 ;
-(int)forcesNight;
-(void)setForcesNight:(int)arg1 ;
-(NSMutableArray *)gyroLayers;
-(void)setGyroLayers:(NSMutableArray *)arg1 ;
-(CAStateController *)stateController;
-(void)setStateController:(CAStateController *)arg1 ;
-(City *)city;
-(void)setCity:(City *)arg1 ;
-(void)setIsRotating:(char)arg1 ;
-(void)dealloc;
-(CALayer *)layer;
-(float)alpha;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)setSpeed:(float)arg1 ;
-(char)isRotating;
-(void)setShouldRasterize:(char)arg1 ;
-(float)speed;
-(double)timeOffset;
-(char)shouldRasterize;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setTime:(float)arg1 ;
-(void)resume;
-(int)condition;
-(void)setCondition:(int)arg1 ;
-(void)pause;
-(char)playing;
-(char)hidden;
-(void)setPlaying:(char)arg1 ;
@end
