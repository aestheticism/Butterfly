//
//  BFDraggableView.h
//  BFViewKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 butterfly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BFDraggableView : UIView

/** Disable or enable the view dragging
 *
 * @param draggable The boolean that enables or disables the draggable state
 */
@property (nonatomic, getter=isDraggable) BOOL draggable;

/**
 A caging area such that the view can not be moved outside
 of this frame.
 
 If @c cagingArea is not @c CGRectZero, and @c cagingArea does not contain the
 view's frame then this does nothing (ie. if the bounds of the view extend the
 bounds of @c cagingArea).
 
 Optional. If not set, defaults to @c CGRectZero, which will result
 in no caging behavior.
 */
@property (nonatomic) CGRect cagingArea;

/**
 Restricts the area of the view where the drag action starts.
 
 Optional. If not set, defaults to self.view.
 */
@property (nonatomic) CGRect handle;

/**
 Restricts the movement along the X axis
 */
@property (nonatomic) BOOL shouldMoveAlongX;

/**
 Restricts the movement along the Y axis
 */
@property (nonatomic) BOOL shouldMoveAlongY;


/**
 Notifies when dragging started
 */
@property (nonatomic, copy) void (^draggingStartedBlock)();

/**
 Notifies when dragging ended
 */
@property (nonatomic, copy) void (^draggingEndedBlock)();

@end
