//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMHeadImageView, NSString, UIImageView, UITapGestureRecognizer;

@interface TrackRoomHeadListItem : MMUIView
{
    _Bool _selected;
    id <TrackRoomHeadListItemDelegate> _delegate;
    UIImageView *_normalBgImageView;
    UIImageView *_selectedBgImageView;
    MMHeadImageView *_headImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(nonatomic) __weak id <TrackRoomHeadListItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)onSingleTap:(id)arg1;
@property(retain, nonatomic) NSString *username;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

