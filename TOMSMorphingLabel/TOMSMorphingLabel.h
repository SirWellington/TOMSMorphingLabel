//
//  TOMSMorphingLabel.h
//  TOMSMorphingLabel
//
//  Created by Wellington Moreno on 9/27/17.
//

#import <UIKit/UIKit.h>
#import "NSString+Morphing.h"

//! Project version number for TOMSMorphingLabel.
FOUNDATION_EXPORT double TOMSMorphingLabelVersionNumber;

//! Project version string for TOMSMorphingLabel.
FOUNDATION_EXPORT const unsigned char TOMSMorphingLabelVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TOMSMorphingLabel/PublicHeader.h>

@interface TOMSMorphingLabel : UILabel

@property (readonly, atomic, strong) NSString *targetText;
@property (nonatomic, assign) IBInspectable CGFloat animationDuration;
@property (nonatomic, assign) IBInspectable CGFloat characterAnimationOffset;
@property (nonatomic, assign) IBInspectable CGFloat characterShrinkFactor;
@property (nonatomic, assign, getter=isMorphingEnabled) IBInspectable BOOL morphingEnabled;

- (void)setTextWithoutMorphing:(NSString *)text;
- (void)setText:(NSString*)text withCompletionBlock:(void (^)(void))block;

@end
