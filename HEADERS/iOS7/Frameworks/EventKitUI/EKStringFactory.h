/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface EKStringFactory : NSObject
{
    struct __CFDateFormatter *_dayFormatter;
    struct __CFDateFormatter *_abbrevDayFormatter;
    struct __CFDateFormatter *_timeFormatter;
    struct __CFDateFormatter *_standardTimeFormatter;
    struct __CFDateFormatter *_customFormatter;
    struct __CFDateFormatter *_fullStyleDateFormatter;
    NSMutableDictionary *_longFormatters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;
- (id)_stringForDateTime:(CDStruct_79f9e052)arg1 timeZone:(struct __CFTimeZone *)arg2;
- (id)_stringForTime:(CDStruct_79f9e052)arg1;
- (id)dateStringForDate:(double)arg1 allDay:(_Bool)arg2 standalone:(_Bool)arg3 shortFormat:(_Bool)arg4;
- (id)dateStringForDate:(double)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3;
- (id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2;
- (id)_timeStringForDate:(double)arg1;
- (id)_dayStringForDate:(double)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3 lowercase:(_Bool)arg4;
- (id)abbreviatedStringForDay:(CDStruct_79f9e052)arg1 withLongFormatString:(id)arg2;
- (id)stringForDay:(CDStruct_79f9e052)arg1 withLongFormatString:(id)arg2 lowercase:(_Bool)arg3;
- (id)stringForDay:(CDStruct_79f9e052)arg1 withLongFormatString:(id)arg2;
- (id)_stringForDay:(CDStruct_79f9e052)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(_Bool)arg3 lowerCase:(_Bool)arg4;
- (id)_stringForDay:(CDStruct_79f9e052)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(_Bool)arg3;
- (struct __CFDateFormatter *)formatterForLongFormat:(id)arg1;
- (struct __CFDateFormatter *)fullStyleDateFormatter;
- (struct __CFDateFormatter *)standardTimeFormatter;
- (struct __CFDateFormatter *)abbreviatedDayFormatter;
- (struct __CFDateFormatter *)dayFormatter;
- (struct __CFDateFormatter *)timeFormatter;
- (struct __CFDateFormatter *)_customFormatter;
- (void)_localeChanged:(id)arg1;
- (void)_invalidateFormatters;
- (void)dealloc;
- (id)init;

@end
