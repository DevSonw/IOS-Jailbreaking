//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PKPaymentWebServiceContext : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _devSigned;
    BOOL _transactionServiceDisabled;
    BOOL _messageServiceDisabled;
    NSString *_deviceID;
    NSString *_secureElementID;
    NSString *_pushToken;
    NSDate *_registrationDate;
    int _consistencyCheckBackoffLevel;
    NSArray *_certificates;
    NSString *_lastUpdatedTag;
    NSDate *_configurationDate;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
}

+ (id)contextWithArchive:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableDictionary *verificationRequestsByPassUniqueID; // @synthesize verificationRequestsByPassUniqueID=_verificationRequestsByPassUniqueID;
@property(copy) NSDate *configurationDate; // @synthesize configurationDate=_configurationDate;
@property BOOL messageServiceDisabled; // @synthesize messageServiceDisabled=_messageServiceDisabled;
@property BOOL transactionServiceDisabled; // @synthesize transactionServiceDisabled=_transactionServiceDisabled;
@property BOOL devSigned; // @synthesize devSigned=_devSigned;
@property(copy) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy) NSArray *certificates; // @synthesize certificates=_certificates;
@property int consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(copy) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(copy) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)archiveAtPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
