//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMMusicInfo, NSString, UIImage;

@protocol IMusicPlayerExt <NSObject>

@optional
- (void)onMusicStopError:(MMMusicInfo *)arg1;
- (void)onMusicPlayFinish:(MMMusicInfo *)arg1;
- (void)onDataBuffering:(double)arg1;
- (void)OnUpdateDuarationOnForeGround;
- (void)OnGetSongAlbumUrl:(MMMusicInfo *)arg1 AlbumUrl:(NSString *)arg2;
- (void)onAlbumImageChanged:(MMMusicInfo *)arg1 AlbumImage:(UIImage *)arg2;
- (void)onLyricsChanged:(MMMusicInfo *)arg1 Lyrics:(NSString *)arg2;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onPlayPreviousMusic;
- (void)onPlayNextMusic;
- (void)onMusicPlayStatusChanged;
@end

