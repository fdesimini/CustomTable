//
//  DetailViewController.h
//  CustomTableRedux
//
//  Created by Frank Desimini on 2015-04-20.
//  Copyright (c) 2015 Eff Dee Productions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (strong, nonatomic) IBOutlet UITextView *ingredientsTextView;
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel; //this variable is so we can change what's written on it

@property (nonatomic, strong) Recipe *recipe;

//@property (strong, nonatomic) NSString *prepTime; //this variable is so we can pass along the data

@end
