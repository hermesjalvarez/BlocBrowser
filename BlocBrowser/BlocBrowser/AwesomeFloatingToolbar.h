//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Hermes on 10/7/15.
//  Copyright (c) 2015 Hermes Alvarez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;
- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;

//	this will return YES if frame is applied.
//	NO if delegate deems that new frame would be invalid
- (BOOL) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didPinchToFrame:(CGRect)newFrame;

//- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end
