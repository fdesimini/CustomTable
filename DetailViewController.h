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
//I'm trying to implement this myself
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel; //this variable is so we can change what's written on it
@property (strong, nonatomic) NSString *prepTime; //this variable is so we can pass along the data

@end
