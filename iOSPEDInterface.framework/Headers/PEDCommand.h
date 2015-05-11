//
//  PEDCommand.h
//  iOSPEDInterface
//
//  Created by Donald King on 11/12/2013.
//  Copyright (c) 2013 TUSK SOLUTIONS UK LTD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EADSessionController.h"

/*
 * PEDCommand Protocol method that all subclasses
 * must override in other to send message to PED
 *
 */

@protocol PEDCommandDelegate <NSObject>
@required

#pragma mark - PED commands
-(void)preparePedForUse;
-(void)startTransactionWithParams:(NSString*)params;
-(void)continueTransactionWithParams:(NSString*)params;
-(void)displayText:(NSString*)text;

@end

@interface PEDCommand: NSObject

+ (id)sharedCommand;
-(BOOL)isPEDLoaded;

#pragma mark - Utility methods
-(NSString *) stringToHex:(NSString *)str;
-(NSData*) hexToBytes:(NSString *) hexaStr;
-(int) calculateLRC:(NSData*)sender;
-(void)sendDataToPED:(id)dataToSend;


@end