//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BaiduMobAdDiskLRUCache : NSObject
{
    struct dispatch_queue_s *_diskIOQueue;
    NSString *_diskCachePath;
    unsigned long long _numBytesStoredForSizeCheck;
}

+ (id)sharedDiskCache;
@property unsigned long long numBytesStoredForSizeCheck; // @synthesize numBytesStoredForSizeCheck=_numBytesStoredForSizeCheck;
@property(copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(nonatomic) struct dispatch_queue_s *diskIOQueue; // @synthesize diskIOQueue=_diskIOQueue;
- (void).cxx_destruct;
- (id)cacheFilePathForKey:(id)arg1;
- (unsigned long long)sizeOfCacheFilesInArray:(id)arg1;
- (id)cacheFilesSortedByModDate;
- (id)expiredCachedFilesInArray:(id)arg1;
- (unsigned long long)getCacheSoftMaxSize;
- (void)ensureCacheSizeLimit;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (id)retrieveDataForKey:(id)arg1;
- (_Bool)cachedDataExistsForKey:(id)arg1;
- (void)removeAllCachedFiles;
- (void)dealloc;
- (id)init;

@end
