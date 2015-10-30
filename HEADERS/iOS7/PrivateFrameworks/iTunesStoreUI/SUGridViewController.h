/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SUGridViewDataSource-Protocol.h"
#import "SUGridViewDelegate-Protocol.h"

@class SUGridView, SUTableDataSource;

@interface SUGridViewController : SUViewController <SUGridViewDataSource, SUGridViewDelegate>
{
    SUTableDataSource *_dataSource;
    long long _disappearOrientation;
    double _tableMargin;
    long long _tableViewStyle;
}

@property(nonatomic) double tableMargin; // @synthesize tableMargin=_tableMargin;
@property(retain, nonatomic) SUTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)_existingGridView;
- (long long)numberOfSectionsInGridView:(id)arg1;
- (double)marginForGridView:(id)arg1;
- (void)gridView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)gridView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)gridView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)gridView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)gridView:(id)arg1 numberOfColumnsInSection:(long long)arg2;
- (double)gridView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;
- (long long)gridView:(id)arg1 editingStyleForCellAtIndexPath:(id)arg2;
- (void)gridView:(id)arg1 commitEditingStyle:(long long)arg2 forCellAtIndexPath:(id)arg3;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)reloadData;
@property(readonly, nonatomic) SUGridView *gridView;
- (_Bool)deleteCellAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithTableViewStyle:(long long)arg1;

@end
