//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FPSAssistant, NSArray, NSDate, NSString, NSThread, PageFill;

@interface Monitor : NSObject
{
    _Bool _excuting;
    _Bool _bRunning;
    PageFill *_currentPageFill;
    double _interval;
    double _fault;
    NSThread *_monitorThread;
    struct __CFRunLoopObserver *_observer;
    struct __CFRunLoopTimer *_timer;
    NSDate *_startDate;
    FPSAssistant *_fpsAssistant;
    NSString *_FPSString;
    NSString *_sendString;
    NSString *_downString;
    NSArray *_actiPathArray;
    double _delayTime;
    long long _stuckCount;
}

+ (void)monitorThreadEntryPoint;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)instance;
@property(nonatomic) long long stuckCount; // @synthesize stuckCount=_stuckCount;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) NSArray *actiPathArray; // @synthesize actiPathArray=_actiPathArray;
@property(copy, nonatomic) NSString *downString; // @synthesize downString=_downString;
@property(copy, nonatomic) NSString *sendString; // @synthesize sendString=_sendString;
@property(copy, nonatomic) NSString *FPSString; // @synthesize FPSString=_FPSString;
@property(copy, nonatomic) FPSAssistant *fpsAssistant; // @synthesize fpsAssistant=_fpsAssistant;
@property(nonatomic) _Bool bRunning; // @synthesize bRunning=_bRunning;
@property(nonatomic) _Bool excuting; // @synthesize excuting=_excuting;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) struct __CFRunLoopTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct __CFRunLoopObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
@property(nonatomic) double fault; // @synthesize fault=_fault;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain) PageFill *currentPageFill; // @synthesize currentPageFill=_currentPageFill;
- (void).cxx_destruct;
- (id)getCurrentTimes;
- (id)sharedDateFormatter;
- (id)archiveTextInformationTitle:(id)arg1 withBasic:(id)arg2;
- (void)printDataInformationWithType:(id)arg1 logString:(id)arg2 stuckCount:(unsigned long long)arg3 delayTime:(double)arg4;
- (id)getIdFromCallStackSymbol:(id)arg1;
- (void)addMonitorObject:(id)arg1 WithModel:(id)arg2;
- (void)addFillTask:(id)arg1;
- (void)saveLocalFileWith:(id)arg1 withStackID:(id)arg2;
- (_Bool)isWhetherOpen;
- (void)removeTimer;
- (void)stop;
- (void)start;
- (void)addTimerToMonitorThread;
- (void)startWithInterval:(double)arg1 fault:(double)arg2;
- (void)propertyFPSInit;

@end

