//
//  GCBViewDelegate.h
//  
//
//  Created by Sea on 15/9/8.
//
//

#import <Foundation/Foundation.h>

@protocol GCBViewDelegate <NSObject>

- (void)view:(UIView *)view clickElement:(UIView *)element;

@end
