//
//  Target_Author.h
//  AFNetworking
//
//  Created by 张文军 on 2020/4/24.
//

#import <Foundation/Foundation.h>
#import <FFAPIs/FFAPIs-umbrella.h>

NS_ASSUME_NONNULL_BEGIN

// Target_前缀的类、Action_前缀的方法

@interface Target_Author : NSObject

/// 获取控制器
/// @param params 参数
- (UIViewController *)Action_authorDetailViewController:(NSDictionary *)params;

//
- (NSDictionary *)Action_authorReformerWithOriginData:(NSDictionary *)params;

//
- (NSDictionary *)Action_authorReformer:(NSDictionary *)params;

//
- (APIRequest *)Action_authorAPIRequest:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
