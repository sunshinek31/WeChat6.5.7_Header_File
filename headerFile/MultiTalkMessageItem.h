//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface MultiTalkMessageItem : MMObject <WCDBCoding>
{
    unsigned int localID;
    unsigned int createTime;
    unsigned int messageType;
    unsigned int hasGenWCMessage;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
    NSString *messageContent;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int hasGenWCMessage; // @synthesize hasGenWCMessage;
@property(retain, nonatomic) NSString *messageContent; // @synthesize messageContent;
@property(nonatomic) unsigned int messageType; // @synthesize messageType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isMessageItemValid;
- (void)dealloc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_c6db074e *)db_hasGenWCMessage;
- (const WCDBCondition_22fabacd *)db_messageContent;
- (const WCDBCondition_c6db074e *)db_messageType;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_22fabacd *)db_createUserName;
- (const WCDBCondition_22fabacd *)db_clientGroupID;
- (const WCDBCondition_22fabacd *)db_groupID;
- (const WCDBCondition_c6db074e *)db_localID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

