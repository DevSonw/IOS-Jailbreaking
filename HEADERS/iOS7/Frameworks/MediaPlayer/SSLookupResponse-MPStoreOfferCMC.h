/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SSLookupResponse.h"

@interface SSLookupResponse (MPStoreOfferCMC)
+ (id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)arg1;
+ (_Bool)mpFakeCompletionDataForBuys;
+ (_Bool)mpShowBuysWithNoCompletionOffer;
+ (_Bool)mpVerboseCMCLogging;
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)arg1;
- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;
@property(readonly, nonatomic) _Bool mpIsPersonalizedOffer;
@end
