//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayF2FJSAPIAuthCgiDelegate.h"

@class JSEvent, NSString, WCPayF2FJSAPIAuthenCgi;

@interface WCPayF2FJSApiAuthenticationControlLogic : WCPayControlLogic <WCPayF2FJSAPIAuthCgiDelegate>
{
    JSEvent *_jsEvent;
    WCPayF2FJSAPIAuthenCgi *_jsapiAuthenCgi;
}

@property(retain, nonatomic) WCPayF2FJSAPIAuthenCgi *jsapiAuthenCgi; // @synthesize jsapiAuthenCgi=_jsapiAuthenCgi;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void).cxx_destruct;
- (void)onGetWCPayF2FJSAPIAuthenCgiResp:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

