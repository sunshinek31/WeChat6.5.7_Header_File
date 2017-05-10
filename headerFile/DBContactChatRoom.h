//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class DBContactChatRoomDetail, NSString;

@interface DBContactChatRoom : NSObject <PBCoding>
{
    unsigned int chatStatus;
    unsigned int chatRoomMaxCount;
    unsigned int chatRoomVersion;
    unsigned int chatRoomAccessType;
    NSString *chatRoomMember;
    NSString *owner;
    NSString *chatRoomData;
    DBContactChatRoomDetail *chatRoomDetail;
}

+ (void)initialize;
@property(nonatomic) unsigned int chatRoomAccessType; // @synthesize chatRoomAccessType;
@property(retain, nonatomic) DBContactChatRoomDetail *chatRoomDetail; // @synthesize chatRoomDetail;
@property(retain, nonatomic) NSString *chatRoomData; // @synthesize chatRoomData;
@property(nonatomic) unsigned int chatRoomVersion; // @synthesize chatRoomVersion;
@property(nonatomic) unsigned int chatRoomMaxCount; // @synthesize chatRoomMaxCount;
@property(nonatomic) unsigned int chatStatus; // @synthesize chatStatus;
@property(retain, nonatomic) NSString *owner; // @synthesize owner;
@property(retain, nonatomic) NSString *chatRoomMember; // @synthesize chatRoomMember;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

