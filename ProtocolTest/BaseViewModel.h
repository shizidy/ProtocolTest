//
//  BaseViewModel.h
//  ProtocolTest
//
//  Created by Macmini on 2019/8/20.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseViewModelProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface BaseViewModel : NSObject <BaseViewModelProtocol>
/**
 title of viewController
 */
@property (nonatomic, copy) NSString *title;
@end

NS_ASSUME_NONNULL_END
