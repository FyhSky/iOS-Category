//
//  SICoreGraphicsMacros.h
//  Category
//
//  Created by Silence on 16/02/2017.
//  Copyright © 2017 silence. All rights reserved.
//

#define CGizeMultiply(size, mult) CGSizeMake(size.width * mult, size.height * mult)

#define CGizeWith320(size) CGizeMultiply(size, [UIScreen mainScreen].bounds.size.width / 320)
#define CGizeWith375(size) CGizeMultiply(size, [UIScreen mainScreen].bounds.size.width / 375)

