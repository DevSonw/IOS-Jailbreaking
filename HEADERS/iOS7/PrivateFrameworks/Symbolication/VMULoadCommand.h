/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VMULoadCommand : NSObject
{
    unsigned long long _cmdSize;
    unsigned int _command;
}

+ (id)loadCommandWithMemory:(id)arg1;
- (_Bool)isSegment64;
- (_Bool)isSegment32;
- (_Bool)isSegment;
- (_Bool)isIDDyLib;
- (_Bool)isLoadDyLib;
- (_Bool)isDyLinker;
- (_Bool)isDySymTab;
- (_Bool)isSymTab;
- (_Bool)isUUID;
- (unsigned long long)cmdSize;
- (id)initWithMemory:(id)arg1;

@end
