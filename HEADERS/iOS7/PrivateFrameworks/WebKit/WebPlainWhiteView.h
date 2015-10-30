/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WAKView.h"

#import "WebDocumentElement-Protocol.h"
#import "WebDocumentView-Protocol.h"

// Not exported
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>
{
}

- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(_Bool)arg2;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)setNeedsLayout:(_Bool)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
