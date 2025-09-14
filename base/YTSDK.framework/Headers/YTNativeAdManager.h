//
//  YTNativeAdManager.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <YTSDK/YTNativeAdDelegate.h>


NS_ASSUME_NONNULL_BEGIN
@protocol YTNativeAdDelegate;

@interface YTNativeAdManager : NSObject


+ (instancetype)sharedInstance;


- (void)loadNativeAdWithPlacementId:(NSString *)placementId WithAdSize:(CGSize)adSize WithDelegate:(id<YTNativeAdDelegate>)delegate;




- (UIView *)showNativeAdWithRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END
