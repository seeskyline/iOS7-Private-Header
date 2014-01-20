/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDate, NSMutableDictionary, NSString;



__attribute__((visibility("hidden")))

@interface PFUbiquitySaveSnapshot : NSObject

{

    NSDate *_transactionDate;

    NSString *_modelVersionHash;

    NSString *_exportingPeerID;

    NSString *_localPeerID;

    NSMutableDictionary *_storeNameToStoreSaveSnapshots;

}



- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;

- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;

- (id)initWithTransactionLog:(id)arg1;

@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@property(readonly, nonatomic) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;

@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;

@property(readonly, nonatomic) NSArray *storeNames;

- (id)storeSaveSnapshotForStore:(id)arg1;

- (id)storeSaveSnapshotForStoreName:(id)arg1;



@end

