//
//  LQGBaseViewModel.h
//  LQGBaseViewModel
//
//  Created by 罗建
//  Copyright (c) 2021 罗建. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 通用回调
typedef void(^Completion)(void);

/// 业务层回调
typedef void(^VMCompletion)(BOOL success, NSString *message);

/// 在主线程中异步回调
/// @param completion 通用回调
void CompletionOnMainQueue(Completion completion);

/// 在主线程中异步回调
/// @param completion 业务层回调
/// @param success 是否成功
/// @param message 描述信息
void VMCompletionOnMainQueue(VMCompletion completion, BOOL success, NSString *message);

/// 基础业务类
@interface LQGBaseViewModel : NSObject

@end
