//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KSAudioPlayer, LZFileCacheManager, NSObject<OS_dispatch_queue>;

@interface KSNewAudioPlayerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    void *_lzAudioMgrQueueKey;
    LZFileCacheManager *_fileCacheMgr;
    id <KSAudioLogProtocol> _logObj;
    KSAudioPlayer *_curAudioPlayer;
}

+ (id)cachePath;
+ (void)initialize;
+ (void)setCachePath:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (_Bool)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(_Bool)arg4;
- (void)cleanCacheDir:(CDUnknownBlockType)arg1;
- (void *)contextKey;
- (id)createAudioPlayer:(id)arg1;
@property(nonatomic) __weak KSAudioPlayer *curAudioPlayer; // @synthesize curAudioPlayer=_curAudioPlayer;
- (id)curPlayer;
- (void)dealloc;
- (id)fileCacheMgr;
- (id)init;
- (id)initInner;
- (void)interruption:(id)arg1;
- (_Bool)isFileAlreadCachedByUrl:(id)arg1;
- (_Bool)isFileAlreadCachedByVid:(id)arg1;
- (_Bool)isFileAlreadCachedByVid:(id)arg1 fileExt:(id)arg2;
- (id)localCachePath:(id)arg1;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
@property(nonatomic) __weak id <KSAudioLogProtocol> logObj; // @synthesize logObj=_logObj;
- (void)setDefaultCleanFilter:(CDUnknownBlockType)arg1;
- (void)setLogProtocol:(id)arg1;
- (void)setupAudioSession;

@end
