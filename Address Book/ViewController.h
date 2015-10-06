//
//  ViewController.h
//  Address Book
//
//  Created by roberto arciniegas on 10/5/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddressBook.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameText;
@property (weak, nonatomic) IBOutlet UITextField *emailText;
@property (strong, nonatomic) AddressBook *myBook;

- (IBAction)newButton:(id)sender;
- (IBAction)updateButton:(id)sender;

@end

