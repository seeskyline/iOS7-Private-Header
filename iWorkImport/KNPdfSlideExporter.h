/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNSlideExporter.h"


#import "TSKEncryptedDocumentExporter.h"



__attribute__((visibility("hidden")))

@interface KNPdfSlideExporter : KNSlideExporter <TSKEncryptedDocumentExporter>

{

}



- (id)p_renderingExporterDelegate;

- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;

- (void)setPassphrase:(id)arg1 hint:(id)arg2;

- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;



@end

