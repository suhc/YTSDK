//
//  YTRewardVideoManager.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <YTSDK/YTRewardVideoDelegate.h>

extern NSString *const kIasAdLoadingExtraMediaExtraKey;
extern NSString *const kIasAdLoadingExtraUserDataKeywordKey;
extern NSString *const kIasAdLoadingExtraUserIDKey;
extern NSString *const kIasAdLoadingExtraLocationKey;
extern NSString *const kIasAdLoadingExtraRewardNameKey;
extern NSString *const kIasAdLoadingExtraRewardAmountKey;


@protocol YTRewardVideoDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface YTRewardVideoManager : NSObject

+ (instancetype)sharedInstance;


- (void)loadRewardVideoWithPlacementId:(NSString *)placementId WithOptions:(NSDictionary *)options WithDelegate:(id<YTRewardVideoDelegate>)delegate;



- (void)showRewardVideoWithRootViewController:(UIViewController *)rootViewController;



@end

NS_ASSUME_NONNULL_END
