//
//  YTInterstitialDelegate.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>

@protocol YTInterstitialDelegate <NSObject>


/// 广告加载成功
- (void)interstitialAdDidFinish;

///  广告加载失败回调
- (void)interstitialAdDidFaillError:(NSError *)error;

/// 广告曝光
- (void)interstitialAdDidVisible;

/// 广告关闭
- (void)interstitialAdClosed;

/// 广告点击
- (void)interstitialAdClicked;

/// 广告点击跳过
- (void)interstitialAdSkiped;



@end
