//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSOperationQueue, SKUIClientContext, SKUISearchResultGroup;

@interface SKUISearchResultGroupController : NSObject
{
    SKUISearchResultGroup *_resultGroup;
    id <SKUISearchResultGroupControllerDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    SKUIClientContext *_clientContext;
    NSMutableIndexSet *_itemIndexesToLoad;
    NSMutableIndexSet *_editorialIndexesToLoad;
    NSMutableIndexSet *_editorialArtworkIndexesToLoad;
    NSMutableIndexSet *_appBundleChildrenIndexesToLoad;
    NSMutableArray *_appBundleArtworkIndexPathsToLoad;
    NSMutableDictionary *_appBundleArtworkByIndexPaths;
    NSMutableDictionary *_artworksByIndex;
    NSMutableDictionary *_itemArtworkContextsBySize;
    NSIndexSet *_onScreenIndexes;
    NSMutableIndexSet *_removedIndexes;
}

@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak id <SKUISearchResultGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_itemArtworkContextForCount:(int)arg1;
- (void)_setItemArtworkResponse:(id)arg1 error:(id)arg2 forIndexPath:(id)arg3;
- (void)_setEditorialResponse:(id)arg1 error:(id)arg2 forIndex:(unsigned int)arg3;
- (void)_setArtworkResponse:(id)arg1 error:(id)arg2 forIndex:(unsigned int)arg3;
- (void)_setItemResponse:(id)arg1 error:(id)arg2 forIndexes:(id)arg3 childrenAtIndexes:(id)arg4;
- (void)_reloadIndexesToLoad;
- (void)_loadItemArtworkAtIndexPath:(id)arg1;
- (void)_loadArtworkAtIndex:(unsigned int)arg1;
- (void)_loadEditorialAtIndex:(unsigned int)arg1;
- (void)_loadItemsAtIndexes:(id)arg1 childrenAtIndexes:(id)arg2;
- (void)_loadMore;
- (id)_identifierAtIndex:(unsigned int)arg1;
- (id)_itemAtIndex:(unsigned int)arg1;
- (id)_editorialAtIndex:(unsigned int)arg1;
- (id)itemArtworkAtIndex:(unsigned int)arg1 subindex:(unsigned int)arg2;
- (void)updateForVisibleIndexes:(id)arg1;
@property(readonly, nonatomic) int numberOfEntities;
- (int)entityTypeAtIndex:(int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (id)editorialArtworkAtIndex:(unsigned int)arg1;
- (id)itemAtIndex:(unsigned int)arg1;
- (id)editorialAtIndex:(unsigned int)arg1;
- (id)entityAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithSearchResultGroup:(id)arg1 clientContext:(id)arg2;

@end
