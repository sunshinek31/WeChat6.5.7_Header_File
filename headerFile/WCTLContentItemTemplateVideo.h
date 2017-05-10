//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCSNSNodeVideoViewDelegate.h"

@class ForwardMessageLogicController, NSString, WCMediaItem, WCSNSNodeVideoView;

@interface WCTLContentItemTemplateVideo : WCContentItemBaseView <WCSNSNodeVideoViewDelegate>
{
    WCSNSNodeVideoView *_videoView;
    ForwardMessageLogicController *m_forwardMsgLogic;
    WCMediaItem *m_oMediaItem;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
- (void).cxx_destruct;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)OnDownloadSuccessForFavoriteAdd;
- (id)getVisibleViewController;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onLongTouch;
- (void)OnSilencePlay;
- (void)onLongPressedWCSightFullScreenWindow:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

