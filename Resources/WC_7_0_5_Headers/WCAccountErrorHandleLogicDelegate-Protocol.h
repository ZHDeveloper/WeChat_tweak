//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSDictionary, NSObject;

@protocol WCAccountErrorHandleLogicDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;
- (_Bool)isFromReg;

@optional
- (_Bool)onErrorHandleLogicAction:(NSObject *)arg1;
- (_Bool)onErrorHandleLogicDone;
- (_Bool)onErrorHandleLogicDoneAndNeedGoNextWithParams:(NSDictionary *)arg1;
@end
