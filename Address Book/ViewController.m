//
//  ViewController.m
//  Address Book
//
//  Created by roberto arciniegas on 10/5/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//

#import "ViewController.h"
//#import "AddressBook.h"


@interface ViewController ()



@end

@implementation ViewController
@synthesize nameText, emailText, myBook;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    myBook = [AddressBook alloc];

    myBook = [myBook initWithName: @"Roberto’s Address book"];

    


}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)newButton:(id)sender {
    nameText.text = @"";
    emailText.text = @"";
}

- (IBAction)updateButton:(id)sender {
    
    AddressCard * myCard = [[AddressCard alloc] init];
    //AddressBook * myBook = [AddressBook alloc];

    
    // set up address card
    [myCard setName: nameText.text andEmail: emailText.text];
    //myBook = [myBook initWithName: @"Roberto’s Address book"];
    
    // Add card to the address book
    [myBook addCard: myCard];
    [myBook sort2];
    [myBook list];
    

}
@end
