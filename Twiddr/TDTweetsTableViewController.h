//
//  TDTweetsTableViewController.h
//  Twidder-proto
//
//  Created by Daiwei Lu on 3/22/14.
//  Copyright (c) 2014 Daiwei Lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TDTwitterAccount;


@interface TDTweetsTableViewController : UITableViewController

@property (strong, nonatomic) TDTwitterAccount *account;
@property (strong, nonatomic) NSDictionary *author;
@property (strong, nonatomic) NSMutableArray *tweets;

@end