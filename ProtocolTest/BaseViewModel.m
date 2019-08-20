//
//  BaseViewModel.m
//  ProtocolTest
//
//  Created by Macmini on 2019/8/20.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import "BaseViewModel.h"

@interface BaseViewModel ()
@property (nonatomic, copy, readwrite) NSDictionary *params;
@end

@implementation BaseViewModel
- (instancetype)initWithParams:(NSDictionary *)params {
    if (self = [super init]) {
        self.params = params;
        self.title = params[@"title"];
        [self tx_initialize];
    }
    return self;
}

- (void)tx_initialize {
    
}



@end
