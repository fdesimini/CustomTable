//
//  DetailViewController.m
//  CustomTableRedux
//
//  Created by Frank Desimini on 2015-04-20.
//  Copyright (c) 2015 Eff Dee Productions. All rights reserved.
//

#import "DetailViewController.h"

@implementation DetailViewController

- (void)viewDidLoad
{
    //Set the label text with the selected recipe
   //self.recipeLabel.text = self.recipeName;
    //Set the label text with the recipe prep time
   // self.prepTimeLabel.text = self.prepTime;
    
    self.title = self.recipe.name;
    self.prepTimeLabel.text = self.recipe.prepTime;
    self.recipeImageView.image = [UIImage imageNamed:self.recipe.image];
    
    NSMutableString *ingredientsText=[NSMutableString string];
    for(NSString* ingredient in self.recipe.ingredients){
        [ingredientsText appendFormat:@"%@\n", ingredient];
    }
    
    self.ingredientsTextView.text=ingredientsText;
    
}

@end
