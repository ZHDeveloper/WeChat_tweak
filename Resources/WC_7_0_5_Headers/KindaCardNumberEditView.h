//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKCardNumberEditView.h"
#import "UITextFieldDelegate.h"
#import "WCBaseInfoItemDelegate.h"

@class MMKCardNumberEditViewOnTextChangedCallback, NSString, WCPayTenpaySecureCtrlItem;

@interface KindaCardNumberEditView : KindaView <UITextFieldDelegate, WCBaseInfoItemDelegate, MMKCardNumberEditView>
{
    MMKCardNumberEditViewOnTextChangedCallback *m_callback;
    _Bool _m_bFocus;
    WCPayTenpaySecureCtrlItem *_m_textFieldItem;
    long long _m_hintColor;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)dealloc;
- (_Bool)getFocus;
- (id)getHint;
- (long long)getHintColor;
- (id)getValue;
- (id)getView;
- (id)init;
- (_Bool)isBankCardNumber;
@property(nonatomic) _Bool m_bFocus; // @synthesize m_bFocus=_m_bFocus;
@property(nonatomic) long long m_hintColor; // @synthesize m_hintColor=_m_hintColor;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *m_textFieldItem; // @synthesize m_textFieldItem=_m_textFieldItem;
- (void)setFocus:(_Bool)arg1;
- (void)setHint:(id)arg1;
- (void)setHintColor:(long long)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
