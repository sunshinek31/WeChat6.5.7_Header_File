//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ProtobufEventHandler : NSObject
{
}

- (_Bool)OnProtocolEncryptPack:(id)arg1 OutBuf:(struct AutoBuffer *)arg2 uin:(unsigned int)arg3;
- (_Bool)OnProtocolHasCustomEncryptPack:(id)arg1;
- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;

@end

