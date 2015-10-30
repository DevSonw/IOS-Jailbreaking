/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MCTextConversion : NSObject
{
}

+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)arg1;
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)arg1;
+ (id)stringAttributesWithAttributedString:(id)arg1;
+ (id)textFormatWithNSAttributesForText:(id)arg1 attributes:(id)arg2;
+ (id)textFormatWithCTAttributesForText:(id)arg1 attributes:(id)arg2;
+ (id)textFormatFromUnderlineStyle:(unsigned long long)arg1;
+ (unsigned long long)underlineStyleFromTextFormat:(id)arg1;
+ (id)stringFromLigature:(long long)arg1;
+ (long long)ligatureFromString:(id)arg1;
+ (id)stringFromTextAlignment:(long long)arg1;
+ (long long)textAlignmentFromString:(id)arg1;
+ (id)stretchForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (id)weightForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (id)styleForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;

@end
