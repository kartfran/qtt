//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface read_conf_Model : LCBaseModel
{
    float _single_limit;
    float _read_rate;
    float _read_random;
    float _onehour_reward;
    NSString *_coins_h5_uri;
}

@property(nonatomic) float onehour_reward; // @synthesize onehour_reward=_onehour_reward;
@property(retain, nonatomic) NSString *coins_h5_uri; // @synthesize coins_h5_uri=_coins_h5_uri;
@property(nonatomic) float read_random; // @synthesize read_random=_read_random;
@property(nonatomic) float read_rate; // @synthesize read_rate=_read_rate;
@property(nonatomic) float single_limit; // @synthesize single_limit=_single_limit;
- (void).cxx_destruct;
- (void)updateDateWithConfPieChartModel:(id)arg1;
- (id)initWithAttribute:(id)arg1;

@end
