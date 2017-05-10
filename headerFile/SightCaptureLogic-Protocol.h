//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<SightPreviewView>;

@protocol SightCaptureLogic <NSObject>
- (void)stopQRCodeWatcher;
- (void)startQRCodeWatcher;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (_Bool)isSupportSwitchCamera;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (_Bool)isLightBoostOn;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)maxZoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)setZoomState:(int)arg1;
- (int)zoomState;
- (_Bool)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopCameraCapture;
- (void)capturePreviewImage:(UIView<SightPreviewView> *)arg1 withBlock:(void (^)(UIImage *))arg2;
- (void)takePicturWithCompletion:(void (^)(UIImage *))arg1;
- (void)unregistPreviewView:(id <SightPreviewView>)arg1;
- (UIView<SightPreviewView> *)genPreviewView:(struct CGRect)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecord:(unsigned int)arg1;
- (void)stopRecord:(unsigned int)arg1;
- (void)realStartRecord;
- (unsigned int)prepareHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (unsigned int)startHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6;
- (void)pauseCameraImmediately;
- (_Bool)pauseCamera;
- (void)startDeviceAudio;
- (void)startCameraWithAudio:(_Bool)arg1;
- (_Bool)isCameraOn;
- (void)onPictureRetake;
- (void)setDelegate:(id <SightCaptureDelegate>)arg1;
@end

