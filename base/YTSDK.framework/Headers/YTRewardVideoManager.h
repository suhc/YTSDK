//
//  YTRewardVideoManager.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <YTSDK/YTRewardVideoDelegate.h>

extern NSString *const kATAdLoadingExtraMediaExtraKey;
extern NSString *const kATAdLoadingExtraUserDataKeywordKey;
extern NSString *const kATAdLoadingExtraUserIDKey;
extern NSString *const kATAdLoadingExtraLocationKey;
extern NSString *const kATAdLoadingExtraRewardNameKey;
extern NSString *const kATAdLoadingExtraRewardAmountKey;


@protocol YTRewardVideoDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface YTRewardVideoManager : NSObject

+ (instancetype)sharedInstance;


- (void)loadRewardVideoWithPlacementId:(NSString *)placementId WithOptions:(NSDictionary *)options WithDelegate:(id<YTRewardVideoDelegate>)delegate;



- (void)showRewardVideoWithRootViewController:(UIViewController *)rootViewController;



@end

NS_ASSUME_NONNULL_END
