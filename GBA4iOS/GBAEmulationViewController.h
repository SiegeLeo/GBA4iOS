//
//  GBAEmulationViewController.h
//  GBA4iOS
//
//  Created by Riley Testut on 7/19/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GBAEmulationViewController : UIViewController

@property (copy, nonatomic) NSString *romFilepath;

- (id)initWithROMFilepath:(NSString *)romFilepath;

@end
