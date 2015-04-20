//
//  DetailViewController.h
//  CustomTableRedux
//
//  Created by Frank Desimini on 2015-04-20.
//  Copyright (c) 2015 Eff Dee Productions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *recipeLabel;
@property (strong, nonatomic) NSString *recipeName;

@end
