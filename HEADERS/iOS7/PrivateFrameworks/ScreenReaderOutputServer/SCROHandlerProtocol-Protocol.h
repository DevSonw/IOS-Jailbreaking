/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SCROHandlerProtocol
- (int)handlePerformActionForKey:(int)arg1 trusted:(_Bool)arg2;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(_Bool)arg4;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(_Bool)arg2;
@end
