//
//  FindPutCell.h
//  喜马拉雅FM(高仿品)
//
//  Created by apple-jd33 on 15/11/11.
//  Copyright © 2015年 HansRove. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContentButton.h"
#import "ContentImageView.h"

@interface FindPutCell : UITableViewCell

/** 图片上显示透明title标签 */
@property (nonatomic,strong) NSString *title;

/**  跳转按钮0 */
@property (nonatomic,strong) ContentImageView *clickBtn0;
/**  跳转按钮1 */
@property (nonatomic,strong) ContentImageView *clickBtn1;
/**  跳转按钮2 */
@property (nonatomic,strong) ContentImageView *clickBtn2;
/**  跳转按钮介绍0 */
@property (nonatomic,strong) UILabel *detailLb0;
/**  跳转按钮介绍1 */
@property (nonatomic,strong) UILabel *detailLb1;
/**  跳转按钮介绍2 */
@property (nonatomic,strong) UILabel *detailLb2;

@end
