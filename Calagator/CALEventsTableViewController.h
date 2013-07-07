//
//  CALEventsTableViewController.h
//  Calagator
//
//  Created by Don Miller on 7/6/13.
//  Copyright (c) 2013 GroundSpeed. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "jsonController.h"

@interface CALEventsTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *arrayEvents;
@property (nonatomic, strong) NSArray *arrayEventDates;
@property (nonatomic, strong) NSDictionary *dictEvents;

@end
