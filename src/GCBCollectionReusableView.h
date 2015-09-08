//
//  GCBCollectionReusableView.h
//  
//
//  Created by Sea on 15/9/8.
//
//

#import <UIKit/UIKit.h>
#import "GCBViewDelegate.h"

@interface GCBCollectionReusableView : UICollectionReusableView
{
    
}

/*!
 *  @override
 */
- (void)viewAttribute:(id)model;

@property (nonatomic, assign) id<GCBViewDelegate> gcbViewDelegate;

@end
