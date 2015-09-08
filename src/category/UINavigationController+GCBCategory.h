//
//  UINavigationController+GCBCategory.h
//  iOSTech
//
//  Created by Sea on 15/9/8.
//  Copyright (c) 2015年 Sea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (GCBCategory)

- (void)gcb_pushViewControllerNamed:(NSString *)aClassName animated:(BOOL)animated;
- (void)gcb_hidesBottomBarWhenPusheViewControllerNamed:(NSString *)aClassName animated:(BOOL)animated;

@end
