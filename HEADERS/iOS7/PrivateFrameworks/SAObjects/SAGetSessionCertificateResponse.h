/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand
{
}

+ (id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSessionCertificateResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSData *certificate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
