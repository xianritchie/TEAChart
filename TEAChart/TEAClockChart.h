//
//  TEAClockChart.h
//  Xhacker
//
//  Created by Xhacker on 2013-07-27.
//  Copyright (c) 2013 Xhacker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TEAClockChart : UIView

// Array of TEATimeRange
@property (nonatomic) NSArray *data;

@property (nonatomic) IBInspectable UIColor *fillColor;
@property (nonatomic) IBInspectable UIColor *strokeColor;


@end
