//
//  PEDResponseProtocol.h
//  iOSPEDInterface
//
//  Created by Donald King on 11/12/2013.
//  Copyright (c) 2013 TUSK SOLUTIONS UK LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PEDResponseProtocol <NSObject>

@optional

-(void)PEDready;
-(void)confirmAmount;
-(void)transactionCanceled;
-(void)cardRemovedTransactionCompleted;
-(void)cardNotFound;
-(void)cardFound;
-(void)cardSwiped;
-(void)pinEntryMode;
-(void)incorrectPin;
-(void)pinCompleted;
-(void)cardLocked;
-(void)invalidCard;
-(void)processPaymentWithData:(id)data;
-(void)paymentApproved;
-(void)paymentDeclined;

@end
