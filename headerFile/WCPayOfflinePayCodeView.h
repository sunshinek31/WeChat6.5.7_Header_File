//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCCircularProgressViewDelegate.h"

@class MMUILabel, NSString, QBarCodeView, UIView, WCCircularProgressView;

@interface WCPayOfflinePayCodeView : MMUIView <WCCircularProgressViewDelegate>
{
    double _secondsToRefresh;
    _Bool _inAnimation;
    _Bool _enable;
    int _payCodeStyle;
    NSString *_barCodeString;
    NSString *_qrCodeString;
    id <WCPayOfflinePayCodeViewDelegate> _delegate;
    QBarCodeView *_imageBarView;
    MMUILabel *_barCodeLabel;
    UIView *_barCodeBackGroundView;
    MMUILabel *_tipsLabel;
    MMUIView *_noticeContentView;
    QBarCodeView *_imageQRView;
    UIView *_qRCodeBackGroundView;
    WCCircularProgressView *_progressView;
    UIView *_maskView;
}

+ (double)height;
+ (double)barCodeWidth;
+ (double)qrCodeWidth;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WCCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *qRCodeBackGroundView; // @synthesize qRCodeBackGroundView=_qRCodeBackGroundView;
@property(retain, nonatomic) QBarCodeView *imageQRView; // @synthesize imageQRView=_imageQRView;
@property(retain, nonatomic) MMUIView *noticeContentView; // @synthesize noticeContentView=_noticeContentView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *barCodeBackGroundView; // @synthesize barCodeBackGroundView=_barCodeBackGroundView;
@property(retain, nonatomic) MMUILabel *barCodeLabel; // @synthesize barCodeLabel=_barCodeLabel;
@property(retain, nonatomic) QBarCodeView *imageBarView; // @synthesize imageBarView=_imageBarView;
@property(nonatomic) __weak id <WCPayOfflinePayCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *qrCodeString; // @synthesize qrCodeString=_qrCodeString;
@property(copy, nonatomic) NSString *barCodeString; // @synthesize barCodeString=_barCodeString;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) int payCodeStyle; // @synthesize payCodeStyle=_payCodeStyle;
- (void).cxx_destruct;
- (void)circularProgressViewDidTapped:(id)arg1;
- (void)barcodeAnimationEnd;
- (void)barcodeAnimationBegin;
- (void)exitFullScreenWithView:(id)arg1 animation:(_Bool)arg2;
- (void)codeViewTapped:(id)arg1;
- (void)exitFullScreenIfNeedAnimation:(_Bool)arg1;
- (void)updateCodeImage;
- (void)updateCodeImageWithPayCodeStyle:(int)arg1;
- (_Bool)inFullscreen;
- (void)triggerSuccessRefreshAnimation;
- (void)updateAutoRefreshCount;
- (void)cancelAutoRefreshCounting;
- (void)startAutoRefreshCountingAfterSeconds:(unsigned long long)arg1;
- (void)startAutoRefreshCounting;
- (void)resetViews;
- (void)dealloc;
- (void)setAlpha:(double)arg1;
- (void)adjustViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

