/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore, TSTLayoutDynamicColumnSwapProtocol, TSTLayoutDynamicContentProtocol, TSTLayoutDynamicRowSwapProtocol;
@class TSKChangeNotifier, TSTTableInfo, TSTWPColumnCache, TSTDupContentCache, TSTWidthHeightCache, TSUReadWriteQueue, TSTHiddenRowsColumnsCache, NSMutableArray, NSObject, TSTLayoutTask, NSRecursiveLock, TSURetainedPointerKeyDictionary, NSLock, TSDFill, NSMutableSet, TSUColor, TSDInfoGeometry, TSDLayoutGeometry, TSTCellRegion, TSTLayoutDynamicResizeInfo, TSWPEditingController, TSTMergeRangeSortedSet, TSTTableModel, TSTLayout, NSIndexSet;

@interface TSTMasterLayout : NSObject <TSKChangeSourceObserver> {

	TSKChangeNotifier* mChangeNotifier;
	int mReferenceCount;
	TSTTableInfo* mTableInfo;
	TSTWPColumnCache* mCellIDToWPColumnCache;
	TSTDupContentCache* mDupContentCache;
	TSTWPColumnCache* mTempWPColumnCache;
	TSTWidthHeightCache* mWidthHeightCache;
	TSUReadWriteQueue* mWHCacheQueue;
	TSTHiddenRowsColumnsCache* mHiddenRowsColumnsCache;
	NSMutableArray* mChangeDescriptors;
	NSObject<OS_dispatch_group>* mLayoutInFlight;
	TSTLayoutTask* mCurrentLayoutTask;
	NSObject<OS_dispatch_semaphore>* mLayoutSemaphore;
	unsigned mMaxConcurrentTasks;
	unsigned mNumCellsPerTask;
	bool mHeaderColumnsFrozen;
	bool mHeaderRowsFrozen;
	bool mHeaderColumnsRepeat;
	bool mHeaderRowsRepeat;
	bool mTableNameEnabled;
	CGRect mTableNameBounds;
	double mCachedTableNameHeight;
	unsigned short mCachedNumberOfHeaderColumns;
	unsigned long long mCachedMaxNumberOfColumns;
	unsigned short mCachedNumberOfHeaderRows;
	unsigned short mCachedNumberOfFooterRows;
	unsigned long long mCachedMaxNumberOfRows;
	TSTTableStrokeDefaultsRef mDefaultStrokes;
	NSMutableArray* mTopRowStrokes;
	NSMutableArray* mBottomRowStrokes;
	NSMutableArray* mLeftColumnStrokes;
	NSMutableArray* mRightColumnStrokes;
	NSRecursiveLock* mStrokesLock;
	TSURetainedPointerKeyDictionary* mParaStyleToHeightCache;
	NSLock* mLock;
	bool mBandedFillIsValid;
	bool mUseBandedFill;
	TSDFill* mBandedFillObject;
	int mTableEnvironment;
	int mTableRowsBehavior;
	bool mTableDefaultFontHeightsAreValid;
	double mTableDefaultFontHeightForArea[4];
	bool mInDynamicLayoutMode;
	NSMutableSet* mDynamicLayouts;
	double mDynamicAddOrRemoveColumnElementSize;
	double mDynamicAddOrRemoveRowElementSize;
	bool mDynamicBandedFill;
	bool mDynamicBandedFillSetting;
	int mDynamicColumnAdjustment;
	<TSTLayoutDynamicColumnSwapProtocol>* mDynamicColumnSwapDelegate;
	double mDynamicColumnTabSize;
	<TSTLayoutDynamicContentProtocol>* mDynamicContentDelegate;
	TSUColor* mDynamicFontColor;
	SCD_Struct_TS500 mDynamicFontColorCellRange;
	SCD_Struct_TS500 mDynamicHidingRowsCols;
	int mDynamicHidingRowsColsDirection;
	SCD_Struct_TS500 mDynamicHidingContent;
	SCD_Struct_TS500 mDynamicHidingText;
	TSDInfoGeometry* mDynamicInfoGeometry;
	bool mDynamicRepResize;
	bool mDynamicRepressFrozenHeader;
	bool mDynamicResizingColumns;
	SCD_Struct_TS500 mDynamicResizingColumnRange;
	double mDynamicResizingColumnAdjustment;
	bool mDynamicResizingRows;
	SCD_Struct_TS500 mDynamicResizingRowRange;
	double mDynamicResizingRowAdjustment;
	SCD_Struct_TS500 mDynamicRevealingRowsCols;
	int mDynamicRevealingRowsColsDirection;
	int mDynamicRowAdjustment;
	<TSTLayoutDynamicRowSwapProtocol>* mDynamicRowSwapDelegate;
	double mDynamicRowTabSize;
	TSDLayoutGeometry* mDynamicSavedLayoutGeometry;
	TSTCellRegion* mDynamicSelectionRegion;
	double mDynamicWidthResize;
	double mDynamicHeightResize;
	double mDynamicTableNameResize;
	TSTLayoutDynamicResizeInfo* mDynamicResizeInfo;
	SCD_Struct_TS267 mDynamicSuppressingConditionalStylesCellID;
	bool mEmptyFilteredTable;
	TSWPEditingController* mContainedTextEditor;
	TSTMergeRangeSortedSet* mMergeRanges;
	bool mProcessHiddenRowsForExport;
	TSKChangeNotifier* _changeNotifier;
	CGSize mMaximumPartitionSize;

}

