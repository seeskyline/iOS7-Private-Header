/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface WXParagraph : NSObject

{

}



+ (void)readAnnotationFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;

+ (void)readFrom:(struct _xmlNode *)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;

+ (void)readFromString:(id)arg1 to:(id)arg2;

+ (void)readHyperlinkFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;

+ (void)readRFrom:(struct _xmlNode *)arg1 to:(id)arg2 targetRun:(id)arg3 state:(id)arg4;

+ (void)readRunsFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 targetRun:(id)arg4 state:(id)arg5;

+ (void)readRunsTo:(id)arg1 state:(id)arg2;

+ (void)readSimpleFieldFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;

+ (void)readTrackingFrom:(struct _xmlNode *)arg1 paragraphNamespace:(struct _xmlNs *)arg2 to:(id)arg3 state:(id)arg4;



@end


