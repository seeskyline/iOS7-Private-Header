/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMHTMLElement.h"


@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;



@interface DOMHTMLSelectElement : DOMHTMLElement

{

}



- (void)_activateItemAtIndex:(int)arg1;

- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(_Bool)arg2;

- (void)add:(id)arg1:(id)arg2;

- (void)add:(id)arg1 before:(id)arg2;

@property _Bool autofocus;

- (_Bool)checkValidity;

- (unsigned int)completeLength;

@property _Bool disabled;

@property(readonly) DOMHTMLFormElement *form;

- (id)item:(unsigned int)arg1;

- (id)labels;

@property(readonly) int length;

- (id)listItemAtIndex:(int)arg1;

@property _Bool multiple;

@property(copy) NSString *name;

- (id)namedItem:(id)arg1;

@property(readonly) DOMHTMLOptionsCollection *options;

- (void)remove:(int)arg1;

- (_Bool)required;

@property int selectedIndex;

- (id)selectedOptions;

- (void)setCustomValidity:(id)arg1;

- (void)setRequired:(_Bool)arg1;

@property int size;

@property(copy) NSString *value;

- (int)structuralComplexityContribution;

@property(readonly) NSString *type;

- (id)validationMessage;

- (id)validity;

@property(readonly) _Bool willValidate;



@end

