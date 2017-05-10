//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "WCGetAddressControlLogicDelegate.h"

@class NSString, UILabel, WCAddressBaseAddress;

@interface WCPayGetAddressItem : WCBaseInfoItem <WCGetAddressControlLogicDelegate>
{
    id <WCPayGetAddressItemDelegate> _delegate;
    UILabel *_addressLabel;
    WCAddressBaseAddress *_selectedAddress;
}

@property(retain, nonatomic) WCAddressBaseAddress *selectedAddress; // @synthesize selectedAddress=_selectedAddress;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(nonatomic) __weak id <WCPayGetAddressItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)addressString;
- (void)logicStop:(id)arg1 didGetAddress:(id)arg2;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

