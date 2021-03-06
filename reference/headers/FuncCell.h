//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKTableViewCell.h"

#import "LCTableViewCellConfigure-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface FuncCell : QKTableViewCell <LCTableViewCellConfigure>
{
    UILabel *_lTitle;
    UILabel *_lValue;
    UIImageView *_tipBg;
    UILabel *_tipTitle;
}

@property(retain, nonatomic) UILabel *tipTitle; // @synthesize tipTitle=_tipTitle;
@property(retain, nonatomic) UIImageView *tipBg; // @synthesize tipBg=_tipBg;
@property(retain, nonatomic) UILabel *lValue; // @synthesize lValue=_lValue;
@property(retain, nonatomic) UILabel *lTitle; // @synthesize lTitle=_lTitle;
- (void).cxx_destruct;
- (void)update:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureCellWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

