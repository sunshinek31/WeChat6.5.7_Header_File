//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"

@class NSString, NSURL;

@interface JumpToBizWebviewHandler : MMObject <IPreEnterWechatLogicExt>
{
    NSString *_appID;
    NSString *_bundleID;
    NSURL *_infoUrl;
}

- (void).cxx_destruct;
- (void)cancelJumpToBizWebview;
- (void)createWechatJumpToBizWebview;
- (void)onPreEnterWechatDone;
- (void)dealloc;
- (void)startJumpToBizWebview:(id)arg1 BundleID:(id)arg2 Info:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

