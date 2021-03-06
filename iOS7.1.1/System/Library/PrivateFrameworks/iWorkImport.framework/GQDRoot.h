/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDRoot : NSObject {

	CFDictionaryRef mUidToObjectMap;
	bool mAppBundleColorMapLoaded;
	CFDictionaryRef mAppBundleResourceToColorMap;
	bool mAppBundleResourcesUrlInitialized;
	CFURLRef mAppBundleResourcesUrl;
	bool mIsOldAssetNameMapInitialized;
	CFDictionaryRef mOldAssetNameMap;
	int mAppBundleVersion;
	unsigned long long mDocVersion;

}
+(xmlNs*)appNamespace;
-(const char*)addIdentifiedObject:(id)arg1 fromCurrentNode:(xmlTextReaderRef)arg2 ;
-(id)objectWithXmlUid:(const char*)arg1 ;
-(bool)addObject:(id)arg1 withOwnedXmlUid:(const char*)arg2 ;
-(void)forgetAboutObject:(id)arg1 withXmlUid:(const char*)arg2 ;
-(void)loadAppBundleResourceToColorMap;
-(CFURLRef)appBundleResourcesUrl;
-(bool)appBundleCanProcessCurrentDocVersion;
-(id)colorForMissingAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(void)initializeAppBundleResourcesUrl;
-(bool)readDocumentVersion:(xmlTextReaderRef)arg1 isTooNew:(bool*)arg2 ;
-(unsigned long long)documentReleaseVersion;
-(Class)classForName:(const char*)arg1 ;
-(bool)includeStyleWithIdentifier:(const char*)arg1 parentIdentifier:(const char*)arg2 uid:(const char*)arg3 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileExists:(bool*)arg3 ;
-(bool)readDocumentVersion:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(id)init;
-(id)uuid;
@end

