/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RUIElement.h"


@class NSArray, NSMutableArray, NSNumber, RUITableViewRow, UIView<RemoteUITableFooter>, UIView<RemoteUITableHeader>;



@interface RUITableViewSection : RUIElement

{

    NSMutableArray *_rows;

    UIView<RemoteUITableHeader> *_header;

    UIView<RemoteUITableFooter> *_footer;

    id _delegate;

    long long _disclosureLimit;

    RUITableViewRow *_showAllRow;

    NSNumber *_drawsTopSeparator;

    _Bool _configured;

    UIView<RemoteUITableFooter> *_footerView;

    double _headerHeight;

    double _footerHeight;

}



- (Class)_customFooterClass;

- (Class)_customHeaderClass;

- (void)addRow:(id)arg1;

@property(nonatomic) _Bool configured; // @synthesize configured=_configured;

- (void)dealloc;

- (void)didTapShowAllRowWithTable:(id)arg1;

@property(nonatomic) _Bool drawTopSeparator;

@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;

@property(retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // @synthesize footerView=_footerView;

- (_Bool)hasCustomFooter;

- (_Bool)hasCustomHeader;

- (_Bool)hasValueForDrawsTopSeparator;

@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;

@property(retain, nonatomic) UIView<RemoteUITableHeader> *headerView; // @synthesize headerView=_header;

- (id)init;

- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)populatePostbackDictionary:(id)arg1;

- (void)remoteUILinkFooterActivatedLink:(id)arg1;

- (void)removeRowAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) NSArray *rows; // @synthesize rows=_rows;

- (void)setAttributes:(id)arg1;

- (void)setDelegate:(id)arg1;

- (void)setImage:(id)arg1;

- (void)setImageAlignment:(int)arg1;

- (void)setImageSize:(struct CGSize)arg1;

- (id)sourceURL;



@end


