//
//  CSTouchButton.h
//  AppSlate
//
//  Created by 김태한 on 12. 2. 19..
//  Copyright (c) 2012년 ChocolateSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSGearObject.h"
#import "BButton.h"

@interface CSTouchButton : CSGearObject

-(id) initGear;


-(void) setTintColor:(UIColor*)color;
-(UIColor*) getTintColor;

-(void) setText:(NSString*)txt;
-(NSString*) getText;

-(void) setTextColor:(UIColor*)color;
-(UIColor*) getTextColor;

-(void) setFont:(UIFont*)font;
-(UIFont*) getFont;

@end
