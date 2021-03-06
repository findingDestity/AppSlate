//
//  CSTextAlert.h
//  AppSlate
//
//  Created by Taehan Kim 태한 김 on 12. 2. 21..
//  Copyright (c) 2012년 ChocolateSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSGearObject.h"

@interface CSTextAlert : CSGearObject <UIAlertViewDelegate>
{
    NSString *message, *btn1, *btn2;
}

-(id) initGear;

-(void) setText:(NSString*)txt;
-(NSString*) getText;

-(void) setCancelButtonText:(NSString*)txt;
-(NSString*) getCancelButtonText;

-(void) setOkButtonText:(NSString*)txt;
-(NSString*) getOkButtonText;

-(void) setShow:(NSNumber*)BoolValue;
-(NSNumber*) getShow;

@end
