//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol AirPlayControllerSync
- (long)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3;
- (id)getProperty:(NSString *)arg1 qualifier:(id)arg2 status:(int *)arg3;
- (void)postEvent:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3;
- (long)performCommand:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id *)arg4;
@end

