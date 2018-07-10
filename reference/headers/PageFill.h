//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Steps.h"

@class NSMutableArray;

@interface PageFill : Steps
{
    int _stuck;
    double _appear;
    double _disappear;
    NSMutableArray *_fps;
    NSMutableArray *_mem;
    NSMutableArray *_cpu;
}

+ (id)startWithUnique:(id)arg1;
@property(retain, nonatomic) NSMutableArray *cpu; // @synthesize cpu=_cpu;
@property(retain, nonatomic) NSMutableArray *mem; // @synthesize mem=_mem;
@property(retain, nonatomic) NSMutableArray *fps; // @synthesize fps=_fps;
@property(nonatomic) int stuck; // @synthesize stuck=_stuck;
@property(nonatomic) double disappear; // @synthesize disappear=_disappear;
@property(nonatomic) double appear; // @synthesize appear=_appear;
- (void).cxx_destruct;
- (id)output2;
- (id)output;
- (void)addCPU:(id)arg1;
- (void)addRAM:(id)arg1;
- (void)addFPS:(id)arg1;
- (void)doDisappear;
- (void)doAppear;
- (void)doUnique:(id)arg1;
- (id)init;

@end
