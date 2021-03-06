/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHPersistentChartMediator.h"


#import "TSCECalculationEngineRegistration.h"

#import "TSKDocumentObject.h"



__attribute__((visibility("hidden")))

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>

{

}



- (id)initFromUnarchiver:(id)arg1;

- (id)objectToArchiveInDependencyTracker;

- (_Bool)registerLast;

- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;

- (void)saveToArchiver:(id)arg1;

- (void)unregisterFromCalculationEngine:(id)arg1;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;

- (void)willModify;



@end


