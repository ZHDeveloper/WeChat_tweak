//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, WxaPage;

@interface WANetSearchResultWrap : NSObject
{
    _Bool _hasMore;
    NSMutableArray *_arrResult;
    NSString *_query;
    WxaPage *_moreAction;
    long long _sessionId;
    long long _searchId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrResult; // @synthesize arrResult=_arrResult;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) WxaPage *moreAction; // @synthesize moreAction=_moreAction;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)reset;
@property(nonatomic) long long searchId; // @synthesize searchId=_searchId;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;

@end
