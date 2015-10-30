/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebInspectorFrontend, WebView;

// Not exported
@interface WebInspector : NSObject
{
    WebView *_webView;
    WebInspectorFrontend *_frontend;
}

- (void)releaseFrontend;
- (void)setFrontend:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 callId:(long long)arg2 script:(id)arg3;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)close:(id)arg1;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;
- (_Bool)isTimelineProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(_Bool)arg1;
- (_Bool)isJavaScriptProfilingEnabled;
- (void)stopProfilingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)toggleProfilingJavaScript:(id)arg1;
- (_Bool)isProfilingJavaScript;
- (void)stopDebuggingJavaScript:(id)arg1;
- (void)startDebuggingJavaScript:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (_Bool)isDebuggingJavaScript;
- (void)showTimeline:(id)arg1;
- (void)showConsole:(id)arg1;
- (void)show:(id)arg1;
- (void)showWindow;
- (void)webViewClosed;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end
