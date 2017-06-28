//
//  ViewController.m
//  iOSProdect
//
//  Created by Mac on 2017/4/o,28.
//  Copyright © 2017年 Mac. All rights reserved.

#import "ViewController.h"

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>

@interface ViewController ()



@end


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    UIImageView *bgimageV=[[UIImageView alloc]initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.width+30)];
    [self.view addSubview:bgimageV];
    bgimageV.backgroundColor=[UIColor redColor];
    
    UIButton *btn_close=[[UIButton alloc]initWithFrame:CGRectMake(10, 30, 44, 44)];
    [self.view addSubview:btn_close];
    [btn_close setBackgroundColor:[UIColor blueColor]];
    
    
    
    [MBProgressHUD showHUDAddedTo:self.view animated:YES];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
