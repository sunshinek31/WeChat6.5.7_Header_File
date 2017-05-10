//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "INetworkStatusMgrExt.h"
#import "IWXTalkPresentExt.h"
#import "MessageObserverDelegate.h"

@class MMTimer, MainFrameCellDataManager, NSMutableArray, NSMutableDictionary, NSString, WAContactGetter;

@interface MainFrameLogicController : MMObject <MessageObserverDelegate, IGroupMgrExt, INetworkStatusMgrExt, IMMNewSessionMgrExt, IWXTalkPresentExt, IContactMgrExt>
{
    id <mainFrameLogicControllerDelegate> m_delegate;
    _Bool m_bPlayNewMsgDuringOneSync;
    vector_a9c0768e m_vecMesssageIdToListen;
    NSMutableArray *m_voiceSearcharrFilteredSession;
    NSMutableArray *m_arrFilteredSession;
    NSString *m_nsLastSearchText;
    MMTimer *m_updateTimeLabelTimer;
    _Bool m_bReadyToLoadData;
    NSMutableDictionary *m_dicPlayNewMsgNotify;
    NSString *m_nsUsrNameOnStatusBar;
    unsigned int m_shownCellMaxIndex;
    _Bool m_bIsPreCreatingCellData;
    long long m_lastPreCreateCellIndex;
    MainFrameCellDataManager *m_cellDataMgr;
    WAContactGetter *m_contactGetter;
}

@property(retain, nonatomic) NSString *m_nsLastSearchText; // @synthesize m_nsLastSearchText;
@property(readonly, nonatomic) _Bool m_bReadyToLoadData; // @synthesize m_bReadyToLoadData;
@property(nonatomic) __weak id <mainFrameLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)pluginsChanged:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnQuitGroup:(id)arg1;
- (void)popToMainFrameAnimated:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(int)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onNeedRebuild;
- (void)onNeedReload;
- (void)onSessionRebuildEnd;
- (void)onSessionRebuildBegin;
- (void)clearResource;
- (_Bool)canShowStatusBar;
- (id)getSessionInfoOnStatusBar;
- (unsigned int)getCurNetworkStatusType;
- (_Bool)isInitEd;
- (_Bool)isShowSetHead;
- (id)getSessionInfoByContact:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (void)setVoiceSearchFilteredSessionInfo:(id)arg1;
- (id)getVoiceSearchFilteredSessionInfo:(unsigned int)arg1;
- (int)getLastActionSessionIndex;
- (int)getFirstHasUnreadReadcodMsgSessionIndexFrom:(int)arg1;
- (int)getFirstHasUnreadNotReadcodMsgSessionIndexFrom:(int)arg1;
- (int)getFirstHasUnreadMsgSessionIndexFrom:(int)arg1;
- (id)getFilteredSessionInfo:(unsigned int)arg1;
- (unsigned long long)getFilteredSessionCount;
- (unsigned long long)getVoiceSearchFilteredSessionCount;
- (_Bool)isHasActiveUsr;
- (_Bool)isActiveUsr:(id)arg1;
- (void)setActiveSession:(id)arg1;
- (void)deleteSession:(unsigned long long)arg1;
- (unsigned int)getTotalUnreadCountInRedDot;
- (unsigned int)getTotalUnreadCount;
- (id)getSessionInfo:(unsigned long long)arg1;
- (unsigned int)getSessionCount;
- (void)setReadyToLoadData;
- (void)updateTimeForAllCellDatas;
- (void)removeCellData:(id)arg1;
- (id)getCellDataByUsrName:(id)arg1;
- (void)cleanupPreLoadCacheIfNeed:(unsigned int)arg1;
- (void)cleanupCellDataCache;
- (id)updateCellData:(id)arg1;
- (id)getCellDataForFilterSession:(unsigned int)arg1;
- (id)getCellData:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFromReg:(_Bool)arg1;
- (void)fixSelfHeadImage;
- (void)removeNotificationCenterObservers;
- (void)addNotificationCenterObservers;
- (void)unRegisterExt;
- (void)registerExt;
- (void)unListenMessageId;
- (void)initMessageIdToListen;
- (void)callUpdateSessionByName:(id)arg1;
- (void)callUpdateSession:(id)arg1;
- (void)callUpdateWXTalkStatusBar;
- (void)callUpdateStatusBar;
- (id)getUnreadSessionInfoList;
- (void)playNewMsgNotify:(id)arg1 NotifyFlag:(int)arg2;
- (_Bool)isPlayingOrRecording;
- (_Bool)isMsgUnread:(id)arg1 NotifyFlag:(int)arg2;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)stopUpdateTimeLabelTimer;
- (void)startUpdateTimeLabelTimer;
- (void)startupPreCreateForCellData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

