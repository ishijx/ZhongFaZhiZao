//
//  IntelligenceCollectionViewCell.m
//  ZhongFaZhiZao
//
//  Created by chenzhiqiang on 2016/12/15.
//  Copyright © 2016年 chenzhiqiang. All rights reserved.
//

#import "IntelligenceCollectionViewCell.h"

@implementation IntelligenceCollectionViewCell

- (instancetype)initWithFrame:(CGRect)frame{

    self = [super initWithFrame:frame];
    
    if (self) {
        
        [self createCell];
    }
    
    return self;
}

- (void)createCell{

    self.backgroundColor = [UIColor cyanColor];
    
    self.IntelligenceImg = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, self.frame.size.width, self.frame.size.height)];
    
    [self.contentView addSubview:self.IntelligenceImg];
}

@end
