//
//  GestureView.m
//  GestureSwitch
//
//  Created by 朱前进 on 16/10/25.
//  Copyright © 2016年 com.3wchina. All rights reserved.
//

#import "GestureView.h"

//viewcontroller
#define kUISCREENWIDTH  [UIScreen mainScreen].bounds.size.width     //屏幕高度
#define kUISCREENHEIGHT [UIScreen mainScreen].bounds.size.height    //屏幕宽度

@interface GestureView ()

@end

@implementation GestureView

- (void)loadUI
{
    self.backgroundColor = [UIColor redColor];
    
    UILabel *titleLable = [UILabel labelWithFram:CGRectMake(0, 50, kUISCREENWIDTH, 30) font:16 tintColor:[UIColor grayColor] andTitle:@"请绘制手势密码解锁"];
    titleLable.textAlignment = NSTextAlignmentCenter;
    self.titleLable = titleLable;
    [self addSubview:titleLable];
 
    DDLockView *lockView = [[DDLockView alloc]initWithFrame:CGRectMake(0, 180, kUISCREENWIDTH, kUISCREENWIDTH-59)];
    lockView.backgroundColor = [UIColor clearColor];
    self.lockView = lockView;
    [self addSubview:lockView];
    
    DDButton *cancleButton = [DDButton buttonWitnFram:CGRectMake(0, kUISCREENHEIGHT-60, kUISCREENWIDTH, 60) title:@"取消" selectedTitle:nil textColor:[UIColor whiteColor] andTextFont:16];
    self.cancleButton = cancleButton;
    [self addSubview:cancleButton];
    
}

@end
