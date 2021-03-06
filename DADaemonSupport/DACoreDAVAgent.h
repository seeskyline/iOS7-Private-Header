/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DAAgent.h"


#import "DABabysittable.h"



@class CoreDAVOptionsTask, NSTimer;



@interface DACoreDAVAgent : DAAgent <DABabysittable>

{

    CoreDAVOptionsTask *_optionsProbe;

    NSTimer *_optionsTimeoutTimer;

}



- (void)_cancelOptionsTimer;

- (void)_probeAndSyncWithBlock:(id)arg1;

- (void)_serverProbeTimedOut;

- (void)dealloc;

- (id)initWithAccount:(id)arg1;

@property(retain) CoreDAVOptionsTask *optionsProbe; // @synthesize optionsProbe=_optionsProbe;

@property(retain) NSTimer *optionsTimeoutTimer; // @synthesize optionsTimeoutTimer=_optionsTimeoutTimer;

- (id)waiterID;



@end


