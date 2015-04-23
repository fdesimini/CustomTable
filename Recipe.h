//
//  Recipe.h
//  CustomTableRedux
//
//  Created by Frank Desimini on 2015-04-23.
//  Copyright (c) 2015 Eff Dee Productions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name; //recipe name
@property (nonatomic, strong) NSString *prepTime; //prep time
@property (nonatomic, strong) NSString *image; //image filename

@end
