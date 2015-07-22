/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject {

	PKPass* _pass;
	UIImage* _icon;

}

@property (nonatomic,retain) PKPass * pass;               //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) UIImage * icon;              //@synthesize icon=_icon - In the implementation block
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(BOOL)isPreviewable;
-(UIImage *)icon;
-(void)dealloc;
-(id)title;
-(id)subtitle;
-(void)setIcon:(UIImage *)arg1 ;
-(BOOL)shouldShowViewer;
-(BOOL)shouldBeQuickLooked;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowDisclosure;
-(id)passView;
-(int)mediaType;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
@end
