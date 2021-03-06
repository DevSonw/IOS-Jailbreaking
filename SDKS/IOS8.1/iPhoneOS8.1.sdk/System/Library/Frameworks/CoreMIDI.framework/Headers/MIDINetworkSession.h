/*
    File:       CoreMIDI/MIDINetworkSession.h
 
    Contains:   Routines for MIDI networking
 
 	Copyright:  (c) 2010 by Apple Inc., all rights reserved.
 
    Bugs?:      For bug reports, consult the following page on
                the World Wide Web:
 
                    http://developer.apple.com/bugreporter/
 
*/

#ifndef __MIDINetworkSession_h__
#define __MIDINetworkSession_h__

#ifdef __OBJC__
#import <CoreMIDI/MIDIServices.h>
#import <Foundation/Foundation.h>

#ifndef MIDI_EXPORT
#define MIDI_EXPORT __attribute__((visibility("default")))
#endif

/* This is the Bonjour service type. */
MIDI_EXPORT extern NSString *const MIDINetworkBonjourServiceType __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_2);

/*
	These are NSNotifications posted by MIDINetworkSession objects. 

	MIDINetworkNotificationContactsDidChange signifies that the list of contacts changed.
	MIDINetworkNotificationSessionDidChange signifies that other aspects of the session changed,
	such as the connection list, connection policy, etc.
*/
MIDI_EXPORT extern NSString *const MIDINetworkNotificationContactsDidChange __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_2);
MIDI_EXPORT extern NSString *const MIDINetworkNotificationSessionDidChange __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_2);


/* __________________________________________________________________________________________________
	These are the values of connectionPolicy
*/
enum {
	MIDINetworkConnectionPolicy_NoOne				= 0,
	MIDINetworkConnectionPolicy_HostsInContactList	= 1,
	MIDINetworkConnectionPolicy_Anyone				= 2
};
typedef NSUInteger MIDINetworkConnectionPolicy;

/* __________________________________________________________________________________________________
	MIDINetworkHost
	
	Represents a network address.
	name: the user's tag for this object.
	Representations are either:
	-	address (IP address or hostname) and UDP port
	-	netServiceName and netServiceDomain
*/
MIDI_EXPORT NS_CLASS_AVAILABLE(NA, 4_2)
@interface MIDINetworkHost : NSObject {
@private
    __strong struct _MIDINetworkHostImpl *_impl;
}
+ (id)hostWithName: (NSString *)name address: (NSString *)address port: (NSUInteger)port;
+ (id)hostWithName: (NSString *)name netService: (NSNetService *)netService;
+ (id)hostWithName: (NSString *)name netServiceName: (NSString *)netServiceName netServiceDomain: (NSString *)netServiceDomain;
- (BOOL)hasSameAddressAs: (MIDINetworkHost *)other;

@property(nonatomic,readonly,retain) NSString *name;				/* user's tag */
@property(nonatomic,readonly,retain) NSString *address;				/* IP address or hostname */
@property(nonatomic,readonly) NSUInteger port;						/* UDP port */
@property(nonatomic,readonly,retain) NSString *netServiceName;		/* NSNetService name */
@property(nonatomic,readonly,retain) NSString *netServiceDomain;	/* NSNetService domain */
@end

/*__________________________________________________________________________________________________
	MIDINetworkConnection

	Add a connection to a session to connect to the remote host; remove it to disconnect.
*/
MIDI_EXPORT NS_CLASS_AVAILABLE(NA, 4_2)
@interface MIDINetworkConnection : NSObject {
@private
    __strong struct _MIDINetworkConnectionImpl *_impl;
}
+ (id)connectionWithHost: (MIDINetworkHost *)host;
@property(nonatomic,retain,readonly) MIDINetworkHost *host;
@end

/* __________________________________________________________________________________________________
	MIDINetworkSession
	
	A network session represents one CoreMIDI entity (source/destination pair). One session can
	have any number of connections. Output is broadcast to all connections; input from multiple
	connections is merged.
*/
MIDI_EXPORT NS_CLASS_AVAILABLE(NA, 4_2)
@interface MIDINetworkSession : NSObject {
@private
    __strong struct _MIDINetworkSessionImpl *_impl;
}

+ (MIDINetworkSession *)defaultSession; /* returns the singleton. */

/* Basic attributes of a session */
@property(nonatomic,getter=isEnabled) BOOL enabled;			/* disabled sessions do not appear on the network and cannot initiate or receive connections. default is NO (disabled). */
@property(nonatomic,readonly) NSUInteger networkPort;		/* UDP port */
@property(nonatomic,readonly) NSString *networkName;		/* name by which this session is advertised via Bonjour */
@property(nonatomic,readonly) NSString *localName;			/* name of this session's CoreMIDI entity (inherited by its endpoints) */
@property(nonatomic) MIDINetworkConnectionPolicy connectionPolicy;	/* who can connect to this session? see constants above. */

/*	The driver maintains a directory of MIDINetworkHosts, "contacts," for user convenience in initiating 
	connections, and for controlling incoming connection requests. */
- (NSSet *)contacts;							/* elements MIDINetworkHost. */
- (BOOL)addContact: (MIDINetworkHost *)contact;
- (BOOL)removeContact: (MIDINetworkHost *)contact;

- (NSSet *)connections;							/* elements are MIDINetworkConnection. */
- (BOOL)addConnection: (MIDINetworkConnection *)connection;
- (BOOL)removeConnection: (MIDINetworkConnection *)connection;

- (MIDIEndpointRef)sourceEndpoint;
- (MIDIEndpointRef)destinationEndpoint;
@end

#endif /* __OBJC__ */

#endif /* __MIDINetworkSession_h__ */
