//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "JSEventExt.h"
#import "MMService.h"
#import "WCMallNetworkHelperDelegate.h"

@class NSDictionary, NSString, WCMallNetworkHelper;

@interface WCMallLogicMgr : MMService <MMService, WCMallNetworkHelperDelegate, IMsgExt, JSEventExt>
{
    WCMallNetworkHelper *m_oWCMallNetworkHelper;
    NSDictionary *m_oBufferFunctionList;
    _Bool m_bGetFunctionList;
}

- (void).cxx_destruct;
- (void)ClearWCMallOldTelephone;
- (void)GetWCMallFunctionList;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)GetWCMallFunctionProductLatestInfo:(id)arg1;
- (void)GetWCMallFunctionProductsList:(unsigned int)arg1;
- (id)GetWCMallOldTelehoneArray;
- (void)GetWCMallPayChargeProxyRequest:(id)arg1 CMDID:(unsigned int)arg2;
- (void)GetWCMallPayFunctionListRequest:(id)arg1;
- (void)HandleWCMallActivityUpdate:(id)arg1;
- (_Bool)IsUsedWCMallPayTelephone;
- (void)OnCallBackGetWCMallFunctionList:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallBackGetWCMallFunctionProductList:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallBackGetWCMallLatestPayProductInfo:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnCallPayChargeProxy:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnHandlerFunctionListComeBack:(id)arg1 Request:(id)arg2 Response:(id)arg3 FromCache:(_Bool)arg4;
- (void)SetUsedWCMallPayTelephone;
- (void)SetWCMallOldTelephone:(id)arg1 UserName:(id)arg2;
- (id)_productInfoFromDictionary:(id)arg1;
- (_Bool)checkIsRedDotOrNewOverTime;
- (void)clearAllNewOrRedDot;
- (void)dealloc;
- (id)getAllTicket;
- (unsigned int)getLatestActivityIDShowedTips;
- (void)handleActivityType:(id)arg1 ShowedType:(id)arg2 FunctionId:(id)arg3 ActivityId:(id)arg4 Ticket:(id)arg5;
- (id)init;
- (_Bool)isNeedShowNewInMoreView;
- (_Bool)isNeedShowProductActivity:(id)arg1 ActivityID:(id)arg2;
- (_Bool)isNeedShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2;
- (_Bool)isNeedShowRecommendViewWithId:(id)arg1;
- (_Bool)isNeedShowRedCodeInMoreView;
- (void)jsJumpWCMall:(id)arg1;
- (void)saveAllTicket:(id)arg1;
- (void)sendDeleteChargeHistoryRequest:(id)arg1;
- (void)setLatestActivityIDShowedTips:(unsigned int)arg1;
- (void)setNeedShowNewInMoreView:(_Bool)arg1;
- (void)setNeedShowRedCodeInMoreView:(_Bool)arg1;
- (void)setRecommendIdHasShowed:(id)arg1;
- (void)setRedDotOrNewLastUpdateTime;
- (void)setShowProductActivity:(id)arg1 ActivityID:(id)arg2 Showed:(_Bool)arg3;
- (void)setShowProductBannerActivity:(id)arg1 ActivityID:(id)arg2 Showed:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
