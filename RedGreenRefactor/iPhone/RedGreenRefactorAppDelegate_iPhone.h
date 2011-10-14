//
//  RedGreenRefactorAppDelegate_iPhone.h
//  RedGreenRefactor
//
//  Created by Matthew Chavez on 10/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "RedGreenRefactorAppDelegate.h"
#import "splashView.h"
#import "ProjectsController.h"

@interface RedGreenRefactorAppDelegate_iPhone : RedGreenRefactorAppDelegate <splashViewDelegate> {
    splashView *splash;
    ProjectsController *projController;
}

@property (nonatomic, retain) splashView *splash;
@property (nonatomic, retain) ProjectsController *projController;

- (void)splashIsDone;

@end
