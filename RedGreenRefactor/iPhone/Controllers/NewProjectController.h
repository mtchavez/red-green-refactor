//
//  NewProjectController.h
//  RedGreenRefactor
//
//  Created by Matthew Chavez on 10/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProjectsController.h"

@interface NewProjectController : UIViewController {
    ProjectsController *projectController;
    UITextField *nameField;
}

@property (nonatomic, retain) ProjectsController *projectController;
@property (nonatomic, retain) IBOutlet UITextField *nameField;

- (id)initWithProjectController:(ProjectsController *)projController;

@end
