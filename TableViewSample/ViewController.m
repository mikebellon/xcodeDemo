//
//  ViewController.m
//  TableViewSample
//
//  Created by Mike Bellon on 4/7/16.
//  Copyright © 2016 Mike Bellon. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (NSManagedObjectContext*)managedObjectContext
{
    return [[[NSApplication sharedApplication] delegate] managedObjectContext];
}

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}

- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}

@end
