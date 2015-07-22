/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMOperation.h>

@class NSManagedObjectContext, NSSet, AEAnnotationProvider;

@interface BKLibraryResetIsNewOperation : IMOperation {

	NSManagedObjectContext* _moc;
	NSSet* _databaseKeys;
	AEAnnotationProvider* _annotationProvider;

}

@property (nonatomic,retain) AEAnnotationProvider * annotationProvider;              //@synthesize annotationProvider=_annotationProvider - In the implementation block
-(void)performOperation;
-(id)initWithDatabaseKeys:(id)arg1 ;
-(void)setAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(AEAnnotationProvider *)annotationProvider;
-(char)resetIsNewForBook:(id)arg1 annotationDatabaseKeys:(id)arg2 ;
-(void)populateAssetIDForBooks:(id)arg1 ;
-(void)dealloc;
-(id)moc;
@end
