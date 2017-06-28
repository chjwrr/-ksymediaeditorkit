//
//  VideoParamCache.h
//  demo
//
//  Created by 张俊 on 16/04/2017.
//  Copyright © 2017 ksyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KSYMediaEditorKit/KSYDefines.h>

@interface VideoParams : NSObject

typedef NS_ENUM(NSInteger, ResoLevel){
    kDefault = -1 ,
    k360P,
    k480P,
    k540P,
    k720P,
};

@property(nonatomic, assign)ResoLevel level;

@property(nonatomic, assign)NSUInteger frame;

@property(nonatomic, assign)NSUInteger abps;

@property(nonatomic, assign)NSUInteger vbps;

//1 264， 2 265
@property(nonatomic, assign)KSYVideoCodecType codec;
@property(nonatomic, assign)KSYOutputFormat outputFmt;

@end

@interface VideoParamCache : NSObject

+(instancetype)sharedInstance;

//采集参数
@property(nonatomic, strong)VideoParams* captureParam;
//合成参数
@property(nonatomic, strong)VideoParams* exportParam;

@end
