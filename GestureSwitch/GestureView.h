//
//  GestureView.h
//  GestureSwitch
//
//  Created by 朱前进 on 16/10/25.
//  Copyright © 2016年 com.3wchina. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSObject+method.h"
#import "DDButton.h"
#import "DDLockView.h"

@interface GestureView : UIView

- (void)loadUI;

@property (nonatomic, strong) UILabel *titleLable;//标题
@property (nonatomic, strong) DDButton *cancleButton;//按钮
@property (nonatomic, strong) DDLockView *lockView;//手势试图

@property (nonatomic, strong) NSString* indexStr;//0表示修改,1表示启动进入

@end

