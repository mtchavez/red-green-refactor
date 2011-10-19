//
//  ProjectDetailController.h
//  RedGreenRefactor
//
//  Created by Matthew Chavez on 10/18/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Project.h"

@interface ProjectDetailController : UIViewController {
    Project *project;
    NSManagedObjectContext *moc;
    UILabel *nameLabel;
}

@property (nonatomic, retain) Project *project;
@property (nonatomic, retain) NSManagedObjectContext *moc;
@property (nonatomic, retain) IBOutlet UILabel *nameLabel;

@end
