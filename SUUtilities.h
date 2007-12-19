//
//  SUUtilities.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/12/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#define SULocalizedString(key,comment) [SUUtilities localizedStringForKey:key withComment:comment]

@class SUUpdater, SUBundleDefaults;
@interface SUUtilities : NSObject {
	SUUpdater *updater;
	SUBundleDefaults *defaults;
}

+ (NSString *)localizedStringForKey:(NSString *)key withComment:(NSString *)comment;

- (id)initWithUpdater:(SUUpdater *)aUpdater;
- (id)unlocalizedInfoValueForKey:(NSString *)key;
- (id)infoValueForKey:(NSString *)key;
- (NSString *)hostAppName;
- (NSString *)hostAppDisplayName;
- (NSString *)hostAppVersion;
- (NSString *)hostAppVersionString;
- (NSString *)hostAppID;
- (NSImage *)hostAppIcon;
- (NSString *)hostAppPath;
- (NSString *)hostAppExtension;
- (BOOL)isRunningFromDiskImage;
- (SUBundleDefaults *)standardBundleDefaults;
@end

NSComparisonResult SUStandardVersionComparison(NSString * versionA, NSString * versionB);

// If running make localizable-strings for genstrings, ignore the error on this line.
//NSString *SULocalizedString(NSString *key, NSString *comment);