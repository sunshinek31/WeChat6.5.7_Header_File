//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface AutoplayController : MMObject
{
    NSMutableArray *m_arrMesLocalIDs;
    id <AutoplayController> m_delegate;
    _Bool m_bCanPlay;
    _Bool m_bCanStart;
}

@property(nonatomic) __weak id <AutoplayController> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)Reset;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)onStopPlayingVideo;
- (void)onStopRecordingVideo;
- (void)onBeginRecordVideo;
- (void)onBeginPlayVideo;
- (void)onStopRecording;
- (void)onStartPlaying:(id)arg1;
- (void)onEndPlaying:(unsigned int)arg1 isForceStopped:(_Bool)arg2;
- (void)onBeginStartRecording;
- (void)onMessageDownloaded:(unsigned int)arg1;
- (void)onMessagePlayed:(unsigned int)arg1;
- (void)AddMessageLocalID:(unsigned int)arg1;
- (void)PlayList;
- (_Bool)isPlayOK;
- (id)init;
- (void)UnRegister;
- (void)Register;

@end

