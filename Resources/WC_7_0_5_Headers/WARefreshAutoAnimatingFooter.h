//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WARefreshAutoFooter.h"

@class DotLoadingView, MMUILabel, NSString, UIView;

@interface WARefreshAutoAnimatingFooter : WARefreshAutoFooter
{
    NSString *_noMoreTips;
    DotLoadingView *_loadingView;
    UIView *_noMoreDataView;
    UIView *_lineView;
    MMUILabel *_noMoreTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak DotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
@property(copy, nonatomic) NSString *noMoreTips; // @synthesize noMoreTips=_noMoreTips;
@property(retain, nonatomic) MMUILabel *noMoreTipsLabel; // @synthesize noMoreTipsLabel=_noMoreTipsLabel;
- (void)onTapNoMore:(id)arg1;
- (void)placeSubviews;
- (void)setState:(long long)arg1;

@end
