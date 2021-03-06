//
//  HKSource.h
//  HealthKit
//
//  Copyright (c) 2014 Apple Inc. All rights reserved.
//

#import <HealthKit/HKDefines.h>

/*!
 @class     HKSource
 @abstract  Represents the entity that created an object stored by HealthKit.
 */
HK_CLASS_AVAILABLE_IOS(8_0)
@interface HKSource : NSObject <NSSecureCoding, NSCopying>

/*!
 @property      name
 @abstract      The name of the source represented by the receiver.  If the source is an app, then the name is the
                localized name of the app.
 */
@property (readonly, strong) NSString *name;

/*!
 @property  bundleIdentifier
 @abstract  The bundle identifier of the source represented by the receiver.
 */
@property (readonly, strong) NSString *bundleIdentifier;

/*!
 @method    defaultSource
 @abstract  Returns the source representing the calling application.
 */
+ (HKSource *)defaultSource;

- (instancetype)init NS_UNAVAILABLE;

@end
