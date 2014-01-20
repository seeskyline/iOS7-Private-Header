/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, PKPassFieldTemplate;



@interface PKPassFaceTemplate : NSObject

{

    double _barcodeVerticalInset;

    PKPassFieldTemplate *_defaultFieldTemplate;

    NSMutableArray *_bucketTemplates;

    struct CGSize _barcodeMaxSize;

}



- (void)addBucketTemplate:(id)arg1;

@property(nonatomic) double barcodeBottomInset; // @synthesize barcodeBottomInset=_barcodeVerticalInset;

@property(nonatomic) struct CGSize barcodeMaxSize; // @synthesize barcodeMaxSize=_barcodeMaxSize;

@property(retain, nonatomic) NSMutableArray *bucketTemplates; // @synthesize bucketTemplates=_bucketTemplates;

- (void)dealloc;

@property(retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // @synthesize defaultFieldTemplate=_defaultFieldTemplate;

- (id)templateForBucketAtIndex:(unsigned long long)arg1;



@end

