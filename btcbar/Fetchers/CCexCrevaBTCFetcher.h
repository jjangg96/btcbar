//
//  CCexCrevaBTCFetcher.h
//  btcbar
//
//  Created by Jin-Woo Lee on 2015. 7. 8..
//  Copyright (c) 2015년 nearengine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"
@interface CCexCrevaBTCFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

@end
