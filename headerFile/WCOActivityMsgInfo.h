//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCOActivityMsgInfo : NSObject <PBCoding>
{
    int type;
    NSString *title;
    NSString *desc;
    NSString *imgUrl;
    NSString *startBtnTxt;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *startBtnTxt; // @synthesize startBtnTxt;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int type; // @synthesize type;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

