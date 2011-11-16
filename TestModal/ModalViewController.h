//
//  ModalView.h
//  TestModal
//
//  Created by Chetan Pungaliya on 11/15/11.
//  Copyright (c) 2011 Poshmark, Inc. All rights reserved.
//

@protocol ModalViewControllerDelegate <NSObject>

- (void)dismissViewController:(UIViewController *)viewController;

@end

@interface ModalViewController : UIViewController

- (IBAction)close:(id)sender;

@property (assign) id<ModalViewControllerDelegate> delegate;

@end
