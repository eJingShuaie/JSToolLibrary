//
//  Ceshi+CoreDataProperties.h
//  JSToolLibrary
//
//  Created by superA on 2018/11/2.
//  Copyright © 2018 shijiyuan. All rights reserved.
//
//

#import "Ceshi+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Ceshi (CoreDataProperties)

+ (NSFetchRequest<Ceshi *> *)fetchRequest;

@property (nonatomic) int16_t ceshiID;
@property (nullable, nonatomic, copy) NSString *ceshiName;

@end

NS_ASSUME_NONNULL_END
