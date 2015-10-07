//
//  ViewController.h
//  BlocBrowser
//
//  Created by Hermes on 10/5/15.
//  Copyright (c) 2015 Hermes Alvarez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;

@end

