//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCAppAuthScopeInfoItem : MMObject <PBCoding>
{
    _Bool isUserEnable;
    unsigned int state;
    NSString *scope;
    NSString *scopeDesc;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool isUserEnable; // @synthesize isUserEnable;
@property(copy, nonatomic) NSString *scope; // @synthesize scope;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc;
@property(nonatomic) unsigned int state; // @synthesize state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
