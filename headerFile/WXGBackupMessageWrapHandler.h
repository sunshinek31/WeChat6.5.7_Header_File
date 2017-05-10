//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BakChatMsgItem, NSMutableArray, WXGBackupEmoticonConverter;

@interface WXGBackupMessageWrapHandler : NSObject
{
    WXGBackupEmoticonConverter *m_emoticonConverter;
    NSMutableArray *m_mediaStructArray;
    BakChatMsgItem *m_bakChatItem;
}

+ (id)_getMediaIDForMessageWrap:(id)arg1 withIndex:(unsigned int)arg2;
+ (id)_getThumbMediaIDForMessageWrap:(id)arg1;
+ (id)_getMediaIDForMessageWrap:(id)arg1;
+ (id)_getHDMediaIDForMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)addMediaStructWithMediaID:(id)arg1 withMediaPath:(id)arg2 withMediaType:(int)arg3 withMessageWrap:(id)arg4;
- (void)p_innerGetMediaForAppMsg:(id)arg1;
- (void)p_innerGetMediaForAppMsgFav:(id)arg1;
- (void)p_getMediaForAppMsg:(id)arg1;
- (void)p_getMediaForEmoticon:(id)arg1;
- (void)p_getMediaForSight:(id)arg1;
- (void)p_getMediaForVideo:(id)arg1;
- (void)p_getMediaForVoice:(id)arg1;
- (void)p_getMediaForImg:(id)arg1;
- (void)p_getMediaInfoForMessageWrap:(id)arg1;
- (_Bool)p_messageWrapHasMedia:(id)arg1;
- (id)handleMessageWrap:(id)arg1;
- (id)init;

@end

