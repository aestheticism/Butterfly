//
//  BFDraggableView.m
//  BFViewKit
//
//  Created by hudie on 15/2/4.
//  Copyright (c) 2015年 butterfly. All rights reserved.
//

#import "BFDraggableView.h"

@interface BFDraggableView ()

@property (nonatomic) UIPanGestureRecognizer *panGesture;

@end

@implementation BFDraggableView

@synthesize cagingArea = _cagingArea;
@synthesize handle = _handle;
@synthesize shouldMoveAlongX = _shouldMoveAlongX;
@synthesize shouldMoveAlongY = _shouldMoveAlongY;
@synthesize draggingEndedBlock = _draggingEndedBlock;
@synthesize draggingStartedBlock = _draggingStartedBlock;
@synthesize draggable = _draggable;

#pragma mark- View Init

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self setupDraggableView];
    }
    
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    
    [self setupDraggableView];
}

#pragma mark- Setup View

- (void)setupDraggableView {
    _draggable = YES;
    _shouldMoveAlongX = YES;
    _shouldMoveAlongY = YES;

    // 添加手势
    [self enableDragging];
}

- (void)enableDragging
{
    self.panGesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(handlePan:)];
    [self.panGesture setMaximumNumberOfTouches:1];
    [self.panGesture setMinimumNumberOfTouches:1];
    [self.panGesture setCancelsTouchesInView:NO];
    [self setHandle:CGRectMake(0, 0, self.frame.size.width, self.frame.size.height)];
    [self addGestureRecognizer:self.panGesture];
}

#pragma mark- Handle PanGesture

- (void)handlePan:(UIPanGestureRecognizer*)sender
{
    // Check to make you drag from dragging area
    CGPoint locationInView = [sender locationInView:self];
    if (!CGRectContainsPoint(self.handle, locationInView)) {
        return;
    }
    
    [self adjustAnchorPointForGestureRecognizer:sender];
    
    if (sender.state == UIGestureRecognizerStateBegan && self.draggingStartedBlock) {
        self.draggingStartedBlock();
    }
    
    if (sender.state == UIGestureRecognizerStateEnded && self.draggingEndedBlock) {
        self.draggingEndedBlock();
    }
    
    CGPoint translation = [sender translationInView:[self superview]];
    
    CGFloat newXOrigin = CGRectGetMinX(self.frame) + (([self shouldMoveAlongX]) ? translation.x : 0);
    CGFloat newYOrigin = CGRectGetMinY(self.frame) + (([self shouldMoveAlongY]) ? translation.y : 0);
    
    CGRect cagingArea = self.cagingArea;
    
    CGFloat cagingAreaOriginX = CGRectGetMinX(cagingArea);
    CGFloat cagingAreaOriginY = CGRectGetMinY(cagingArea);
    
    CGFloat cagingAreaRightSide = cagingAreaOriginX + CGRectGetWidth(cagingArea);
    CGFloat cagingAreaBottomSide = cagingAreaOriginY + CGRectGetHeight(cagingArea);
    
    if (!CGRectEqualToRect(cagingArea, CGRectZero)) {
        
        // Check to make sure the view is still within the caging area
        if (newXOrigin <= cagingAreaOriginX ||
            newYOrigin <= cagingAreaOriginY ||
            newXOrigin + CGRectGetWidth(self.frame) >= cagingAreaRightSide ||
            newYOrigin + CGRectGetHeight(self.frame) >= cagingAreaBottomSide) {
            
            // Don't move
            newXOrigin = CGRectGetMinX(self.frame);
            newYOrigin = CGRectGetMinY(self.frame);
        }
    }
    
    [self setFrame:CGRectMake(newXOrigin,
                              newYOrigin,
                              CGRectGetWidth(self.frame),
                              CGRectGetHeight(self.frame))];
    
    [sender setTranslation:(CGPoint){0, 0} inView:[self superview]];
}

- (void)adjustAnchorPointForGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer
{
    if (gestureRecognizer.state == UIGestureRecognizerStateBegan) {
        UIView *piece = self;
        CGPoint locationInView = [gestureRecognizer locationInView:piece];
        CGPoint locationInSuperview = [gestureRecognizer locationInView:piece.superview];
        
        piece.layer.anchorPoint = CGPointMake(locationInView.x / piece.bounds.size.width, locationInView.y / piece.bounds.size.height);
        piece.center = locationInSuperview;
    }
}

#pragma mark- Property

- (void)setDraggable:(BOOL)draggable
{
    [self.panGesture setEnabled:draggable];
}

- (void)setHandle:(CGRect)handle {
    CGRect relativeFrame = CGRectMake(0, 0, self.frame.size.width, self.frame.size.height);
    if (CGRectContainsRect(relativeFrame, handle)) {
        _handle = handle;
    }
}

- (void)setCagingArea:(CGRect)cagingArea {
    if (CGRectEqualToRect(cagingArea, CGRectZero) ||
        CGRectContainsRect(cagingArea, self.frame)) {
        _cagingArea = cagingArea;
    }
}

@end
