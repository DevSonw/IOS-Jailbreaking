/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

// Not exported
@interface WMTableRowMapper : CMMapper
{
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (_Bool)isTableRowDeleted:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (double)height;
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;

@end
