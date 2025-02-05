//
//  IndustryCircleMacros.h
//  jsce
//
//  Created by mac on 15/9/18.
//  Copyright © 2015年 Yuantu. All rights reserved.
//

#ifndef IndustryCircleMacros_h
#define IndustryCircleMacros_h

typedef NS_ENUM(NSInteger, GestureType) {
    
    TapGesType = 1,
    LongGesType,
    
};
#define DELAYEXECUTE(delayTime,func) (dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayTime * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{func;}))

#define kSelf_SelectedColor [UIColor colorWithWhite:0 alpha:0.4] //点击背景  颜色
#define kUserName_SelectedColor [UIColor colorWithWhite:0 alpha:0.25]//点击姓名颜色

#define EmotionItemPattern    @"\\[em:(\\d+):\\]"

#define PlaceHolder @" "

#define AttributedImageNameKey      @"ImageName"

#define ShowImage_H (screenWidth -20-40)/3 //图片尺寸

#define limitline 4 //行数限制
#define TableHeader 50 //头像高度
#define offSet_X 20 //边距
#define kShuoshuoDistance 10 //说说和头像的间距
#define kFoldBtnDistance  5 //折叠后的说说和按钮间距
#define kImageDistance 10 //说说和图片的间隔
#define kLocationDistance 10//地理位置到说说或图片的间距
#define kReplyBtnDistance 20 //回复按钮距离
#define kReply_FavourDistance 8 //回复到收藏的距离
#define kBottom 20 //底部间距

#define TEXTCOLOR    [UIColor colorWithRed:60/255.0 green:90/255.0 blue:141/255.0 alpha:1.0] //特殊意义字体的颜色
#define kReplyBackGround [UIColor colorWithRed:232/255.0 green:237/255.0 blue:245/255.0 alpha:1.0] //回复区域背景颜色
#define screenWidth  [UIScreen mainScreen].bounds.size.width
#define screenHeight  [UIScreen mainScreen].bounds.size.height

#define kContentText1 @"思想不会流血，不会感到痛苦，思想不会死去"

#define kContentText2 @"这张面具之下，不是肉体，而是一种思想但思想是不怕子弹的"

#define kContentText3 @"Most people are so ungrateful to be alive. But not you. Not anymore. "

#define kContentText4 @"活着本来没有什么意义，但只要活着就会发现很多有趣的13688919929事，就像你发现了花，我又发现你一样[em:03:]。"

#define kContentText5 @"地狱的房间已满，于是，[em:03:][em:03:]死亡爬上了人间如果一个人觉得他自己死的很不值,就会把诅咒留在他生前接触过的地方[em:03:]只要有人经过这些地方[em:02:]就会被咒语套中如果一个人觉得他自己死的很不值,就会把诅咒留在他生前接触过的地方[em:03:]只要有人经过这些地方[em:03:]就会被咒语套中如果一个人觉得他自己死的很不值,就会把诅咒留在他生前接触过的地方[em:03:]只要有人经过这些地方[em:03:]就会被咒语套中如果一个人觉得他自己死的很不值,就会把诅咒留在他生前接触过的地方[em:02:]只要有人经过这些地方[em:03:]就会被咒语套中"

#define kContentText6 @"[em:03:]如果一个人觉得他自己死的很不值,就会把诅咒留在他生前接触过的地方[em:03:]只要有人经过这些地方[em:02:]就会被咒语套中"

#define kShuoshuoText1 @"[em:03:]驱魔人 “你03可知道邪恶深藏于你心深处，但我会始终在你的[em:03:]左右，握着我的手，我会让你看到神迹，抱紧信仰，除此你一无所有！”"

#define kShuoshuoText2 @"李太啊，我的饺子最好吃，劲道、柔软、不露馅[em:03:]揉面的时候要一直揉到面团表面象剥了壳的鸡蛋，吃起来一包鲜汁"

#define kShuoshuoText3 @"如果晚上月亮升起的时候，月光www.baidu.com照到我的门口，我希望[em:03:]月光www.baidu.com女神能满足我一个愿望，我想要一双人类的手。我想用我的双手把我的爱人紧紧地拥在怀中，哪怕只有一次。如果我从来没有品尝过温暖的感觉，也许我不会这样寒冷；如果我从没有感受过爱情的甜美，我也许就不会这样地痛苦。如果我没有遇到善良的佩格，如果我从来不曾离开过我的房间，我就不会知道我原来是这样的孤独"

#define kShuoshuoText4 @"人有的时候很脆弱，会遇到很多不如意18618881888的事，日积月累就会形成心结，就算想告诉亲戚朋友，他们也未必懂得怎样[em:03:]开解"

#define kShuoshuoText5 @"如果是像金钱这种东西被抢走的话，再抢[em:03:]回来就好了！但如果是人性或温暖的心的话……那就只有遇上心中同样是空虚的人，才有www.baidu.com办法帮你填补起内心的空洞"

#define kShuoshuoText6 @"双目瞪人玛[em:03:]丽肖,傀儡为子常怀抱,汝辈小儿需切记,梦中遇她莫尖叫"

#endif /* IndustryCircleMacros_h */
