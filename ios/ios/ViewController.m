//
//  ViewController.m
//  ios
//
//  Created by Mohammed Alyousef on 12/07/2022.
//

#import "ViewController.h"

extern void *floui_main(void *, void *, void *);

@interface ViewController ()

@end

@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    floui_main((void *)CFBridgingRetain(self), nil, nil);
}

@end

