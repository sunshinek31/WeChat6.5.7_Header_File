//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCPayGPLaunchViewControllerDelegate.h"
#import "WCPayGPMemberFillMoneyControllerDelegate.h"
#import "WCPayGPSelectMemberControllerDelegate.h"

@class NSString;

@interface WCPayGPLaunchControlLogic : WCPayControlLogic <WCPayGPLaunchViewControllerDelegate, WCPayGPSelectMemberControllerDelegate, PBMessageObserverDelegate, WCBaseControlLogicDeleagte, WCPayGPMemberFillMoneyControllerDelegate>
{
    _Bool _bEnableReportLocation;
    unsigned long long _launchTimeStamp;
}

@property(nonatomic) unsigned long long launchTimeStamp; // @synthesize launchTimeStamp=_launchTimeStamp;
@property(nonatomic) _Bool bEnableReportLocation; // @synthesize bEnableReportLocation=_bEnableReportLocation;
- (id)genWCRealnameInfoFromRealnameItem:(id)arg1;
- (void)dismissAndStopLogic;
- (void)saveGroupPaySvrConfig:(id)arg1;
- (void)addAAC2CMsgWithMsgContent:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetActivityAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCommonAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetGroupPaySvrConfigResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)sendGroupPaySvrConfigRequest;
- (void)onWCPayGPMemberFillMoneyControllerBackWithSelectContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPMemberFillMoneyControllerCancel;
- (void)onWCPayGPSelectViewControllerFinish:(id)arg1 isSelectAll:(_Bool)arg2;
- (void)onWCPayGPSelectViewControllerCancel;
- (void)onWCPayGPLaunchVCClickOrderHistoryEntry;
- (void)launchActivityAARequestWithActivityTheme:(id)arg1 totalAmount:(unsigned long long)arg2 payerItems:(id)arg3;
- (void)launchCommonAARequestWithMemberCount:(unsigned int)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(id)arg3 payerUsernameArray:(id)arg4;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyMode;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(id)arg1 withIgnoreContact:(id)arg2 withSelectMemberSource:(unsigned long long)arg3;
- (void)onWCPayGPLaunchViewControllerCancel;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

