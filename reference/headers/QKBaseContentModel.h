//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSDictionary, NSString;

@interface QKBaseContentModel : LCBaseModel
{
    _Bool _isFromSearch;
    _Bool _isFromCollect;
    _Bool _isFromTopList;
    _Bool _is_first_show;
    int _src;
    NSString *_keyword;
    NSDictionary *_object;
    double _rowHeight;
    long long _show_place;
    long long _direction;
    long long _refreshNumber;
    long long _refreshPostion;
    NSString *_fromPage;
}

@property(copy, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
@property(nonatomic) _Bool is_first_show; // @synthesize is_first_show=_is_first_show;
@property(nonatomic) long long refreshPostion; // @synthesize refreshPostion=_refreshPostion;
@property(nonatomic) long long refreshNumber; // @synthesize refreshNumber=_refreshNumber;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool isFromTopList; // @synthesize isFromTopList=_isFromTopList;
@property(nonatomic) _Bool isFromCollect; // @synthesize isFromCollect=_isFromCollect;
@property(nonatomic) _Bool isFromSearch; // @synthesize isFromSearch=_isFromSearch;
@property(nonatomic) int src; // @synthesize src=_src;
@property(nonatomic) long long show_place; // @synthesize show_place=_show_place;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSDictionary *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end
