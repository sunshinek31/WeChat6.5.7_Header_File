//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCPayFacingReceiveFixedAmountViewControllerDelegate.h"
#import "WCPayFacingReceiveQRCodeViewControllerDelegate.h"

@class NSString;

@interface WCPayFacingReceiveContorlLogic : WCPayControlLogic <UIViewControllerTransitioningDelegate, PBMessageObserverDelegate, WCPayFacingReceiveQRCodeViewControllerDelegate, WCPayFacingReceiveFixedAmountViewControllerDelegate>
{
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
    NSString *_curF2FPushSoundName;
}

@property(retain, nonatomic) NSString *curF2FPushSoundName; // @synthesize curF2FPushSoundName=_curF2FPushSoundName;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)OnGetFixedAmountQRCode:(id)arg1 Error:(id)arg2;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(_Bool)arg1;
- (void)VerifyUserInfo;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveWitchBalance;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)playVibration;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stopLogic;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

