//
//  EMFExportViewController.h
//  Induction
//
//  Created by Mattt Thompson on 12/04/12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EMFExportWindowController.h"

@interface EMFExportViewController : NSViewController

@property (assign, nonatomic) id <EMFExportViewControllerDelegate> delegate;

@end
