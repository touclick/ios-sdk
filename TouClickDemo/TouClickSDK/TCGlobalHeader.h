//
//  TCGlobalHeader.h
//  TouClickDemo
//
//  Created by ZK on 2017/4/3.
//  Copyright © 2017年 ZK. All rights reserved.
//

#ifndef TCGlobalHeader_h
#define TCGlobalHeader_h

#import "UIView+Addition.h"

#define TCPublicKey   @"45f5b905-4d15-41ca-ba4b-3a8612fc43cf"
#define TCUrl_Check   @"http://cap-5-2-0.touclick.com/public/check"
#define TCUrl_Captcha @"http://cap-5-2-0.touclick.com/public/captcha"
#define TCUrl_Verify  @"http://ver-5-2-0.touclick.com/verifybehavior"

#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLog(...)
#endif

#define GlobalBlueColor_Normal    [UIColor colorWithRed:63/255.f green:158/255.f blue:214/255.f alpha:1]
#define GlobalBlueColor_HL        [UIColor colorWithRed:43/255.f green:138/255.f blue:194/255.f alpha:1]
#define GlobalBlueColor_Disabled  [UIColor colorWithRed:63/255.f green:158/255.f blue:214/255.f alpha:.4]

#define SCREEN_HEIGHT        ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_WIDTH         ([[UIScreen mainScreen] bounds].size.width)
#define WindowZoomScale      (SCREEN_WIDTH/320.f)

#define KeyboardAnimationCurve  7 << 16
#define TCRandom  ((CGFloat)(1+arc4random()%99)/100) // 0 ~ 1

#define HexColor(hexValue)   [UIColor colorWithRed:((float)(((hexValue) & 0xFF0000) >> 16))/255.0 green:((float)(((hexValue) & 0xFF00) >> 8))/255.0 blue:((float)((hexValue) & 0xFF))/255.0 alpha:1]

#endif /* TCGlobalHeader_h */
