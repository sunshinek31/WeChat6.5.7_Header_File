//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString, TranslateLinkResp_ShareMsgInfo;

@interface TranslateLinkResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *deeplink; // @dynamic deeplink;
@property(retain, nonatomic) NSString *errWording; // @dynamic errWording;
@property(nonatomic) int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(retain, nonatomic) TranslateLinkResp_ShareMsgInfo *shareMsgInfo; // @dynamic shareMsgInfo;

@end
