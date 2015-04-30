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
    //sets the title of navigation bar as the name of recipe
    self.title = self.recipe.name;
    //configure the preparation time label and set the recipe image
    self.prepTimeLabel.text = self.recipe.prepTime;
    self.recipeImageView.image = [UIImage imageNamed:self.recipe.image];
    
    //turns the ingredients array into multiple lines of text for the ingredients text view.
    NSMutableString *ingredientsText = [NSMutableString string];
    for (NSString *ingredient in self.recipe.ingredients) {
        [ingredientsText appendFormat:@"%@\n", ingredient];
    }
    
    self.ingredientsTextView.text = ingredientsText;
}

@end
