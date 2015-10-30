/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

#import "EKCellShortener-Protocol.h"

@class EKCalendarItemRecurrenceEndCell, EKRecurrenceTypeEditItemViewController, NSDate, NSString, PreferencesValueCell;

// Not exported
@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKCellShortener>
{
    long long _repeatType;
    long long _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    unsigned long long _disclosedSubitem;
    int _shorteningStatus;
    PreferencesValueCell *_repeatEndDateCell;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
}

- (void).cxx_destruct;
- (id)_recurrenceTypeVC;
- (void)_neverRepeatButtonTapped:(id)arg1;
- (void)_repeatEndDateChanged:(id)arg1;
- (id)_repeatEndPickerCell;
- (id)minRecurrenceEndDate;
- (id)stringForDate:(id)arg1;
- (id)recurrenceTimeZone;
- (id)recurrenceDate;
- (void)shortenCell:(id)arg1;
- (_Bool)_validateRecurrenceType:(id)arg1;
- (_Bool)editItemViewControllerCommit:(id)arg1 notify:(_Bool)arg2;
- (_Bool)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (void)_updateRepeatEndDateCell;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)reset;

@end
