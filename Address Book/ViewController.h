//
//  ViewController.h
//  Address Book
//
//  Created by roberto arciniegas on 10/5/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameText;
@property (weak, nonatomic) IBOutlet UITextField *emailText;
- (IBAction)newButton:(id)sender;

@end

