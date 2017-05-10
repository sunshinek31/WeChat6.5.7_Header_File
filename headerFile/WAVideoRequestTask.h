//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"
#import "NSURLConnectionDataDelegate.h"

@class NSFileHandle, NSMutableArray, NSString, NSURL, NSURLConnection;

@interface WAVideoRequestTask : NSObject <NSURLConnectionDataDelegate, AVAssetResourceLoaderDelegate>
{
    _Bool _isFinishLoad;
    _Bool _once;
    NSURL *_url;
    unsigned long long _offset;
    unsigned long long _videoLength;
    unsigned long long _downLoadingOffset;
    NSString *_mimeType;
    id <WAVideoRequestTaskDelegate> _delegate;
    NSURLConnection *_connection;
    NSMutableArray *_taskArr;
    NSFileHandle *_fileHandle;
    NSString *_tempPath;
}

@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) _Bool once; // @synthesize once=_once;
@property(retain, nonatomic) NSMutableArray *taskArr; // @synthesize taskArr=_taskArr;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <WAVideoRequestTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFinishLoad; // @synthesize isFinishLoad=_isFinishLoad;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned long long downLoadingOffset; // @synthesize downLoadingOffset=_downLoadingOffset;
@property(nonatomic) unsigned long long videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)clearData;
- (void)cancel;
- (void)continueLoading;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setUrl:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithTempFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

