//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSArray;

@interface BoxLocationModel : LCBaseModel
{
    NSArray *_input_invitation_code;
    NSArray *_normal_card;
    NSArray *_content_push;
    NSArray *_recall_card;
}

@property(retain, nonatomic) NSArray *recall_card; // @synthesize recall_card=_recall_card;
@property(retain, nonatomic) NSArray *content_push; // @synthesize content_push=_content_push;
@property(retain, nonatomic) NSArray *normal_card; // @synthesize normal_card=_normal_card;
@property(retain, nonatomic) NSArray *input_invitation_code; // @synthesize input_invitation_code=_input_invitation_code;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end
