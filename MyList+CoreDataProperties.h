//
//  MyList+CoreDataProperties.h
//  TableViewSample
//
//  Created by Mike Bellon on 4/7/16.
//  Copyright © 2016 Mike Bellon. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "MyList.h"

NS_ASSUME_NONNULL_BEGIN

@interface MyList (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *key;
@property (nullable, nonatomic, retain) NSNumber *level;
@property (nullable, nonatomic, retain) NSString *name;

@end

NS_ASSUME_NONNULL_END
