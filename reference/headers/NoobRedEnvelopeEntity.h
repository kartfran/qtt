//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NoobRedEnvelopeOpenEntity, NoobRedEnvelopeUnopenEntity;

@interface NoobRedEnvelopeEntity : LCBaseModel
{
    int _open_redbag_animation;
    NoobRedEnvelopeUnopenEntity *_unopen;
    NoobRedEnvelopeOpenEntity *_open;
}

@property(retain, nonatomic) NoobRedEnvelopeOpenEntity *open; // @synthesize open=_open;
@property(retain, nonatomic) NoobRedEnvelopeUnopenEntity *unopen; // @synthesize unopen=_unopen;
@property(nonatomic) int open_redbag_animation; // @synthesize open_redbag_animation=_open_redbag_animation;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end

