//
//  NSArray+GCBCategory.h
//  iOSTech
//
//  Created by Sea on 15/9/8.
//  Copyright (c) 2015年 Sea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (GCBCategory)

- (NSArray *)gcb_subContextList;

@end

@interface NSArray (GCBCategory)

- (id)gcb_objectAtTVIndexPath:(NSIndexPath *)indexPath;
- (id)gcb_objectAtCVIndexPath:(NSIndexPath *)indexPath;

@end