@property (assign,nonatomic) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) TSTWPColumnCache * cellIDToWPColumnCache; 
@property (nonatomic,readonly) TSTDupContentCache * dupContentCache; 
@property (nonatomic,readonly) TSTWPColumnCache * tempWPColumnCache; 
@property (nonatomic,readonly) TSUReadWriteQueue * whCacheQueue; 
@property (nonatomic,readonly) TSTWidthHeightCache * widthHeightCache; 
@property (nonatomic,readonly) TSTHiddenRowsColumnsCache * hiddenRowsColumnsCache; 
@property (assign,nonatomic) unsigned maxConcurrentTasks; 
@property (assign,nonatomic) unsigned numCellsPerTask; 
@property (nonatomic,readonly) bool useBandedFill; 
@property (nonatomic,readonly) TSDFill * bandedFillObject; 
@property (assign,nonatomic) int tableEnvironment; 
@property (nonatomic,readonly) int tableRowsBehavior; 
@property (nonatomic,readonly) bool inDynamicLayoutMode; 
@property (nonatomic,readonly) NSMutableSet * dynamicLayouts; 
@property (nonatomic,readonly) TSTLayout * dynamicLayout; 
@property (nonatomic,readonly) double dynamicAddOrRemoveColumnElementSize; 
@property (nonatomic,readonly) double dynamicAddOrRemoveRowElementSize; 
@property (nonatomic,readonly) bool dynamicBandedFill; 
@property (nonatomic,readonly) bool dynamicBandedFillSetting; 
@property (nonatomic,readonly) int dynamicColumnAdjustment; 
@property (nonatomic,readonly) <TSTLayoutDynamicColumnSwapProtocol> * dynamicColumnSwapDelegate; 
@property (nonatomic,readonly) double dynamicColumnTabSize; 
@property (nonatomic,readonly) <TSTLayoutDynamicContentProtocol> * dynamicContentDelegate; 
@property (nonatomic,readonly) TSUColor * dynamicFontColor; 
@property (nonatomic,readonly) SCD_Struct_TS501 dynamicFontColorCellRange; 
@property (assign,nonatomic) bool dynamicRepResize; 
@property (nonatomic,readonly) TSDInfoGeometry * dynamicInfoGeometry; 
@property (assign,nonatomic) double dynamicWidthResize; 
@property (assign,nonatomic) double dynamicHeightResize; 
@property (nonatomic,readonly) bool dynamicResizingColumns; 
@property (nonatomic,readonly) SCD_Struct_TS501 dynamicResizingColumnRange; 
@property (nonatomic,readonly) double dynamicResizingColumnAdjustment; 
@property (nonatomic,readonly) bool dynamicResizingRows; 
@property (nonatomic,readonly) SCD_Struct_TS501 dynamicResizingRowRange; 
@property (nonatomic,readonly) double dynamicResizingRowAdjustment; 
@property (nonatomic,readonly) int dynamicRowAdjustment; 
@property (nonatomic,readonly) <TSTLayoutDynamicRowSwapProtocol> * dynamicRowSwapDelegate; 
@property (nonatomic,readonly) double dynamicRowTabSize; 
@property (nonatomic,copy) TSDLayoutGeometry * dynamicSavedLayoutGeometry; 
@property (nonatomic,readonly) TSTCellRegion * dynamicSelectionRegion; 
@property (nonatomic,readonly) double dynamicTableNameResize; 
@property (nonatomic,readonly) SCD_Struct_TS267 dynamicSuppressingConditionalStylesCellID; 
@property (nonatomic,readonly) bool emptyFilteredTable; 
@property (assign,nonatomic) TSWPEditingController * containedTextEditor; 
@property (nonatomic,readonly) NSMutableArray * changeDescriptors; 
@property (nonatomic,readonly) bool isGrouped; 
@property (assign,nonatomic) TSTMergeRangeSortedSet * mergeRanges; 
@property (assign,nonatomic) TSKChangeNotifier * changeNotifier;                                              //@synthesize changeNotifier=_changeNotifier - In the implementation block
@property (assign,nonatomic) bool processHiddenRowsForExport; 
@property (assign,nonatomic) CGSize maximumPartitionSize; 
@property (nonatomic,readonly) NSIndexSet * visibleRowIndices; 
@property (nonatomic,readonly) NSIndexSet * visibleColumnIndices; 
+(CGSize)tableNameTextSize:(id)arg1 ;
+(double)effectiveTableNameHeightForModel:(id)arg1 ;
+(id)tableNameTextEngine:(id)arg1 ;
-(id)changeNotifier;
-(void)setChangeNotifier:(id)arg1 ;
-(id)tableModel;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(int)tableAreaForCellID:(SCD_Struct_TS267)arg1 ;
-(double)tableNameHeight;
-(bool)useBandedFill;
-(id)bandedFillObject;
-(void)setTableInfo:(id)arg1 ;
-(bool)emptyFilteredTable;
-(void)calculateRawTableSize:(CGSize*)arg1 andStrokeDelta:(CGSize*)arg2 ;
-(CGAffineTransform)transformForTargetSize:(CGSize)arg1 withRawTableSize:(CGSize)arg2 andStrokeDelta:(CGSize)arg3 ;
-(double)calculatedTableNameHeightIncludingDynamicResize:(bool)arg1 ;
-(void)invalidateTableNameHeight;
-(void)invalidateDynamicResizeInfo;
-(id)dupContentCache;
-(id)cellIDToWPColumnCache;
-(id)tableInfo;
-(id)newLayoutHint;
-(void)setDynamicHeightResize:(double)arg1 ;
-(void)setDynamicWidthResize:(double)arg1 ;
-(void)captureDynamicResizeInfo;
-(void)updateDynamicInfoGeometry:(id)arg1 ;
-(double)dynamicHeightResize;
-(void)updateDynamicTableNameSize:(double)arg1 ;
-(int)tableRowsBehavior;
-(bool)isDynamicallyChangingInfoGeometry;
-(id)dynamicInfoGeometry;
-(void)validateLayoutHint:(id)arg1 ;
-(void)addChangeDescriptor:(id)arg1 ;
-(bool)isDynamicallyColumnTabResizing;
-(double)dynamicColumnTabSize;
-(bool)isDynamicallyRowTabResizing;
-(double)dynamicRowTabSize;
-(bool)isDynamicallyRepressingFrozenHeaders;
-(bool)inDynamicLayoutMode;
-(bool)dynamicRepResize;
-(bool)isDynamicallyChangingContent;
-(id)dynamicContentDelegate;
-(bool)cell:(id*)arg1 forCellID:(SCD_Struct_TS267)arg2 ;
-(SCD_Struct_TS267)modelCellIDForLayoutCellID:(SCD_Struct_TS267)arg1 ;
-(bool)isDynamicallyChangingRowOrColumnCount;
-(UIEdgeInsets)paddingForCellID:(SCD_Struct_TS267)arg1 ;
-(int)tableEnvironment;
-(void)addChangeDescriptorWithType:(int)arg1 andCellRange:(SCD_Struct_TS501)arg2 ;
-(id)widthHeightCache;
-(double)calculatedTableNameHeight;
-(bool)isDynamicallyResizingTableName;
-(double)dynamicTableNameResize;
-(id)hiddenRowsColumnsCache;
-(bool)isDynamicallyResizing:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(UIEdgeInsets)defaultPaddingForCellID:(SCD_Struct_TS267)arg1 ;
-(id)newTextEngineForCell:(id)arg1 atCellID:(SCD_Struct_TS267)arg2 ;
-(double)fontHeightOfParagraphStyle:(id)arg1 ;
-(void)clearModelHeightWidthCacheForCellRange:(SCD_Struct_TS501)arg1 ;
-(void)validateDynamicResizeInfo;
-(void)invalidateBandedFill;
-(bool)isDynamicallySettingBandedFill;
-(bool)dynamicBandedFill;
-(bool)dynamicBandedFillSetting;
-(void)measureTextForLayoutState:(id)arg1 ;
-(void)setDynamicRepResize:(bool)arg1 ;
-(id)dynamicLayouts;
-(void)setDynamicSavedLayoutGeometry:(id)arg1 ;
-(bool)updateDynamicChangeRowOrColumnCount:(int)arg1 count:(int)arg2 newlyAddedElementSize:(double)arg3 ;
-(void)p_cancelDynamicRowColCountChanges;
-(void)updateDynamicHidingRowsCols:(int)arg1 hidingCellRange:(SCD_Struct_TS501)arg2 ;
-(void)cancelDynamicModeChanges;
-(void)beginDynamicMode:(id)arg1 ;
-(void)endDynamicMode;
-(bool)isDynamicallySwappingRows;
-(id)dynamicRowSwapDelegate;
-(bool)isDynamicallySwappingColumns;
-(id)dynamicColumnSwapDelegate;
-(bool)isDynamicallyChangingRowCount;
-(bool)isDynamicallyRevealingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(bool)isDynamicallyHidingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(bool)processHiddenRowsForExport;
-(id)visibleRowIndices;
-(id)visibleColumnIndices;
-(bool)isDynamicallyChangingColumnCount;
-(id)dynamicLayout;
-(void)addChangeDescriptorWithType:(int)arg1 andCellRange:(SCD_Struct_TS501)arg2 andStrokeRange:(SCD_Struct_TS501)arg3 ;
-(bool)isGrouped;
-(id)dynamicSavedLayoutGeometry;
-(void)p_processChange:(id)arg1 forChangeSource:(id)arg2 ;
-(id)changeDescriptors;
-(void)validateBandedFill;
-(void)validateTableRowsBehavior;
-(void)validateChangeDescriptorQueue;
-(void)invalidateDefaultFontHeights;
-(void)validateRowVisibility:(id)arg1 ;
-(void)validateMasterLayoutForChangeDescriptors:(id)arg1 ;
-(void)validateDefaultFontHeights;
-(id)regionForStrokeValidationFromChangeDescriptors:(id)arg1 ;
-(id)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2 ;
-(void)validateStrokesForRegion:(id)arg1 regionAlreadyValidated:(id)arg2 ;
-(void)processLayoutTask:(id)arg1 ;
-(void)waitForLayoutToComplete;
-(void)updateWHCForMergeRanges;
-(UIEdgeInsets)edgeInsetsFromPadding:(id)arg1 ;
-(void)queueCellForValidation:(SCD_Struct_TS501)arg1 cell:(id)arg2 mergeRange:(SCD_Struct_TS501)arg3 wrap:(bool)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(bool)arg7 layoutCacheFlags:(int)arg8 ;
-(void)p_validateFittingInfoForCellID:(SCD_Struct_TS267)arg1 inMergeRange:(SCD_Struct_TS501)arg2 ;
-(SCD_Struct_TS267)p_validateFittingInfoForEmptyCellsBetween:(SCD_Struct_TS267)arg1 andCellID:(SCD_Struct_TS267)arg2 inRange:(SCD_Struct_TS501)arg3 ;
-(void)validateFittingInfoForCell:(id)arg1 cellID:(SCD_Struct_TS267)arg2 mergeRange:(SCD_Struct_TS501)arg3 setFitting:(bool)arg4 ;
-(void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(SCD_Struct_TS267)arg1 andEndCellID:(SCD_Struct_TS267)arg2 ;
-(void)validateFittingInfoWithCellRange:(SCD_Struct_TS501)arg1 ;
-(SCD_Struct_TS267)layoutCellIDForModelCellID:(SCD_Struct_TS267)arg1 ;
-(id)containedTextEditor;
-(unsigned)numCellsPerTask;
-(id)whCacheQueue;
-(id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(SCD_Struct_TS267)arg2 ;
-(bool)isDynamicallyChangingFontColorOfCellID:(SCD_Struct_TS267)arg1 ;
-(id)dynamicFontColor;
-(void)setProcessHiddenRowsForExport:(bool)arg1 ;
-(bool)hintIsValid:(id)arg1 ;
-(void)resetModelHeightWidthCache;
-(id)tableNameTextEngine;
-(CGSize)tableNameTextSize;
-(bool)shouldRowUseBandedFill:(unsigned short)arg1 ;
-(void)addDynamicLayoutBeginIfNecessary:(id)arg1 ;
-(void)removeDynamicLayoutEndIfNecessary:(id)arg1 ;
-(bool)isDynamicallyResizing:(int)arg1 ;
-(bool)isDynamicallyResizingCellID:(SCD_Struct_TS267)arg1 ;
-(bool)isDynamicallyHidingRowsCols;
-(bool)isDynamicallyHidingRowsColsCellID:(SCD_Struct_TS267)arg1 ;
-(bool)isDynamicallyHidingContentOfCellID:(SCD_Struct_TS267)arg1 ;
-(bool)isDynamicallyHidingTextOfCellID:(SCD_Struct_TS267)arg1 ;
-(void)updateDynamicResize:(int)arg1 resizingRange:(SCD_Struct_TS501)arg2 resizeAdjustment:(double)arg3 ;
-(bool)isDynamicallyRevealingRowsCols;
-(void)updateDynamicSelectionRegion:(id)arg1 ;
-(bool)isDynamicallyChangingSelection;
-(void)updateDynamicColumnTabSize:(double)arg1 ;
-(void)updateDynamicRowTabSize:(double)arg1 ;
-(void)updateDynamicBandedFill:(bool)arg1 setting:(bool)arg2 ;
-(void)updateDynamicRepressFrozenHeader:(bool)arg1 ;
-(void)updateDynamicHidingContent:(SCD_Struct_TS501)arg1 ;
-(void)updateDynamicHidingText:(SCD_Struct_TS501)arg1 ;
-(void)updateDynamicRevealingRowsCols:(int)arg1 revealingCellRange:(SCD_Struct_TS501)arg2 ;
-(void)updateDynamicContentDelegate:(id)arg1 ;
-(void)updateDynamicFontColor:(id)arg1 andRange:(SCD_Struct_TS501)arg2 ;
-(void)updateDynamicRowSwapDelegate:(id)arg1 ;
-(void)updateDynamicColumnSwapDelegate:(id)arg1 ;
-(void)updateDynamicSuppressingConditionalStylesCellID:(SCD_Struct_TS267)arg1 ;
-(void)updateDynamicResizeInfo:(id)arg1 ;
-(id)adjustedDynamicSavedLayoutGeometry;
-(void)validateFittingWidthsForRegion:(id)arg1 ;
-(id)validateCellForDrawing:(SCD_Struct_TS267)arg1 cell:(id)arg2 contents:(id)arg3 wrap:(bool)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned long long)arg8 pageCount:(unsigned long long)arg9 ;
-(void)setMaxConcurrentTasks:(unsigned)arg1 ;
-(id)tempWPColumnCache;
-(void)setTableEnvironment:(int)arg1 ;
-(unsigned)maxConcurrentTasks;
-(void)setNumCellsPerTask:(unsigned)arg1 ;
-(double)dynamicAddOrRemoveColumnElementSize;
-(double)dynamicAddOrRemoveRowElementSize;
-(int)dynamicColumnAdjustment;
-(SCD_Struct_TS501)dynamicFontColorCellRange;
-(double)dynamicWidthResize;
-(bool)dynamicResizingColumns;
-(double)dynamicResizingColumnAdjustment;
-(SCD_Struct_TS501)dynamicResizingColumnRange;
-(bool)dynamicResizingRows;
-(double)dynamicResizingRowAdjustment;
-(SCD_Struct_TS501)dynamicResizingRowRange;
-(int)dynamicRowAdjustment;
-(id)dynamicSelectionRegion;
-(SCD_Struct_TS267)dynamicSuppressingConditionalStylesCellID;
-(void)setContainedTextEditor:(id)arg1 ;
-(id)mergeRanges;
-(void)setMergeRanges:(id)arg1 ;
-(CGSize)maximumPartitionSize;
-(void)setMaximumPartitionSize:(CGSize)arg1 ;
-(void)validate;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
@end
