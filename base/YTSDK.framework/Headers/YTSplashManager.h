//
//  YTSplashManager.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>
#import <YTSDK/YTSplashDelegate.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YTSplashDelegate;

@interface YTSplashManager : NSObject


+ (instancetype)sharedInstance;


- (void)loadADWithPlacementID:(NSString *)placement WithRootViewController:(UIViewController *)rootViewController WithDelegate:(id<YTSplashDelegate>)delegate WithBottomView:(nullable UIView  *)bottomView;


- (void)showSplashAdWithUIWindows:(UIWindow *)windows;

@end

NS_ASSUME_NONNULL_END
