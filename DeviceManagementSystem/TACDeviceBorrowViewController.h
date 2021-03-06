//
//  TACDeviceBorrowViewController.h
//  DeviceManagementSystem
//
//  Created by Tom Hu on 7/11/14.
//  Copyright (c) 2014 Tom Hu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TACDeviceModel;

@interface TACDeviceBorrowViewController : UITableViewController <UITextFieldDelegate>

@property (nonatomic, weak) IBOutlet UILabel *deviceNameLabel;
@property (nonatomic, weak) IBOutlet UILabel *deviceTypeLabel;
@property (nonatomic, weak) IBOutlet UITextField *nameTextField;
@property (nonatomic, weak) IBOutlet UITextField *phoneTextField;
@property (nonatomic, strong) TACDeviceModel *deviceModel;

@end
