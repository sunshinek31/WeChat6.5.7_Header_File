//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FaceRecogProcessorDelegate <NSObject>
- (void)procedureDidFailedReleaseOutResultData;
- (void)procedureDidStartUploadResultData;
- (void)procedureDidRecognizeFaceSuccess;
- (void)procedureDidGotFrameResult:(unsigned long long)arg1 failedType:(long long)arg2;
@end

