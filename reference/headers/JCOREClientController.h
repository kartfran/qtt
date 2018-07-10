//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JPUSHAddressConfigController, JPUSHMessageCenter, JPUSHNetworkController, JPUSHPageFlowSession, JPUSHPushConfigController, JPUSHThread, JPUSHThreadController, JPUSHUserDefaultsController, NSMutableArray, NSNotificationCenter, NSString;

@interface JCOREClientController : NSObject
{
    double _becomeActiveTime;
    _Bool _isSetup;
    NSMutableArray *_apnsDataList;
    NSString *_jpushVersion;
    NSString *_janalyticsVersion;
    NSString *_jshareVersion;
    NSString *_jmessageVersion;
    _Bool _deviceTokenUpdated;
    _Bool _isReportCrash;
    _Bool _isActive;
    int _apsEvironment;
    JPUSHThread *_clientThread;
    NSString *_systemVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_modelName;
    NSString *_hostIpvSixPrefix;
    NSMutableArray *_businessArray;
    JPUSHPushConfigController *_pushConfig;
    JPUSHAddressConfigController *_addressConfig;
    JPUSHUserDefaultsController *_userDefaults;
    JPUSHMessageCenter *_messageCenter;
    JPUSHPageFlowSession *_pageFlowController;
    NSNotificationCenter *_clientNotificationCenter;
    JPUSHNetworkController *_networkService;
    JPUSHThreadController *_JPushThreadManager;
    NSMutableArray *_registerIDHandlers;
    NSMutableArray *_messageBlockList;
}

+ (void)client:(id)arg1 performSEL:(SEL)arg2 and:(id)arg3;
+ (id)JMessageVersion;
+ (id)JShareVersion;
+ (id)JAnalyticsVersion;
+ (id)JPushVersion;
+ (_Bool)messageExist;
+ (_Bool)shareExist;
+ (_Bool)analyticsExist;
+ (_Bool)pushExist;
+ (_Bool)jpushOnly;
+ (_Bool)hasMultiBusiness;
+ (_Bool)needConnect;
+ (void)changeLoggerLevel:(unsigned long long)arg1;
+ (void)setupJPushLogger;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedClient;
@property(readonly, nonatomic) NSMutableArray *messageBlockList; // @synthesize messageBlockList=_messageBlockList;
@property(retain, nonatomic) NSMutableArray *registerIDHandlers; // @synthesize registerIDHandlers=_registerIDHandlers;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) JPUSHThreadController *JPushThreadManager; // @synthesize JPushThreadManager=_JPushThreadManager;
@property(readonly, retain, nonatomic) JPUSHNetworkController *networkService; // @synthesize networkService=_networkService;
@property(readonly, retain, nonatomic) NSNotificationCenter *clientNotificationCenter; // @synthesize clientNotificationCenter=_clientNotificationCenter;
@property(readonly, retain, nonatomic) JPUSHPageFlowSession *pageFlowController; // @synthesize pageFlowController=_pageFlowController;
@property(readonly, nonatomic) _Bool isReportCrash; // @synthesize isReportCrash=_isReportCrash;
@property(nonatomic) _Bool deviceTokenUpdated; // @synthesize deviceTokenUpdated=_deviceTokenUpdated;
@property(readonly, retain, nonatomic) JPUSHMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(readonly, nonatomic) int apsEvironment; // @synthesize apsEvironment=_apsEvironment;
@property(readonly, retain, nonatomic) JPUSHUserDefaultsController *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, retain, nonatomic) JPUSHAddressConfigController *addressConfig; // @synthesize addressConfig=_addressConfig;
@property(retain, nonatomic) JPUSHPushConfigController *pushConfig; // @synthesize pushConfig=_pushConfig;
@property(retain, nonatomic) NSMutableArray *businessArray; // @synthesize businessArray=_businessArray;
@property(retain, nonatomic) NSString *hostIpvSixPrefix; // @synthesize hostIpvSixPrefix=_hostIpvSixPrefix;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) JPUSHThread *clientThread; // @synthesize clientThread=_clientThread;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminateNotification;
- (void)unobserveNotifications;
- (void)observeNotifications;
- (void)closeJPUSHThread;
- (void)synchronizeData;
- (void)didRegister:(id)arg1;
- (void)didLogin:(id)arg1;
- (void)closeSocket;
- (id)readRegistrationID;
- (void)addMessageBlock:(CDUnknownBlockType)arg1;
- (void)setLatitude:(id)arg1;
- (void)setViewLogSecond:(id)arg1;
- (void)setViewStop:(id)arg1;
- (void)setViewStart:(id)arg1;
- (void)onEnterBackground;
- (void)onDidBecomeActive;
- (id)jcoreRegisterSDKs;
- (void)sendSDKVersionRequest:(long long)arg1;
- (void)tryUploadSDKVersion;
- (void)tryUploadIDFA;
- (_Bool)needUploadSDKVersion;
- (void)reportInactive:(id)arg1;
- (void)reportLaunch:(id)arg1;
- (void)close;
- (id)getSDKWithClassName:(id)arg1;
- (void)setup;
- (void)loadApsEnvironment;
- (_Bool)loadConnectAddress;
- (void)removeCrashReport;
- (void)InitCrashReport;
- (void)setCrashLogON;
- (void)dealloc;
- (void)initDeviceInfo;
- (id)init;

@end
