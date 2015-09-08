//
//  UINavigationController+GCBCategory.m
//  iOSTech
//
//  Created by Sea on 15/9/8.
//  Copyright (c) 2015年 Sea. All rights reserved.
//

#import "UINavigationController+GCBCategory.h"

@implementation UINavigationController (GCBCategory)


- (void)gcb_pushViewControllerNamed:(NSString *)aClassName animated:(BOOL)animated
{
    UIViewController * vc = [self viewControllerNamed:aClassName];
    
    [self pushViewController:vc animated:animated];
}


- (UIViewController *)viewControllerNamed:(NSString *)aClassName
{
    assert([aClassName length]!=0);
    
    Class GCBViewControllerClass = NSClassFromString(aClassName);
    
    UIViewController * aViewController = [[GCBViewControllerClass alloc] initWithNibName:aClassName bundle:nil];
    
    return aViewController;
}

- (void)gcb_pushViewControllerNamed:(NSString *)aClassName;
{
    UIViewController * vc = [self viewControllerNamed:aClassName];
    
    [vc setHidesBottomBarWhenPushed:YES];
    [self pushViewController:vc animated:YES];
}

- (void)gcb_hidesBottomBarWhenPusheViewControllerNamed:(NSString *)aClassName animated:(BOOL)animated;
{
    UIViewController * vc = [self viewControllerNamed:aClassName];
    
    [vc setHidesBottomBarWhenPushed:YES];
    [self pushViewController:vc animated:YES];
}


@end
