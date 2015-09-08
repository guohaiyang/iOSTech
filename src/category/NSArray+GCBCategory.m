//
//  NSArray+GCBCategory.m
//  iOSTech
//
//  Created by Sea on 15/9/8.
//  Copyright (c) 2015年 Sea. All rights reserved.
//

#import "NSArray+GCBCategory.h"


@implementation NSObject (GCBCategory)

- (NSArray *)gcb_subContextList;
{
    return nil;
}

@end

@implementation NSArray (GCBCategory)

- (id)gcb_objectAtTVIndexPath:(NSIndexPath *)indexPath
{
    NSArray * subArray = [[self objectAtIndex:indexPath.section] gcb_subContextList];
    return [subArray objectAtIndex:indexPath.row];
}

- (id)gcb_objectAtCVIndexPath:(NSIndexPath *)indexPath
{
    NSArray * subArray = [[self objectAtIndex:indexPath.section] gcb_subContextList];
    return [subArray objectAtIndex:indexPath.item];
}


@end
