//
//  LoginViewController.h
//  House_calls
//
//  Created by Marek Zhang on 1/14/15.
//  Copyright (c) 2015 Timothy Acorda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;


- (IBAction)enterCredentials:(id)sender;
- (IBAction)backgroundTap:(id)sender;

@end
