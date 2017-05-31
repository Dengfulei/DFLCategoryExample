//
//  UIImage+Category.h
//  paopao
//
//  Created by yite on 14-4-28.
//  Copyright (c) 2014年 yite. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Category)

- (UIImage *)resizeImageWithCapInsets:(UIEdgeInsets)capInsets;
//防止图片旋转
- (UIImage *)fixOrientation;
//图片旋转角度
+ (UIImage *)image:(UIImage *)image rotation:(UIImageOrientation)orientation;
//将图片缩放到指定尺寸
- (UIImage*)scaleToSize:(CGSize)size;
//将图片缩放到指定尺寸
+ (UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;
//图片按缩放因子缩放
+ (UIImage *)scaleImage:(UIImage *)image scaleFactor:(float)scaleFloat;

//生成一张模糊图片
- (UIImage *)blurImageWithInputRadius:(CGFloat)radius;

// icon ！＝ nil带有头像的二维码 为nil不带头像的二维码
+ (UIImage *)imageWithQRCodeImageMessage:(NSString *)string
                               imageSize:(CGFloat)imageSize
                                    icon:(NSString *)icon iconSize:(CGSize)iconSize;
@end
