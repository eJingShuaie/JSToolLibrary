//
//  AppDelegate.h
//  JSToolLibrary
//
//  Created by superA on 2018/10/31.
//  Copyright © 2018 shijiyuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

