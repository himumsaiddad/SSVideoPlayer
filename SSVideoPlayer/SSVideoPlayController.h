//
//  SSVideoPlayController.h
//  SSVideoPlayer
//
//  Created by Mrss on 16/1/22.
//  Copyright © 2016年 expai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TrackedViewController.h"

@interface SSVideoModel : NSObject

@property (nonatomic,copy,readonly) NSString *path;
@property (nonatomic,copy,readonly) NSString *name;

- (instancetype)initWithName:(NSString *)name path:(NSString *)path;

@end


@interface SSVideoPlayController : TrackedViewController

- (instancetype)initWithVideoList:(NSArray <SSVideoModel *> *)videoList;

@end
