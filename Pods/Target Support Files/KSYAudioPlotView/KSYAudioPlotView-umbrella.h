#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "KSYAudioDisplayLink.h"
#import "KSYAudioFile.h"
#import "KSYAudioPlot.h"
#import "KSYAudioPlotView.h"
#import "KSYAudioUtilities.h"
#import "KSYPlotCircularBuffer.h"

FOUNDATION_EXPORT double KSYAudioPlotViewVersionNumber;
FOUNDATION_EXPORT const unsigned char KSYAudioPlotViewVersionString[];

