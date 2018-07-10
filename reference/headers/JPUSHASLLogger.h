//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHAbstractLogger.h"

#import "JPUSHLogger-Protocol.h"

@class NSObject, NSString;
@protocol JPUSHLogFormatter, OS_dispatch_queue;

@interface JPUSHASLLogger : JPUSHAbstractLogger <JPUSHLogger>
{
    struct __asl_object_s *_client;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <JPUSHLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end
