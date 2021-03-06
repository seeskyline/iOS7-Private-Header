/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSKAddedToDocumentContext : NSObject

{

}



+ (id)changeTrackingSubstorageForCopyContext;

+ (id)dragCopyContext;

+ (id)dragMoveContext;

+ (id)exportFootnoteContext;

+ (id)importingContextWithImporterID:(id)arg1;

+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;

+ (id)insertingPrototypeContext;

+ (id)movingContext;

+ (id)pastingContext;

+ (id)pastingMatchStyleContext;

+ (id)unarchivingContext;

+ (id)undoDeleteContext;

+ (id)unhidingContext;

- (_Bool)autoUpdateSmartFields;

- (_Bool)changeTrackingSubstorage;

- (_Bool)exportingFootnotes;

- (id)importerID;

- (_Bool)invokeDOLC;

- (_Bool)matchStyle;

- (void)setTableIDMap:(struct __CFDictionary *)arg1;

- (_Bool)syncChanges;

- (struct __CFDictionary *)tableIDMap;

- (id)undoContext;

- (_Bool)uniqueBookmarks;

- (_Bool)wasDragMoved;

- (_Bool)wasDragOperation;

- (_Bool)wasImported;

- (_Bool)wasImportedFromMasterTemplate;

- (_Bool)wasMoved;

- (_Bool)wasPasted;

- (_Bool)wasUnarchived;

- (_Bool)wasUndoDelete;

- (_Bool)wasUnhidden;



@end


