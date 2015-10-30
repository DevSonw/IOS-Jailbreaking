/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableDictionary, NSNumber, NSString, SSAuthenticationContext, SUClientInterface, SUScriptAccountManager, SUScriptKeyValueStore, SUScriptMediaLibrary, SUScriptNavigationBar, SUScriptNotificationObserver, SUScriptOperationDelegate, SUScriptPreviewOverlay, SUScriptPurchaseManager, SUScriptWindowContext, WebFrame;

@interface SUScriptInterface : SUScriptObject
{
    SUScriptAccountManager *_accountManager;
    SUScriptKeyValueStore *_applicationLocalStorage;
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    id <SUScriptInterfaceDelegate> _delegate;
    SUScriptKeyValueStore *_deviceLocalStorage;
    NSMutableDictionary *_downloadQueues;
    WebFrame *_frame;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPreviewOverlay *_previewOverlay;
    SUScriptPurchaseManager *_purchaseManager;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptWindowContext *_scriptWindowContext;
    id _threadSafeDelegate;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (long long)purchaseAnimationStyleFromString:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (void)_scriptUserInfoDidChangeNotification:(id)arg1;
- (void)_globalEventNotification:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (_Bool)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (_Bool)isExplicitContentDisabled;
- (id)hardwareType;
- (id)diskSpaceAvailable;
- (_Bool)canSendEmail;
- (_Bool)arePodcastsDisabled;
- (id)activeNetworkType;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (_Bool)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(_Bool)arg2;
- (id)systemVersion;
- (_Bool)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (_Bool)haveAccount;
- (id)accountName;
- (id)accountDSID;
- (void)setNavigationBar:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setLoggingEnabled:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
@property(copy) NSString *cookie;
@property(readonly) id screenReaderRunning;
@property(readonly) SUScriptPreviewOverlay *previewOverlay;
- (id)requestInfo;
@property(readonly) NSNumber *orientation;
@property(readonly) SUScriptNavigationBar *navigationBar;
@property(readonly) id loggingEnabled;
@property(readonly) id globalRootObject;
@property(readonly) NSString *clientIdentifier;
- (id)_className;
@property(readonly) SUScriptKeyValueStore *applicationLocalStorage;
@property(readonly) id applicationAccessibilityEnabled;
- (void)accessibilityPostScreenChange;
- (void)accessibilityPostLayoutChange;
- (void)_accessibilityPostLayoutChange;
- (void)signOutPrimaryAccount;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2;
- (void)perfLog:(id)arg1;
- (id)machineGUID;
- (void)log:(id)arg1;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (id)parentViewController;
- (id)DOMElementWithElement:(id)arg1;
@property(retain) WebFrame *webFrame;
@property(readonly) id <SUScriptInterfaceDelegate> threadSafeDelegate;
@property(retain) SUScriptWindowContext *scriptWindowContext;
@property id <SUScriptInterfaceDelegate> delegate;
@property(retain) SUClientInterface *clientInterface;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SUScriptKeyValueStore *deviceLocalStorage;
- (struct OpaqueJSContext *)copyJavaScriptContext;
- (void)dealloc;
- (id)init;

@end
