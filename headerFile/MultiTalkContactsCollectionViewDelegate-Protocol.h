//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCVideoRender, WXCGroupMember;

@protocol MultiTalkContactsCollectionViewDelegate <NSObject>
- (NSString *)onMultiTalkContactsCollectionViewMemberThatInviteMeBeforeTalking;
- (unsigned long long)onMultiTalkContactsCollectionViewMemberCountBeforeTalking;
- (NSString *)onMultiTalkContactsCollectionViewMemberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (void)onMultiTalkContactsCollectionViewAnimateToOnePerson;
- (void)onMultiTalkContactsCollectionViewTapToPreviewWithUserName:(NSString *)arg1;
- (void)onMultiTalkContactsCollectionViewTapToFlipCamera;
- (WXCGroupMember *)onMultiTalkContactsCollectionViewMemberAtIndex:(unsigned long long)arg1;
- (unsigned long long)onMultiTalkContactsCollectionViewTotalMemberCount;
- (WCVideoRender *)onMultiTalkContactsCollectionViewRequestRenderForUsername:(NSString *)arg1;
- (_Bool)onMultiTalkContactsCollectionViewIsVideoUserName:(NSString *)arg1;
- (void)onMultiTalkContactsCollectionViewTapToInviteUser:(NSString *)arg1;
@end

