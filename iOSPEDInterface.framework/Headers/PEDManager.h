//
//  PEDManager.h
//  iOSPEDInterface
//
//  Created by Donald King on 11/12/2013.
//  Copyright (c) 2013 TUSK SOLUTIONS UK LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PEDResponseHandlerBaseClass;
@interface PEDManager : NSObject

@property (nonatomic, strong) PEDManager *pedObject;
@property (nonatomic, strong) PEDResponseHandlerBaseClass *pedResponseHandlerObject;
@property (nonatomic, strong) NSArray *PEDClassArray;
@property (nonatomic, strong) NSArray *PEDResponseHandlerArray;

+ (id)sharedManager;

// Load the ped classes and handlers
-(void)LoadPEDClassesAndHandlersFromPlistNamed:(NSString*)plistName;

// PED & Response Handler Selection
-(void)initPED:(NSString*)PEDClassName andResponseHandler:(NSString*)PEDResponseHandlerClassName;

// Returns the default PED and Handler initilized
-(id)defaultPED;
-(id)defaultHandler;

@end
