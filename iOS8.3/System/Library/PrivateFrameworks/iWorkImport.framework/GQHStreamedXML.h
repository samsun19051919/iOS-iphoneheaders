/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHXMLOutput.h>

@class NSString;

@interface GQHStreamedXML : NSObject <GQHXMLOutput> {

	xmlOutputBuffer* mOutputBuffer;
	CFDataRef mData;
	CFArrayRef mElementNameStack;
	int mLastOp;
	char mNeedNewlineBeforeNextElement;
	xmlDoc* mXMLDoc;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endElementWithExpectedName:(const char*)arg1 ;
-(CFDataRef)createProgressiveHtml;
-(void)addCharRef:(const char*)arg1 ;
-(void)addXmlCharContent:(const char*)arg1 ;
-(id)initWithHead;
-(CFDataRef)createHtml;
-(CFDataRef)createHtmlWithCss:(CFStringRef)arg1 ;
-(void)pushElementName:(const char*)arg1 ;
-(char*)popElementName;
-(const char*)peekElementName;
-(void)dealloc;
-(void)setAttribute:(const char*)arg1 value:(const char*)arg2 ;
-(id)initEmpty;
-(void)startElement:(const char*)arg1 ;
-(void)endElement;
@end

