//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface ShareView : UIView
{
    id <ShareViewDelegate><NSObject> _delegate;
    UILabel *_shareLabel;
}

@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(nonatomic) __weak id <ShareViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickShareLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

