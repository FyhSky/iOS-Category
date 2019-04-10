//
//  NSString+JSONValue.h
//  Category
//
//  Created by Silence on 29/12/2016.
//  Copyright © 2016 silence. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JSONValue)

/// JSON String 转换为字典
- (NSDictionary *)JSONDictionaryValue ;

/// JSON String 转换为数组
- (NSArray *)JSONArrayValue ;

@end
