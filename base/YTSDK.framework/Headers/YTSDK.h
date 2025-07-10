//
//  YTSDK.h
//  YTSDK
//
//  Created by co on 2025/7/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTSDK : NSObject

+ (NSString *)getSDKVersion;


+ (void)initYTSDK:(NSString *)appid;

@end

NS_ASSUME_NONNULL_END
