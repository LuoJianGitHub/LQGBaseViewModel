//
//  LQGBaseViewModel.m
//  LQGBaseViewModel
//
//  Created by 罗建
//  Copyright (c) 2021 罗建. All rights reserved.
//

#import "LQGBaseViewModel.h"

void CompletionOnMainQueue(Completion completion) {
    if (completion == nil) return;

    if ([NSThread isMainThread]) {
        completion();
    } else {
        dispatch_async(dispatch_get_main_queue(), ^{
            completion();
        });
    }
}

void VMCompletionOnMainQueue(VMCompletion completion, BOOL success, NSString *message) {
    if (completion == nil) return;

    CompletionOnMainQueue(^{
        completion(success, message);
    });
}

@implementation LQGBaseViewModel

@end
