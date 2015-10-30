/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BBAction, BBAttachments, BBContent, BBSound, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimeZone;

@interface BBBulletin : NSObject <NSCopying, NSCoding>
{
    _Bool _hasEventDate;
    _Bool _dateIsAllDay;
    _Bool _clearable;
    _Bool _wantsFullscreenPresentation;
    _Bool _expiresOnPublisherDeath;
    _Bool _showsMessagePreview;
    _Bool _usesExternalSync;
    NSString *_sectionID;
    NSSet *_subsectionIDs;
    NSString *_publisherRecordID;
    NSString *_publisherBulletinID;
    NSString *_dismissalID;
    long long _addressBookRecordID;
    long long _sectionSubtype;
    BBContent *_content;
    BBContent *_modalAlertContent;
    BBContent *_starkBannerContent;
    NSDate *_date;
    NSDate *_endDate;
    NSDate *_recencyDate;
    long long _dateFormatStyle;
    NSTimeZone *_timeZone;
    unsigned long long _accessoryStyle;
    BBSound *_sound;
    BBAttachments *_attachments;
    NSString *_unlockActionLabelOverride;
    NSMutableDictionary *_actions;
    NSArray *_buttons;
    NSDictionary *_context;
    NSDate *_expirationDate;
    unsigned long long _expirationEvents;
    NSSet *_alertSuppressionContexts;
    NSString *_bulletinID;
    NSDate *_lastInterruptDate;
    NSDate *_publicationDate;
    NSString *_bulletinVersionID;
    NSMutableArray *_lifeAssertions;
    NSMutableSet *_observers;
    unsigned long long realertCount_deprecated;
    NSSet *alertSuppressionAppIDs_deprecated;
}

+ (id)copyCachedBulletinWithBulletinID:(id)arg1;
+ (void)removeBulletinFromCache:(id)arg1;
+ (void)addBulletinToCache:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated; // @synthesize alertSuppressionAppIDs_deprecated;
@property(nonatomic) unsigned long long realertCount_deprecated; // @synthesize realertCount_deprecated;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
@property(nonatomic) _Bool usesExternalSync; // @synthesize usesExternalSync=_usesExternalSync;
@property(copy, nonatomic) NSString *bulletinVersionID; // @synthesize bulletinVersionID=_bulletinVersionID;
@property(nonatomic) _Bool showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(retain, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(retain, nonatomic) NSDate *lastInterruptDate; // @synthesize lastInterruptDate=_lastInterruptDate;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) NSSet *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property(nonatomic) unsigned long long expirationEvents; // @synthesize expirationEvents=_expirationEvents;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) _Bool expiresOnPublisherDeath; // @synthesize expiresOnPublisherDeath=_expiresOnPublisherDeath;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool wantsFullscreenPresentation; // @synthesize wantsFullscreenPresentation=_wantsFullscreenPresentation;
@property(copy, nonatomic) NSString *unlockActionLabelOverride; // @synthesize unlockActionLabelOverride=_unlockActionLabelOverride;
@property(retain, nonatomic) BBAttachments *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) BBSound *sound; // @synthesize sound=_sound;
@property(nonatomic) _Bool clearable; // @synthesize clearable=_clearable;
@property(nonatomic) unsigned long long accessoryStyle; // @synthesize accessoryStyle=_accessoryStyle;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool dateIsAllDay; // @synthesize dateIsAllDay=_dateIsAllDay;
@property(nonatomic) long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property(retain, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool hasEventDate; // @synthesize hasEventDate=_hasEventDate;
@property(retain, nonatomic) BBContent *starkBannerContent; // @synthesize starkBannerContent=_starkBannerContent;
@property(retain, nonatomic) BBContent *modalAlertContent; // @synthesize modalAlertContent=_modalAlertContent;
@property(retain, nonatomic) BBContent *content; // @synthesize content=_content;
@property(nonatomic) long long sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(nonatomic) long long addressBookRecordID; // @synthesize addressBookRecordID=_addressBookRecordID;
@property(copy, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(copy, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_publisherRecordID;
@property(copy, nonatomic) NSSet *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)safeDescription;
- (id)description;
- (id)_safeDescription:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)firstValidObserver;
- (void)addObserver:(id)arg1;
- (void)addLifeAssertion:(id)arg1;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)actionForResponse:(id)arg1;
- (id)responseSendBlock;
- (id)responseForExpireAction;
- (id)responseForSnoozeAction;
- (id)responseForButtonActionAtIndex:(unsigned long long)arg1;
- (id)responseForAcknowledgeAction;
- (id)responseForDefaultAction;
- (id)_responseForActionType:(long long)arg1;
@property(copy, nonatomic) BBAction *snoozeAction;
@property(copy, nonatomic) BBAction *expireAction;
@property(copy, nonatomic) BBAction *acknowledgeAction;
@property(copy, nonatomic) BBAction *alternateAction;
@property(copy, nonatomic) BBAction *defaultAction;
- (id)_actionKeyForType:(long long)arg1;
- (id)attachmentsCreatingIfNecessary:(_Bool)arg1;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
@property(readonly, nonatomic) long long primaryAttachmentType;
@property(copy, nonatomic) NSString *section;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)init;

@end
