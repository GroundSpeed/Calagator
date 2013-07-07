//
//  CALVenuesTableViewController.h
//  Calagator
//
//  Created by Don Miller on 7/7/13.
//  Copyright (c) 2013 GroundSpeed. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "jsonController.h"

@interface CALVenuesTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *arrayVenues;
@property (nonatomic, strong) NSArray *arrayVenueAddresses;
@property (nonatomic, strong) NSDictionary *dictVenues;

@end
