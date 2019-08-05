//
//  ExtensionDelegate.h
//  JABPlanetaryHourToneBarrier WatchKit Extension
//
//  Created by Xcode Developer on 7/8/19.
//  Copyright © 2019 The Life of a Demoniac. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <WatchConnectivity/WatchConnectivity.h>
#import <UserNotifications/UserNotifications.h>

@protocol WatchConnectivityStatusInterfaceProtocol <NSObject>

- (void)updateStatusInterfaceForActivationState:(WCSessionActivationState)activationState reachability:(BOOL)reachable;
- (void)updatePeerDeviceStatusInterface:(NSDictionary *)receivedApplicationContext;
- (void)updateToneGeneratorStatus:(BOOL)playing;

@end

@interface ExtensionDelegate : NSObject <WKExtensionDelegate, WCSessionDelegate>

@property (nonatomic, weak) id<WatchConnectivityStatusInterfaceProtocol> watchConnectivityStatusInterfaceDelegate;
- (WCSession *)watchConnectivitySession;
@end
