//
//  YTInterstitialManager.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <YTSDK/YTInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YTInterstitialDelegate;

@interface YTInterstitialManager : NSObject


+ (instancetype)sharedInstance;

- (void)loadInterstitialWithPlacementId:(NSString *)placementId WithDelegate:(id<YTInterstitialDelegate>)delegate;


- (void)showInterstitialWithRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END
