/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>
{
    NSString *_accountName;
    _Bool _accountNameEditable;
    long long _accountScope;
    _Bool _allowsBioAuthentication;
    _Bool _allowsRetry;
    _Bool _canCreateNewAccount;
    _Bool _canSetActiveAccount;
    NSString *_clientIdentifierHeader;
    _Bool _demoAccount;
    NSDictionary *_httpHeaders;
    NSString *_initialPassword;
    _Bool _persistsAcrossDeviceLock;
    _Bool _persistsPasswordFallback;
    NSString *_preferredITunesStoreClient;
    long long _promptStyle;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    _Bool _shouldCreateNewSession;
    _Bool _shouldFollowAccountButtons;
    _Bool _shouldIgnoreProtocol;
    _Bool _shouldSuppressDialogs;
    NSDictionary *_signupRequestParameters;
    long long _tokenType;
    NSArray *_userAgentComponents;
}

+ (id)contextForSignIn;
@property(readonly, nonatomic) _Bool allowsBioAuthentication; // @synthesize allowsBioAuthentication=_allowsBioAuthentication;
@property(readonly, nonatomic) NSArray *userAgentComponents; // @synthesize userAgentComponents=_userAgentComponents;
@property(readonly, nonatomic) long long tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, nonatomic) NSDictionary *signupRequestParameters; // @synthesize signupRequestParameters=_signupRequestParameters;
@property(readonly, nonatomic) _Bool shouldSuppressDialogs; // @synthesize shouldSuppressDialogs=_shouldSuppressDialogs;
@property(readonly, nonatomic) _Bool shouldIgnoreProtocol; // @synthesize shouldIgnoreProtocol=_shouldIgnoreProtocol;
@property(readonly, nonatomic) _Bool shouldFollowAccountButtons; // @synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons;
@property(readonly, nonatomic) _Bool shouldCreateNewSession; // @synthesize shouldCreateNewSession=_shouldCreateNewSession;
@property(readonly, nonatomic) NSNumber *requiredUniqueIdentifier; // @synthesize requiredUniqueIdentifier=_requiredUniqueIdentifier;
@property(readonly, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(readonly, nonatomic) long long promptStyle; // @synthesize promptStyle=_promptStyle;
@property(readonly, nonatomic) NSString *preferredITunesStoreClient; // @synthesize preferredITunesStoreClient=_preferredITunesStoreClient;
@property(readonly, nonatomic) _Bool persistsPasswordFallback; // @synthesize persistsPasswordFallback=_persistsPasswordFallback;
@property(readonly, nonatomic) _Bool persistsAcrossDeviceLock; // @synthesize persistsAcrossDeviceLock=_persistsAcrossDeviceLock;
@property(readonly, nonatomic) NSString *initialPassword; // @synthesize initialPassword=_initialPassword;
@property(readonly, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_httpHeaders;
@property(readonly, nonatomic, getter=isDemoAccount) _Bool demoAccount; // @synthesize demoAccount=_demoAccount;
@property(readonly, nonatomic) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
@property(readonly, nonatomic) _Bool canSetActiveAccount; // @synthesize canSetActiveAccount=_canSetActiveAccount;
@property(readonly, nonatomic) _Bool canCreateNewAccount; // @synthesize canCreateNewAccount=_canCreateNewAccount;
@property(readonly, nonatomic) _Bool allowsRetry; // @synthesize allowsRetry=_allowsRetry;
@property(readonly) long long accountScope; // @synthesize accountScope=_accountScope;
@property(readonly, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (_Bool)_allowCreateAccount;
@property(readonly, nonatomic, getter=isAccountNameEditable) _Bool accountNameEditable; // @synthesize accountNameEditable=_accountNameEditable;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@property(readonly, nonatomic) SSURLBagContext *URLBagContext;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (id)_initSSAuthenticationContext;

@end
