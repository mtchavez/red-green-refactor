//
//  RedGreenRefactorAppDelegate_iPhone.m
//  RedGreenRefactor
//
//  Created by Matthew Chavez on 10/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "RedGreenRefactorAppDelegate_iPhone.h"

@implementation RedGreenRefactorAppDelegate_iPhone

@synthesize splash, projController;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [super application:application didFinishLaunchingWithOptions:launchOptions];
    // Override point for customization after application launch.
    splash = [[splashView alloc] initWithImage:[UIImage imageNamed:@"splash.jpg"]];
    [splash setDelegate:self];
    [splash setDelay:1.0];
    [splash startSplash];
    return YES;
}

#pragma mark - Splash View 

- (void)splashIsDone {
    [[UIApplication sharedApplication] setStatusBarHidden:NO withAnimation:UIStatusBarAnimationNone];
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleBlackOpaque animated:NO];
    
    projController = [[ProjectsController alloc] initWithNibName:@"ProjectsController" bundle:nil];
    [projController setMoc:[super managedObjectContext]];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:projController];
    [[nav navigationBar] setBarStyle:UIBarStyleBlack];
    [projController release];
    [splash release];
    
    [self.window addSubview:nav.view];
    [self.window makeKeyAndVisible];
}

@end
