//
//  YTNativeAdDelegate.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>

@protocol YTNativeAdDelegate <NSObject>

/// 广告加载成功
- (void)nativeAdDidFinish;

///  广告加载失败回调
- (void)nativeAdDidFaillError:(NSError *)error;


- (void)nativeAdRenderSuccess:(CGSize)size;

/// 广告曝光
- (void)nativeAdDidVisible;

/// 广告关闭
- (void)nativeAdClosed;

/// 广告点击
- (void)nativeAdClicked;



@end
