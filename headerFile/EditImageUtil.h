//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EditImageUtil : MMObject
{
}

+ (struct CGSize)getEditImageResultSizeIfLongImage:(struct CGSize)arg1;
+ (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
+ (double)getNearByInt:(double)arg1;
+ (unsigned int)numberOfPenCountsPerRender;
+ (_Bool)isHighResolution:(struct CGRect)arg1;
+ (_Bool)isLowDevice;
+ (_Bool)isNeedSaveEditedPhoto;
+ (void)savePhotoToSystemAlbum:(id)arg1;

@end

