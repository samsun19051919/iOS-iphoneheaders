/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebDocumentRepresentation.h>
#import <WebKitLegacy/WebDocumentDOM.h>

@class WebHTMLRepresentationPrivate, NSString;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {

	WebHTMLRepresentationPrivate* _private;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedMIMETypes;
+(id)supportedNonImageMIMETypes;
+(id)supportedImageMIMETypes;
+(id)unsupportedTextMIMETypes;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(id)title;
-(id)DOMDocument;
-(void)finalize;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(char)canProvideDocumentSource;
-(id)documentSource;
-(void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2 ;
-(char)_isDisplayingWebArchive;
-(id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned*)arg3 resultIsInCellAbove:(char*)arg4 ;
-(char)canSaveAsWebArchive;
-(id)elementWithName:(id)arg1 inForm:(id)arg2 ;
-(char)elementDoesAutoComplete:(id)arg1 ;
-(char)elementIsPassword:(id)arg1 ;
-(id)formForElement:(id)arg1 ;
-(id)currentForm;
-(id)controlsInForm:(id)arg1 ;
-(id)searchForLabels:(id)arg1 beforeElement:(id)arg2 ;
-(id)matchLabels:(id)arg1 againstElement:(id)arg2 ;
@end
