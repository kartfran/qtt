//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class AdSplashModel, NSString;

@interface SplashModel : LCBaseModel
{
    long long _enable;
    NSString *_image;
    NSString *_url;
    long long _countdown;
    AdSplashModel *_adSplash;
}

@property(retain, nonatomic) AdSplashModel *adSplash; // @synthesize adSplash=_adSplash;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) long long enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (_Bool)isAdSplash;
- (_Bool)isSplashEnable;
- (id)initWithAttribute:(id)arg1;

@end
