//
//  ArticleTableViewCell.h
//  NYDemo
//
//  Created by apple on 7/17/18.
//  Copyright © 2018 Gaurav. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ArticleViewModel.h"


@interface ArticleTableViewCell : UITableViewCell
- (void)configureWithViewModel:(ArticleViewModel *)viewModel;

@end

