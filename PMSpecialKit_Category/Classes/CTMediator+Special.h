//
//  CTMediator+Special.h
//  PMSpecialKit_Category
//
//  Created by Luminous on 2020/11/16.
//


#import <UIKit/UIKit.h>

#import <CTMediator/CTMediator.h>

#import <PMAPIsKit/APIRequest.h>

#import <PMAPIsKit/FFReformProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Special)
- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;
@end

NS_ASSUME_NONNULL_END
