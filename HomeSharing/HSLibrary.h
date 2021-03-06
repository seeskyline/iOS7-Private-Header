/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class HSConnection, NSString;



@interface HSLibrary : NSObject

{

    _Bool _requiresPassword;

    unsigned int _version;

    NSString *_name;

    NSString *_uniqueIdentifier;

    HSConnection *_connection;

    id <NSObject> _context;

}



@property(readonly, nonatomic) HSConnection *connection; // @synthesize connection=_connection;

@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;

- (void)dealloc;

- (id)initWithConnectionConfiguration:(id)arg1;

- (id)initWithConnectionConfiguration:(id)arg1 connectionType:(long long)arg2;

- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4;

- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 connectionType:(long long)arg5;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@property(readonly, nonatomic) _Bool requiresPassword; // @synthesize requiresPassword=_requiresPassword;

@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;



@end


