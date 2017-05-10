//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EVADProcessorDelegate.h"
#import "MMService.h"
#import "SimpleRecordBufferDelegate.h"
#import "UploadStreamVoiceDataMgrDelegate.h"

@class EVADProcessor, NSMutableArray, NSMutableDictionary, NSString, SimpleAudioRecorder, StreamInputResult, UploadStreamVoiceDataMgr;

@interface StreamVoiceInputMgr : MMService <MMService, SimpleRecordBufferDelegate, UploadStreamVoiceDataMgrDelegate, EVADProcessorDelegate>
{
    unsigned int m_uiVoiceOffset;
    NSMutableArray *m_voiceIdArray;
    _Bool m_bStop;
    unsigned long long _startInputTiem;
    unsigned int _currentInputId;
    StreamInputResult *_result;
    SimpleAudioRecorder *_recorder;
    UploadStreamVoiceDataMgr *_uploadMgr;
    EVADProcessor *_evad;
    NSMutableDictionary *_sequenceMap;
    NSString *_sessionId;
    NSString *_currentVoiceId;
}

@property(copy, nonatomic) NSString *currentVoiceId; // @synthesize currentVoiceId=_currentVoiceId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableDictionary *sequenceMap; // @synthesize sequenceMap=_sequenceMap;
@property(retain, nonatomic) EVADProcessor *evad; // @synthesize evad=_evad;
@property(retain, nonatomic) UploadStreamVoiceDataMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) SimpleAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) unsigned int currentInputId; // @synthesize currentInputId=_currentInputId;
@property(retain) StreamInputResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)resetSquenceMap;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onNetworkError:(unsigned int)arg1;
- (void)onLocalFileOperationError;
- (void)onGetText:(id)arg1;
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectDelayVoice:(id)arg1 Pcm:(id)arg2;
- (void)onVADFilterdSpeakingVoice:(id)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(_Bool)arg3;
- (void)onVADDetectFirstStart:(id)arg1;
- (double)simpleRateForBuffer;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (void)onAudioBufferRecordEnd;
- (void)outputPeakPower:(float)arg1;
- (unsigned int)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (id)GetVoiceIds;
- (void)ExitVoiceInput;
- (_Bool)StopRecord;
- (unsigned int)StartInput;
- (_Bool)isRecording;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
