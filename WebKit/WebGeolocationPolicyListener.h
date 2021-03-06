/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebAllowDenyPolicyListener.h"



__attribute__((visibility("hidden")))

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>

{

    struct RefPtr<WebCore::Geolocation> _geolocation;

    struct RetainPtr<WebView *> _webView;

    struct RetainPtr<id<WebGeolocationProvider>> _geolocationProvider;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)allow;

- (void)deny;

- (void)denyOnlyThisRequest;

- (id)initWithGeolocation:(struct Geolocation *)arg1 forWebView:(id)arg2 provider:(id)arg3;

- (_Bool)shouldClearCache;



@end


