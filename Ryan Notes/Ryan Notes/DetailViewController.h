//
//  DetailViewController.h
//  Ryan Notes
//
//  Created by Ryan Alvarado on 5/15/14.
//  Copyright (c) 2014 iOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UITextView *tView;


@end
