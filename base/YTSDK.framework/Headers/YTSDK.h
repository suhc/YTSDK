//
//  YTSDK.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>

#import <YTSDK/YTInterstitialManager.h>
#import <YTSDK/YTRewardVideoManager.h>
#import <YTSDK/YTSplashManager.h>
#import <YTSDK/YTNativeAdManager.h>
#import <YTSDK/YTInterstitialDelegate.h>
#import <YTSDK/YTNativeAdDelegate.h>
#import <YTSDK/YTRewardVideoDelegate.h>
#import <YTSDK/YTSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTSDK : NSObject

+ (NSString *)getSDKVersion;


+ (void)initYTSDK:(NSString *)appid;

@end

NS_ASSUME_NONNULL_END
