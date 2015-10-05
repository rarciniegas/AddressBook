//
//  AddressCard.h
//  Address Book
//
//  Created by roberto arciniegas on 10/5/15.
//  Copyright (c) 2015 roberto arciniegas. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface AddressCard : NSObject <NSCopying, NSCoding>

@property (nonatomic, copy) NSString *name, *email;

-(void) setName: (NSString *) theName andEmail: (NSString *) theEmail;
-(void) assignName: (NSString *) theName andEmail: (NSString *) theEmail;
-(NSComparisonResult) compareNames: (id) element;

-(void) print;

@end
