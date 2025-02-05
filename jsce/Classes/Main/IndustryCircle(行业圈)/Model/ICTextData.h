//
//  ICTextData.h
//  jsce
//
//  Created by mac on 15/9/17.
//  Copyright © 2015年 Yuantu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ICMessageBody.h"

typedef enum : NSUInteger{
    TypeShuoshuo,
    TypeFavour,
    TypeReply,

} TypeView;

@interface ICTextData : NSObject

@property (nonatomic,strong) ICMessageBody  *messageBody;
@property (nonatomic,strong) NSMutableArray *replyDataSource;//回复内容数据源（未处理）

#pragma mark - 高度部分
@property (nonatomic,assign) float           replyHeight;//回复高度
@property (nonatomic,assign) float           shuoshuoHeight;//折叠说说高度
@property (nonatomic,assign) float           unFoldShuoHeight;//展开说说高度
@property (nonatomic,assign) float           favourHeight;//收藏的高度
@property (nonatomic,assign) float           showImageHeight;//展示图片的高度

@property (nonatomic,strong) NSMutableArray *completionReplySource;//回复内容数据源（处理）
@property (nonatomic,strong) NSMutableArray *attributedDataReply;//回复部分附带的点击区域数组
@property (nonatomic,strong) NSMutableArray *attributedDataShuoshuo;//说说部分附带的点击区域数组
@property (nonatomic,strong) NSMutableArray *attributedDataFavour;//收藏部分附带的点击区域数组


@property (nonatomic,strong) NSArray        *showImageArray;//图片数组
@property (nonatomic,strong) NSMutableArray *favourArray;//收藏昵称数组
@property (nonatomic,strong) NSMutableArray *defineAttrData;//自行添加 元素为每条回复中的自行添加的range组成的数组 如：第一条回复有（0，2）和（5，2） 第二条为（0，2）。。。。

@property (nonatomic,assign) BOOL            hasFavour;//是否赞过
@property (nonatomic,assign) BOOL            foldOrNot;//是否折叠
@property (nonatomic,copy) NSString       *showShuoShuo;//说说部分
@property (nonatomic,copy) NSString       *completionShuoshuo;//说说部分（处理后）
@property (nonatomic,copy) NSString       *showFavour;//收藏部分
@property (nonatomic,copy) NSString       *completionFavour;//收藏部分(处理后)
@property (nonatomic,assign) BOOL            islessLimit;//是否小于最低限制 宏定义最低限制是 limitline

/**
 *  计算高度
 *
 *  @param sizeWidth view 宽度
 *
 *  @return 返回高度
 */
- (float) calculateReplyHeightWithWidth:(float)sizeWidth;

/**
 *  计算折叠还是展开的说说的高度
 *
 *  @param sizeWidth 宽度
 *  @param isUnfold  展开与否
 *
 *  @return 高度
 */
- (float) calculateShuoshuoHeightWithWidth:(float)sizeWidth withUnFoldState:(BOOL)isUnfold;

/**
 *  收藏区域高度
 *
 *  @param sizeWidth 宽度
 *
 *  @return 高度
 */
- (float)calculateFavourHeightWithWidth:(float)sizeWidth;

@end
