/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>
@optional
-(void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
-(char)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
-(int)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
-(int)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
-(void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
-(id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;

@end
