//
//  VZItem.h
//  Vizzle
//
//  Created by Jayson Xu on 14-9-15.
//  Copyright (c) 2014年 VizLab. All rights reserved.
//


/* 此类为KVC自动处理model的属性值，自定义Model类继承此类实现
 - (void)autoKVCBinding:(NSDictionary* )dictionary;即可*/


#import <Foundation/Foundation.h>

@interface VZItem : NSObject<NSCoding,NSCopying>

/**
 *  自动进行KVC绑定,对象为dictionary
 *
 *  VZMV* => 1.1
 *
 *  @param dictionary
 */
- (void)autoKVCBinding:(NSDictionary* )dictionary;

/**
 *  自动进行KVC绑定,对象为object
 *
 *  VZMV* => 1.1
 *
 *  @param object
 */
- (void)autoMapTo:(id)object;
/**
 *  VZMV* => 1.2
 *
 *  @return 序列化为dictionary
 */
- (NSDictionary* )toDictionary;

/**
 *  VZMV* => 1.2
 *
 *  @return 所有property的名称
 */
+ (NSSet* )propertyNames;

@end
