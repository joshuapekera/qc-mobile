//
//  JKSprite.h
//  QCMobile
//
//  Created by Joris Kluivers on 5/8/13.
//  Copyright (c) 2013 Joris Kluivers. All rights reserved.
//

#import "JKPatch.h"

@class CIImage;

@interface JKSprite : JKPatch

@property(nonatomic, readonly) NSUInteger antialiasing;

@property(nonatomic, strong) CIColor *inputColor;
@property(nonatomic, assign) CGFloat inputHeight;
@property(nonatomic, assign) CGFloat inputWidth;
@property(nonatomic, assign) CGFloat inputY;
@property(nonatomic, assign) CGFloat inputX;
@property(nonatomic, assign) CGFloat inputZ;
@property(nonatomic, assign) CGFloat inputRX;
@property(nonatomic, assign) CGFloat inputRY;
@property(nonatomic, assign) CGFloat inputRZ;
@property(nonatomic, strong) NSNumber *inputCulling;
@property(nonatomic, strong) NSNumber *inputBlending;
@property(nonatomic, strong) NSNumber *inputZBuffer;
@property(nonatomic, strong) CIImage *inputImage;

@end
