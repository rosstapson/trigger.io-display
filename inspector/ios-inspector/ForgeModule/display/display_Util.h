//
//  display_Util.h
//  ForgeTemplate
//
//  Created by Connor Dunn on 28/08/2012.
//  Copyright (c) 2012 Trigger Corp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface display_Util : NSObject

+ (BOOL)isAllowedOrientation:(NSString*)orientation;
+ (void)setAllowedOrientation:(NSString*)orientation;

@end
