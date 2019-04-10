//
//  SITouchIDManager.h
//  Category
//
//  Created by Silence on 20/02/2017.
//  Copyright © 2017 silence. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSInteger const kTouchIDErrorUnvailable;
extern NSInteger const kTouchIDErrorUnAllow;


@interface SITouchIDManager : NSObject

typedef BOOL(^TouchIDAllowBlock)(SITouchIDManager *);
typedef void(^PassSuccessBlock)(SITouchIDManager *);
typedef void(^PassFailBlock)(SITouchIDManager *,NSError *);

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new UNAVAILABLE_ATTRIBUTE;

+ (instancetype)sharedManager ;

- (void)tryToPass;

@property (assign,nonatomic,readonly) BOOL isTouchIDAvailable;
@property (assign,nonatomic,readonly) BOOL isTouchIDAllowed;

@property (nonatomic,strong) NSString *alertDescription ;

@property (nonatomic,copy) TouchIDAllowBlock touchIDAllowBlock ;
@property (nonatomic,copy) PassSuccessBlock passSuccessBlock ;
@property (nonatomic,copy) PassFailBlock passFailBlock ;

@end
