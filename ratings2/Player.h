//
//  Player.h
//  ratings2
//
//  Created by William on 8/24/12.
//  Copyright (c) 2012 William. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
