//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPSyncExt.h"
#import "MMService.h"

@class NSString, VOIPModeSwitchStateMachine;

@interface VOIPModeSwitchMgr : MMService <IVOIPSyncExt, MMService>
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsLocalVideoClosed;
    _Bool mIsRemoteVideoClosed;
    _Bool mIsMicClosed;
    _Bool mIsVoiceMode;
    _Bool mIsTalkingWithOldVersion;
    int mRoomId;
    long long mRoomKey;
    _Bool m_isActiveByCaller;
    _Bool _m_isInitialVoiceMode;
    VOIPModeSwitchStateMachine *mStateMachine;
}

- (void).cxx_destruct;
- (void)CallBackForModeStatus:(int)arg1;
- (void)ChangeToAudioMode;
- (void)CloseLocalMic;
- (int)CurrentStatus;
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)OpenLocalEarMode;
- (void)OpenLocalEarModeFor2G;
- (void)OpenLocalEarModeForBadNetwork;
- (void)OpenLocalEarModeNotPush;
- (void)OpenLocalMic;
- (void)OpenLocalVideoMode;
- (void)PushControlStatusToRemote:(unsigned int)arg1;
- (void)SetAudioSpeakerPhone:(_Bool)arg1;
- (void)SetLocalVideoEnable:(_Bool)arg1;
- (void)SetRemoteVideoEnable:(_Bool)arg1;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2;
- (void)StopSession;
- (void)VideoSwitchToVoiceMode;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (void)dealloc;
- (id)init;
- (_Bool)isLocalVideoClosed;
- (_Bool)isMicClosed;
- (_Bool)isRemoteVideoClosed;
- (_Bool)isTalkingWithOldVersion;
- (_Bool)isVoiceMode;
@property(retain, nonatomic) VOIPModeSwitchStateMachine *mStateMachine; // @synthesize mStateMachine;
@property(nonatomic) _Bool m_isActiveByCaller; // @synthesize m_isActiveByCaller;
@property(nonatomic) _Bool m_isInitialVoiceMode; // @synthesize m_isInitialVoiceMode=_m_isInitialVoiceMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
