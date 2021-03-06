/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewPrefetchingContext : NSObject {
    NSObject<OS_dispatch_queue> * _dataAccessQueue;
    NSMutableOrderedSet * _items;
    NSMutableDictionary * _itemsDict;
    NSArray * _remainingIndexPaths;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataAccessQueue;
@property (nonatomic, retain) NSMutableOrderedSet *items;
@property (nonatomic, retain) NSMutableDictionary *itemsDict;
@property (nonatomic, retain) NSArray *remainingIndexPaths;

+ (id)prefetchingContextWithItems:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidateRemainingIndexPaths;
- (id)_items;
- (id)dataAccessQueue;
- (bool)hasRemainingItems;
- (id)initWithPrefetchItems:(id)arg1;
- (id)items;
- (id)itemsDict;
- (id)peekNextItem;
- (id)popNextItem;
- (void)prefetchCompleteForItemAtIndexPath:(id)arg1;
- (id)remainingIndexPaths;
- (void)setDataAccessQueue:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsDict:(id)arg1;
- (void)setRemainingIndexPaths:(id)arg1;

@end
