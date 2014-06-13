//
//  EGGAppDelegate.h
//  EggBasket
//
//  Created by Paul Swagerty on 6/13/14.
//  Copyright (c) 2014 com.backyardeggbasket. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EGGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
