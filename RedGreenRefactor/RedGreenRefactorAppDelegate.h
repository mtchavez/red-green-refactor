//
//  RedGreenRefactorAppDelegate.h
//  RedGreenRefactor
//
//  Created by Matthew Chavez on 10/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "splashView.h"

@interface RedGreenRefactorAppDelegate : NSObject <UIApplicationDelegate, splashViewDelegate> {
    splashView *splash;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, retain) splashView *splash;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
- (void)splashIsDone;

@end
