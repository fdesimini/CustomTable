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
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (strong, nonatomic) IBOutlet UITextView *ingredientsTextView;

@property (nonatomic, strong) Recipe *recipe;

//I'm implementing this myself (not in book)
//@property (strong, nonatomic) NSString *prepTime; //this variable is so we can pass along the data

@end
