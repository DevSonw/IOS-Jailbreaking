/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMCSSStyleSheet, NSString;

// Not exported
@interface DOMCSSRule : DOMObject
{
}

@property(readonly) DOMCSSRule *parentRule;
@property(readonly) DOMCSSStyleSheet *parentStyleSheet;
@property(copy) NSString *cssText;
@property(readonly) unsigned short type;
- (void)finalize;
- (void)dealloc;

@end
