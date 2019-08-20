//
//  BaseViewModelProtocol.h
//  ProtocolTest
//
//  Created by Macmini on 2019/8/20.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BaseViewModelProtocol <NSObject>
@optional
- (instancetype)initWithParams:(NSDictionary *)params;

- (void)tx_initialize;
@end

NS_ASSUME_NONNULL_END
