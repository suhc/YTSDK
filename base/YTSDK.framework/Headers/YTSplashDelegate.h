//
//  YTSplashDelegate.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>


@protocol YTSplashDelegate <NSObject>

/// 广告加载成功回调
- (void)onSplashAdDidFinish;

///  广告加载失败回调
- (void)onSplashAdDidFaillError:(NSError *)error;

/// 广告曝光
- (void)onSplashAdSuccessPresentScreen;

/// 广告关闭
- (void)onSplashAdClosed;

/// 广告点击
- (void)onSplashAdClicked;

/// 广告点击跳过
- (void)onSplashAdSkiped;



@end
