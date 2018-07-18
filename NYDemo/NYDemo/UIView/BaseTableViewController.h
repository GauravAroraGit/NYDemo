//
//  BaseTableViewController.h
//  NYDemo
//
//  Created by apple on 7/17/18.
//  Copyright © 2018 Gaurav. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "ArticleDetailViewController.h"
#import "ArticleTableViewCell.h"
#import "NYDemo-Bridging-Header.h"

@interface BaseTableViewController : UITableViewController
@property (nonatomic, strong) NSArray<ArticleViewModel *> *viewModels;

@end
