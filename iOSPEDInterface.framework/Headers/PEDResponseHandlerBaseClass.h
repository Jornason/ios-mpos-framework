//
//  PEDResponseHandlerBaseClass.h
//  iOSPEDInterface
//
//  Created by Donald King on 11/12/2013.
//  Copyright (c) 2013 TUSK SOLUTIONS UK LTD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PEDResponseProtocol.h"

typedef void(^requestCompletedBlock) (BOOL response, id data);

@interface PEDResponseHandlerBaseClass : NSObject

@property (nonatomic, strong) id <PEDResponseProtocol> pedResponseDelegate;
/*
 * Protocol delegate property that is used to initialize
 * selected PED Response Handler.
 * This property gets initialized with the selected PED
 * Handler object
 *
 */

-(void)parseBytesReceived:(id)bytes;
/*
 * Override this method in your sub class. This manages bytes
 * received from the PED / EAD Session and its communication with
 * the initialized PED Handler object
 *
 */

-(void)performOnlineAuthorisationWithTrasactionData:(id)transactionData
                                        andCallBack:(requestCompletedBlock)completedResponse;



@end
