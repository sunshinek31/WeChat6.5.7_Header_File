//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgRevokeExt.h"
#import "SessionSelectControllerDelegate.h"
#import "SharePreConfirmViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMLoadingView, NSArray, NSDictionary, NSMutableArray, NSString, SessionSelectController, SharePreConfirmView, UIActivityIndicatorView;

@interface ForwardMessageLogicController : MMObject <SharePreConfirmViewDelegate, SessionSelectControllerDelegate, IMsgRevokeExt, UIAlertViewDelegate>
{
    id <ForwardMessageLogicDelegate> m_delegate;
    NSMutableArray *m_msgList;
    NSArray *m_msgRecordOriginList;
    NSArray *m_toContacts;
    SharePreConfirmView *m_confirmView;
    MMLoadingView *m_loadingView;
    SessionSelectController *m_sessionSelectController;
    UIActivityIndicatorView *_activityView;
    _Bool _bMutliContact;
    _Bool _bShowSendSuccessView;
    _Bool _bPresent;
    _Bool _bAnimation;
    _Bool _m_bFilterMyContact;
    _Bool _onlyChatRoom;
    _Bool _syncShareInfo;
    int _m_commonSearchScene;
    unsigned int _m_uiAppMsgScene;
    unsigned int _m_uiIDKeyScene;
    unsigned int _m_forwardType;
    NSString *_confirmPlaceholder;
    NSString *_title;
    NSString *_fromContactUserName;
    NSString *_fromAppName;
    NSString *_stayAtString;
    NSString *_selectTitle;
    NSDictionary *_shareInfo;
    NSArray *_toContacts;
}

@property(retain, nonatomic) NSArray *toContacts; // @synthesize toContacts=_toContacts;
@property(retain, nonatomic) NSDictionary *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) _Bool syncShareInfo; // @synthesize syncShareInfo=_syncShareInfo;
@property(nonatomic) _Bool onlyChatRoom; // @synthesize onlyChatRoom=_onlyChatRoom;
@property(retain, nonatomic) NSString *selectTitle; // @synthesize selectTitle=_selectTitle;
@property(retain, nonatomic) NSString *stayAtString; // @synthesize stayAtString=_stayAtString;
@property(retain, nonatomic) NSString *fromAppName; // @synthesize fromAppName=_fromAppName;
@property(nonatomic) unsigned int m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(retain, nonatomic) NSString *fromContactUserName; // @synthesize fromContactUserName=_fromContactUserName;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact=_m_bFilterMyContact;
@property(nonatomic) unsigned int m_uiIDKeyScene; // @synthesize m_uiIDKeyScene=_m_uiIDKeyScene;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *confirmPlaceholder; // @synthesize confirmPlaceholder=_confirmPlaceholder;
@property(nonatomic) _Bool bAnimation; // @synthesize bAnimation=_bAnimation;
@property(nonatomic) _Bool bPresent; // @synthesize bPresent=_bPresent;
@property(nonatomic) _Bool bShowSendSuccessView; // @synthesize bShowSendSuccessView=_bShowSendSuccessView;
@property(nonatomic) unsigned int m_uiAppMsgScene; // @synthesize m_uiAppMsgScene=_m_uiAppMsgScene;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene=_m_commonSearchScene;
@property(nonatomic) _Bool bMutliContact; // @synthesize bMutliContact=_bMutliContact;
@property(nonatomic) __weak id <ForwardMessageLogicDelegate> delegate; // @synthesize delegate=m_delegate;
- (void).cxx_destruct;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (_Bool)checkIfLargeFileMsgSendToLargeChatRoom:(id)arg1;
- (_Bool)showLargeFileMsgCannotSendToLargeChatRoomAlertIfNeed:(id)arg1 message:(id)arg2;
- (void)ForwardMsg:(id)arg1 ToContact:(id)arg2;
- (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2;
- (void)reportImageMsgInfoWithMsgWrap:(id)arg1;
- (void)reportUrlMsgInfoWithMsgWrap:(id)arg1 actionRet:(_Bool)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)showConfirmView:(id)arg1;
- (void)dismissViewController;
- (void)OnSharePreConfirmViewDidHide:(id)arg1;
- (void)OnSharePreConfirmViewStayAtWeChat:(id)arg1;
- (void)OnSharePreConfirmViewBackToApp:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)showTips;
- (void)showContactSelectViewController;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3;
- (void)forwardMsgList:(id)arg1 toContacts:(id)arg2;
- (void)forwardMsgList:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)forwardRecordMessage:(id)arg1 msgList:(id)arg2 toContacts:(id)arg3;
- (void)reportViewControllerIDKey;
- (void)reportConfirmIDKey;
- (id)getMessages;
- (id)getToContacts;
- (void)clearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

