//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate;

@interface ShowRatingAchive : NSObject <NSCoding>
{
    unsigned int m_uiLastShowedVersion;
    NSDate *m_dtFirstRecieveTime;
    unsigned int m_uiShowType;
    unsigned int m_uiWaitDays;
}

@property(nonatomic) unsigned int m_uiWaitDays; // @synthesize m_uiWaitDays;
@property(nonatomic) unsigned int m_uiShowType; // @synthesize m_uiShowType;
@property(retain, nonatomic) NSDate *m_dtFirstRecieveTime; // @synthesize m_dtFirstRecieveTime;
@property(nonatomic) unsigned int m_uiLastShowedVersion; // @synthesize m_uiLastShowedVersion;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

