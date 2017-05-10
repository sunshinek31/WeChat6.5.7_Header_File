//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "VoicePrintHandlerDelegate.h"
#import "WCAccountVoice2ndVerifyViewControllerDelegate.h"

@class NSString, VoicePrintHandler;

@interface WCAccountVoice2ndVerifyControlLogic : WCAccountBaseControlLogic <WCAccountVoice2ndVerifyViewControllerDelegate, VoicePrintHandlerDelegate>
{
    _Bool _m_bFromManualAuth;
    VoicePrintHandler *_m_VPHandler;
    id <WCAccountVoice2ndVerifyControlLogicDelegate> _m_delegate;
}

@property(nonatomic) _Bool m_bFromManualAuth; // @synthesize m_bFromManualAuth=_m_bFromManualAuth;
@property(nonatomic) __weak id <WCAccountVoice2ndVerifyControlLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) VoicePrintHandler *m_VPHandler; // @synthesize m_VPHandler=_m_VPHandler;
- (void).cxx_destruct;
- (void)OnClickCanNotUnLockBtn;
- (void)OnVerifySuccessful;
- (void)onTapOtherAuthenticationBtn;
- (void)onTapVoiceVerifyBtn;
- (void)onVoice2ndVerifyBack;
- (void)startLogicFromManualAuth:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

