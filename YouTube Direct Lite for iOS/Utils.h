//
//  Utils.h
//  YouTube Direct Lite for iOS
//
//  Created by Ibrahim Ulukaya on 11/6/13.
//  Copyright (c) 2013 Google. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const DEFAULT_KEYWORD = @"YOUTUBERUFI";
static NSString *const UPLOAD_PLAYLIST = @"testing";

static NSString *const kClientID = @"688107532507-74jfkkq0efvqemuea5c6rkiu8voslgvm.apps.googleusercontent.com";
static NSString *const kClientSecret = @"AIzaSyBqvVt8A-hcKWjLosPCHByXrPVcTj4za5E";

static NSString *const kKeychainItemName = @"YOUTUBERUFI";

@interface Utils : NSObject

+ (UIAlertView*)showWaitIndicator:(NSString *)title;
+ (void)showAlert:(NSString *)title message:(NSString *)message;
+ (NSString *)humanReadableFromYouTubeTime:(NSString *)youTubeTimeFormat;

@end
