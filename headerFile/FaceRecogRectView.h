//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, UIView;

@interface FaceRecogRectView : MMUIView
{
    UIImageView *_greenFrameView;
    UIImageView *_netView;
    UIImageView *_greenScanView;
    UIView *_topLeftView;
    UIView *_rightTopView;
    UIView *_leftBottomView;
    UIView *_bottomRightView;
    _Bool _isDoingAnimations;
}

@property(nonatomic) _Bool isDoingAnimations; // @synthesize isDoingAnimations=_isDoingAnimations;
- (void).cxx_destruct;
- (void)playCatchedFaceAnimation:(CDUnknownBlockType)arg1;
- (void)playCatchFaceAnimation;
- (void)resetView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

