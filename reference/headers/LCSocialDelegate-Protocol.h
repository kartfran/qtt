//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LCSocial, NSDictionary, QKContentModel, QKShareModel, UIViewController;

@protocol LCSocialDelegate <NSObject>

@optional
- (void)social:(LCSocial *)arg1 systemShareFail:(QKShareModel *)arg2 platform:(long long)arg3;
- (void)social:(LCSocial *)arg1 withReportModel:(QKContentModel *)arg2;
- (void)social:(LCSocial *)arg1 withSLComposeController:(UIViewController *)arg2;
- (void)social:(LCSocial *)arg1 withActivityController:(UIViewController *)arg2;
- (void)social:(LCSocial *)arg1 withParam:(NSDictionary *)arg2 handler:(void (^)(id))arg3;
- (void)social:(LCSocial *)arg1 withWXParam:(NSDictionary *)arg2;
- (void)social:(LCSocial *)arg1 withContentParam:(NSDictionary *)arg2;
@end
