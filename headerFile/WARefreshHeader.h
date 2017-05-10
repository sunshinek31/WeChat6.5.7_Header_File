//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WARefreshComponent.h"

@interface WARefreshHeader : WARefreshComponent
{
    double _ignoredScrollViewContentInsetTop;
    double _insetTDelta;
}

+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double insetTDelta; // @synthesize insetTDelta=_insetTDelta;
@property(nonatomic) double ignoredScrollViewContentInsetTop; // @synthesize ignoredScrollViewContentInsetTop=_ignoredScrollViewContentInsetTop;
- (void)endRefreshing;
- (void)setState:(long long)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end
