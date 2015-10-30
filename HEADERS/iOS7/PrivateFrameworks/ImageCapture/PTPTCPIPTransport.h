/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/PTPTransport.h>

@class NSMutableData, NSString, PTPTCPIPConnection;

@interface PTPTCPIPTransport : PTPTransport
{
    struct __CFSocket *_socket;
    NSString *_hostName;
    unsigned short _hostPort;
    NSString *_hostGUID;
    NSString *_targetName;
    NSString *_targetAddress;
    unsigned int _targetPort;
    NSString *_targetGUID;
    id _connectionRequestResponse;
    unsigned int _connectionNumber;
    PTPTCPIPConnection *_tempConnection;
    NSMutableData *_tempData;
    PTPTCPIPConnection *_cdConnection;
    PTPTCPIPConnection *_eventConnection;
    NSMutableData *_cdData;
    NSMutableData *_eventData;
    _Bool _delegateNeedsData;
}

- (int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long long)arg1;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long long)arg1;
- (void)handleData:(id)arg1 from:(id)arg2;
- (void)didCloseConnection:(id)arg1 withError:(CDStruct_87dc826d)arg2;
- (void)acceptConnectionFromSocket:(int)arg1;
- (void)releaseConnections;
- (void)cancelTransaction:(id)arg1;
- (_Bool)sendEvent:(id)arg1;
- (_Bool)sendResponse:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendDataPackets:(id)arg1;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned int)arg3;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned int)arg3;
- (_Bool)sendCancel:(id)arg1;
- (_Bool)sendStartData:(id)arg1;
- (id)description;
- (_Bool)connected;
- (void)stop;
- (_Bool)startInitiator;
- (_Bool)waitForConnectionWithTimeout:(double)arg1;
- (_Bool)startResponder;
- (id)targetGUID;
- (unsigned int)targetPort;
- (id)targetAddress;
- (id)targetName;
- (void)dealloc;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned int)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7;
- (id)initForAcceptedSocketWithDelegate:(id)arg1 andHostGUID:(id)arg2 andHostName:(id)arg3;
- (id)initWithHostPort:(unsigned int)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6;

@end
