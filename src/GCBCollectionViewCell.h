//
//  GCBCollectionViewCell.h
//  iOSTech
//
//  Created by Sea on 15/9/8.
//  Copyright (c) 2015年 Sea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GCBCellDelegate.h"

@interface GCBCollectionViewCell : UICollectionViewCell
{
    
}

@property (nonatomic, retain) NSIndexPath * indexPath;

- (void)viewAttribute:(id)model;

@property (nonatomic, assign) id<GCBCellDelegate> gcbCellDelegate;

@end
