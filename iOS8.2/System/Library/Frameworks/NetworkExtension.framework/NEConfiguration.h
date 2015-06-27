/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEProfilePayloadHandlerDelegate.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSUUID, NSString, NEVPN, NEAOVPN, NEVPNApp, NEContentFilter, NEProfileIngestionPayloadInfo;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {

	int _grade;
	NSUUID* _identifier;
	NSString* _application;
	NSString* _name;
	NSString* _applicationName;
	NSString* _applicationIdentifier;
	NSString* _externalIdentifier;
	NEVPN* _VPN;
	NEAOVPN* _alwaysOnVPN;
	NEVPNApp* _appVPN;
	NEContentFilter* _contentFilter;
	NEProfileIngestionPayloadInfo* _payloadInfo;

}

@property (readonly) int grade;                                            //@synthesize grade=_grade - In the implementation block
@property (readonly) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * application;                                   //@synthesize application=_application - In the implementation block
@property (copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy) NSString * applicationName;                               //@synthesize applicationName=_applicationName - In the implementation block
@property (copy) NSString * applicationIdentifier;                         //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (copy) NSString * externalIdentifier;                            //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (copy) NEVPN * VPN;                                              //@synthesize VPN=_VPN - In the implementation block
@property (copy) NEAOVPN * alwaysOnVPN;                                    //@synthesize alwaysOnVPN=_alwaysOnVPN - In the implementation block
@property (copy) NEVPNApp * appVPN;                                        //@synthesize appVPN=_appVPN - In the implementation block
@property (copy) NEContentFilter * contentFilter;                          //@synthesize contentFilter=_contentFilter - In the implementation block
@property (copy) NEProfileIngestionPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (readonly) NSString * pluginType; 
+(void)addError:(id)arg1 toList:(id)arg2 ;
+(char)setConfiguration:(CFDictionaryRef)arg1 forProtocol:(CFStringRef)arg2 inService:(SCNetworkServiceRef)arg3 ;
+(CFDictionaryRef)copyConfigurationForProtocol:(CFStringRef)arg1 inService:(SCNetworkServiceRef)arg2 ;
+(char)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(SCPreferencesRef)arg2 ;
+(char)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(SCPreferencesRef)arg2 ;
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(NSString *)pluginType;
-(NEVPN *)VPN;
-(NEVPNApp *)appVPN;
-(NEAOVPN *)alwaysOnVPN;
-(NEContentFilter *)contentFilter;
-(int)grade;
-(void)syncWithSystemKeychain;
-(id)generateSignature;
-(char)isSupportedBySC;
-(char)applyChangesToSCServiceInPreferences:(SCPreferencesRef)arg1 ;
-(void)clearSystemKeychain;
-(NEProfileIngestionPayloadInfo *)payloadInfo;
-(char)updateFromSCService:(SCNetworkServiceRef)arg1 ;
-(id)initFromSCService:(SCNetworkServiceRef)arg1 ;
-(void)syncWithUserKeychain;
-(void)clearUserKeychain;
-(NSString *)externalIdentifier;
-(id)initWithName:(id)arg1 grade:(int)arg2 ;
-(void)setContentFilter:(NEContentFilter *)arg1 ;
-(void)setVPN:(NEVPN *)arg1 ;
-(void)setApplication:(NSString *)arg1 ;
-(void)setAlwaysOnVPN:(NEAOVPN *)arg1 ;
-(void)setAppVPN:(NEVPNApp *)arg1 ;
-(void)setPayloadInfo:(NEProfileIngestionPayloadInfo *)arg1 ;
-(void)syncWithKeychainInDomain:(int)arg1 ;
-(void)clearKeychainInDomain:(int)arg1 ;
-(id)copyProfileDictionary;
-(void)copyPasswordsFromSystemKeychain;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(char)setConfigurationVPNPassword:(id)arg1 ;
-(char)ingestDisconnectOptions:(id)arg1 ;
-(id)getConfigurationProtocol;
-(char)ingestPPPDict:(id)arg1 ;
-(char)configurePPPCommon:(id)arg1 ;
-(char)configureVpnOnDemandRules:(id)arg1 ;
-(char)configureL2TPWithPPPOptions:(id)arg1 ;
-(char)configurePPTPWithPPPOptions:(id)arg1 ;
-(char)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4 ;
-(char)ingestPPPData:(id)arg1 vnpType:(id)arg2 ;
-(char)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2 ;
-(char)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3 ;
-(char)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3 ;
-(char)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2 ;
-(char)ingestDNSOptions:(id)arg1 ;
-(char)ingestProxyOptions:(id)arg1 ;
-(char)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2 ;
-(id)configureAOVPNTunnelFromTunnelDict:(id)arg1 payloadBase:(id)arg2 ;
-(char)setConfigurationPassword:(id)arg1 account:(id)arg2 password:(id)arg3 description:(id)arg4 ;
-(id)getConfigurationPasswordPersist:(id)arg1 account:(id)arg2 description:(id)arg3 ;
-(char)setCertificatesVPN:(id)arg1 ;
-(char)setCertificatesAppVPN:(id)arg1 ;
-(char)setCertificatesAOVpn:(id)arg1 ;
-(char)setCertificateContentFilter:(id)arg1 ;
-(id)getPendingCertificateUUIDsVPN:(id)arg1 ;
-(id)getPendingCertificateUUIDsAppVPN:(id)arg1 ;
-(id)getPendingCertificateUUIDsAOVpn:(id)arg1 ;
-(id)getPendingCertificateUUIDsContentFilter:(id)arg1 ;
-(char)setConfigurationSharedSecret:(id)arg1 ;
-(char)setPayloadInfoIdentityUserNameAndPassword:(id)arg1 ;
-(char)setPayloadInfoIdentityProxy:(id)arg1 ;
-(char)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1 ;
-(char)setPayloadInfoIdentityPIN:(id)arg1 ;
-(id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 ;
-(id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 ;
-(id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 ;
-(id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 ;
-(id)getPendingCertificateUUIDs:(id)arg1 ;
-(id)getConfigurationIdentifier;
-(char)setConfigurationHTTPPassword:(id)arg1 ;
-(char)setPayloadInfoIdentity:(id)arg1 ;
-(char)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2 ;
-(char)setProfileInfo:(id)arg1 ;
-(char)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSUUID *)identifier;
-(NSString *)applicationIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(char)setCertificates:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationName;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)application;
@end
