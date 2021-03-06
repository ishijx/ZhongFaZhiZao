//
//  PwLoginView.h
//  NeiSha
//
//  Created by paperclouds on 16/8/11.
//  Copyright © 2016年 chenzhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PwLoginView : UIView

@property (nonatomic,strong) UIScrollView *scrollView;
@property (nonatomic,strong) UIImageView *logoView; // logo
@property (nonatomic,strong) UILabel *phoneNumLbl; // 手机号
@property (nonatomic,strong) UITextField *phoneNumTF;
@property (nonatomic,strong) UIView *firstLine;
@property (nonatomic,strong) UILabel *passWdLbl; // 密码
@property (nonatomic,strong) UITextField *passWdTF;
@property (nonatomic,strong) UIView *secondLine;
@property (nonatomic,strong) UIButton *pwVisibleBtn; // 密码可见按钮
@property (nonatomic,strong) UIButton *vfLoginBtn; // 验证码登录按钮
@property (nonatomic,strong) UIButton *rememberPwBtn; // 记住密码按钮
@property (nonatomic,strong) UILabel *rememberPwLbl; // 记住密码文字
@property (nonatomic,strong) UIButton *loginBtn; // 登录按钮
@property (nonatomic,strong) UIButton *forgetPwBtn; // 忘记密码按钮
@property (nonatomic,strong) UIButton *quickRegisterBtn; // 快速注册按钮
@property (nonatomic,strong) UIImageView *bottomImage; // 底部图案
@property (nonatomic,strong) UIButton *closeBtn; // 关闭按钮
@end
