//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SplashViewDelegate <NSObject>
- (void)splashViewClickedWithDpUrl:(NSString *)arg1 dpCurl:(NSString *)arg2 cUrl:(NSString *)arg3 needTrace:(_Bool)arg4;
- (void)splashViewClickedWithurl:(NSString *)arg1;
@end
