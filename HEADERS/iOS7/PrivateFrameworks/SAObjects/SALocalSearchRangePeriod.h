/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SALocalSearchPeriod-Protocol.h"

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>
{
}

+ (id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rangePeriod;
@property(nonatomic) long long startSecondsSinceMidnight;
@property(nonatomic) long long endSecondsSinceMidnight;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
