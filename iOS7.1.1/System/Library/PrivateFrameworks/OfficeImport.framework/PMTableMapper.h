/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, CMDrawableStyle, CMTableGridInfo, OADOrientedBounds;

@interface PMTableMapper : CMMapper {

	OADTable* mTable;
	CMDrawableStyle* mStyle;
	CMTableGridInfo* mGrid;
	OADOrientedBounds* mBounds;

}
-(id)cellStyle;
-(void)mapTablePropertiesWithState:(id)arg1 ;
-(void)mapColumnGridAt:(id)arg1 withState:(id)arg2 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(unsigned long long)rowCount;
-(float)columnWidthAtIndex:(int)arg1 state:(id)arg2 ;
-(id)tableBorderStyle;
-(id)defaultCellFillForRow:(unsigned)arg1 withState:(id)arg2 ;
-(id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(id)grid;
-(id)defaultCellFillWithState:(id)arg1 ;
@end
