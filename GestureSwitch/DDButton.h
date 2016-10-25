//
//  DDButton.h
//  
//
//  Created by yyd on 15/8/4.
//  Copyright (c) 2015年 YangAnDong. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^buttonBlock)();

@interface DDButton : UIButton
// 通过类方法得到一个按钮
// 1.驼峰 2.做到见名知意
//无绑定事件
+(DDButton *)buttonWitnFram:(CGRect)frame title:(NSString *)title textColor:(UIColor *)color andTextFont:(NSInteger)font;

+(DDButton *)buttonWitnFram:(CGRect)frame title:(NSString *)title selectedTitle:(NSString *)selectedTitle textColor:(UIColor *)color andTextFont:(NSInteger)font;

// 实现block的方法
+(DDButton *)buttonWitnFram:(CGRect)frame title:(NSString *)title image:(NSString *)image andBlock:(buttonBlock)buttonBlock;
+(DDButton *)buttonWitnFram:(CGRect)frame title:(NSString *)title image:(NSString *)image selectImage:(NSString *)selectImage andBlock:(buttonBlock)buttonBlock;
@end
