//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMWifiSSIDRetriever : NSObject
{
    unsigned int _m_timeStamp;
    NSString *_m_currentWifiSSID;
    NSString *_m_currentWifiBSSID;
    unsigned long long _m_timestampInMs;
}

- (void).cxx_destruct;
- (id)currentWifiBSSID;
- (id)currentWifiSSID;
@property(retain, nonatomic) NSString *m_currentWifiBSSID; // @synthesize m_currentWifiBSSID=_m_currentWifiBSSID;
@property(retain, nonatomic) NSString *m_currentWifiSSID; // @synthesize m_currentWifiSSID=_m_currentWifiSSID;
@property(nonatomic) unsigned int m_timeStamp; // @synthesize m_timeStamp=_m_timeStamp;
@property(nonatomic) unsigned long long m_timestampInMs; // @synthesize m_timestampInMs=_m_timestampInMs;
- (unsigned int)timeStamp;
- (unsigned long long)timestampInMs;
- (void)updateWifiInfo;

@end
