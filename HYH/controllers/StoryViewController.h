//
//  StoryViewController.h
//  NewTD
//
//  Created by 工业设计中意（湖南） on 14-5-13.
//  Copyright (c) 2014年 中意工业设计（湖南）有限责任公司. All rights reserved.
//

#import "ColumnViewController.h"

@interface StoryViewController : ColumnViewController
{
    IBOutlet UILabel *storyTitleLabel;
}
@property (strong, nonatomic) IBOutlet UILabel *storyTitleLabel;

- (IBAction)changePage:(id)sender;

@end
