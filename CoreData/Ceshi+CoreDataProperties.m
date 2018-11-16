//
//  Ceshi+CoreDataProperties.m
//  JSToolLibrary
//
//  Created by superA on 2018/11/2.
//  Copyright © 2018 shijiyuan. All rights reserved.
//
//

#import "Ceshi+CoreDataProperties.h"

@implementation Ceshi (CoreDataProperties)

+ (NSFetchRequest<Ceshi *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"Ceshi"];
}

@dynamic ceshiID;
@dynamic ceshiName;

@end
