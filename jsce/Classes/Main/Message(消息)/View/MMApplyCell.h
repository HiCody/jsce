//
//  MMApplyCell.h
//  jsce
//
//  Created by mac on 15/10/13.
//  Copyright © 2015年 Yuantu. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol ApplyFriendCellDelegate;
@interface MMApplyCell : UITableViewCell

@property (nonatomic) id<ApplyFriendCellDelegate> delegate;

@property (strong, nonatomic) NSIndexPath *indexPath;

@property (strong, nonatomic) UIImageView *headerImageView;//头像
@property (strong, nonatomic) UILabel *titleLabel;//标题
@property (strong, nonatomic) UILabel *contentLabel;//详情
@property (strong, nonatomic) UIButton *addButton;//接受按钮
@property (strong, nonatomic) UIButton *refuseButton;//拒绝按钮
@property (strong, nonatomic) UIView *bottomLineView;

+ (CGFloat)heightWithContent:(NSString *)content;

@end


@protocol ApplyFriendCellDelegate <NSObject>

- (void)applyCellAddFriendAtIndexPath:(NSIndexPath *)indexPath;
- (void)applyCellRefuseFriendAtIndexPath:(NSIndexPath *)indexPath;

@end