//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TableViewEmptyViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LCBaseTableView, NSMutableArray, NSString, UIView;
@protocol LCTableViewConfigure;

@interface LCTableViewManager : NSObject <UITableViewDelegate, UITableViewDataSource, TableViewEmptyViewDelegate, UIScrollViewDelegate>
{
    _Bool _isNeedFresh;
    _Bool _isNeedLoadMore;
    LCBaseTableView *_tableView;
    id <LCTableViewConfigure> _tableViewConfigure;
    long long _cellStyle;
    NSMutableArray *_dataSource;
    UIView *_defaultView;
    long long _source;
}

+ (id)manager;
@property(nonatomic) _Bool isNeedLoadMore; // @synthesize isNeedLoadMore=_isNeedLoadMore;
@property(nonatomic) _Bool isNeedFresh; // @synthesize isNeedFresh=_isNeedFresh;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) __weak id <LCTableViewConfigure> tableViewConfigure; // @synthesize tableViewConfigure=_tableViewConfigure;
@property(retain, nonatomic) LCBaseTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)_videoListDefaultImageName;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableViewEmptyScreenTouchAction:(long long)arg1;
- (void)tableViewEmptyButtonTouchAction:(long long)arg1;
- (void)_refresh;
- (void)_loadMore;
- (void)_initOriginal;
- (id)getDataSource;
- (void)hiddenEmptyView;
- (void)showEmptyView;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadTableView;
- (void)initTableViewPullFresh:(_Bool)arg1 loadMore:(_Bool)arg2 fromSouce:(long long)arg3 emptyType:(long long)arg4;
- (id)initWithTableViewStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

