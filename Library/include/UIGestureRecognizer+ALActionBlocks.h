//
//  UIGestureRecognizer+ALActionBlocks.h
//  ALActionBlocks
//
//  Created by Andy LaVoy on 10/17/13.
//  Copyright (c) 2013 Andy LaVoy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIControl+ALActionBlocks.h"

@interface UIGestureRecognizer (ALActionBlocks)

+ (instancetype)gestureRecognizerWithBlock:(ALActionBlock)actionBlock;
- (void)setBlock:(ALActionBlock)actionBlock;

@end
