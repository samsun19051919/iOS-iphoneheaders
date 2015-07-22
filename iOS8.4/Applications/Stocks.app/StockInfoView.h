/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <Stocks/StockUpdateObserver.h>

@class Stock, UILabel, LoadingLabel, StockMetadataGridView, NSString;

@interface StockInfoView : UIView <StockUpdateObserver> {

	Stock* _stock;
	UILabel* _titleLabel;
	LoadingLabel* _loadingLabel;
	StockMetadataGridView* _gridView;
	char _pauseUpdates;
	char _stale;

}

@property (nonatomic,retain) Stock * stock;                          //@synthesize stock=_stock - In the implementation block
@property (assign,getter=isStale,nonatomic) char stale;              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) char drawsBottomLine; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpdatesPaused:(char)arg1 ;
-(char)drawsBottomLine;
-(void)setDrawsBottomLine:(char)arg1 ;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)_redrawGridView;
-(void)_metadataDidUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
-(void)stockUpdateManager:(id)arg1 didUpdateStocks:(id)arg2 updates:(int)arg3 ;
-(void)stockUpdateManager:(id)arg1 didRequestUpdateForStocks:(id)arg2 updates:(int)arg3 ;
-(void)stockUpdateManager:(id)arg1 failedToUpdateStocks:(id)arg2 updates:(int)arg3 ;
-(void)setStale:(char)arg1 ;
-(char)isStale;
@end
