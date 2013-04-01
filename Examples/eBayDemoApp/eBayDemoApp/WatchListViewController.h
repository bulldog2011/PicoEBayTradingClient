//
//  WatchListViewController.h
//  eBayDemoApp
//
//  Created by bulldog on 13-4-1.
//  Copyright (c) 2013 Leansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WatchListViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate>  {
    // container holding watch list results;
    NSMutableArray *_tableData;
}

@property (retain, nonatomic) IBOutlet UITableView *tableView;

@end
