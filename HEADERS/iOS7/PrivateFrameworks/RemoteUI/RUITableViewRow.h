/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSData, NSDate, NSDictionary, NSMutableArray, RemoteUITableViewCell, UISwitch, UIWebView, WebContainerView;

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate>
{
    RemoteUITableViewCell *_tableCell;
    id _delegate;
    NSMutableArray *_selectOptions;
    long long _selectedRow;
    NSDate *_date;
    NSDate *_dateMax;
    NSDate *_dateMin;
    UISwitch *_switchControl;
    _Bool _rowInvalid;
    NSDictionary *_deleteAction;
    NSData *_data;
    UIWebView *_webView;
    WebContainerView *_webContainerView;
    float _cachedHeight;
    _Bool _configured;
    double _height;
}

+ (void)resetLocale;
+ (id)_formatterForMonthAndDay;
+ (id)_formatterForShortDate;
+ (id)_formatterForDateYMD;
+ (id)_timeZoneAdjustedDateFromDate:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSDate *dateMax; // @synthesize dateMax=_dateMax;
@property(retain, nonatomic) NSDate *dateMin; // @synthesize dateMin=_dateMin;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(nonatomic) _Bool rowInvalid; // @synthesize rowInvalid=_rowInvalid;
- (id)sourceURL;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_activate;
- (void)clearCachedHeight;
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (void)_datePickerChanged:(id)arg1;
- (void)dealloc;
- (id)selectOptions;
- (void)populatePostbackDictionary:(id)arg1;
- (_Bool)supportsAutomaticSelection;
- (id)tableCell;
- (_Bool)loadAccessoryImage;
- (void)accessoryImageLoaded;
- (void)setImage:(id)arg1;
- (long long)tableCellStyle;
- (Class)tableCellClass;
- (void)setAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
