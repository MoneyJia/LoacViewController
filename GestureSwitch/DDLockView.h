//
//  DDLockView.h
//  cangchudai
//
//  Created by ios05 on 15/10/8.
//  Copyright (c) 2015年 app. All rights reserved.
//

//#import "CCDRootView.h"
#import <UIKit/UIKit.h>

@class DDLockView;

@protocol DDLockViewDelegate <NSObject>

@optional
- (void)lockView:(DDLockView *)lockView didFinishPath:(NSString *)path;

@end

@interface DDLockView : UIView

@property (nonatomic,assign) id <DDLockViewDelegate> delegate;
@end
