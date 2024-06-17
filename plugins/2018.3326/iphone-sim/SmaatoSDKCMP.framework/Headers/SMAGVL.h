//
//  SMAGVL.h
//  Generated by JSON Toolbox - http://itunes.apple.com/app/json-toolbox/id525015412
//
//  Created by stefan on Mar 30, 2021
//  Copyright © 2021 Smaato Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#if !__has_feature(objc_arc)
#define JSONAutoRelease(param) ([param autorelease]);
#else
#define JSONAutoRelease(param) (param)
#endif

@class SMAVendor;
@class SMAPurpose;
@class SMAFeature;
@class SMASpecialFeatures;
@class SMASpecialPurposes;
@class SMAStack;

@interface SMAGVL: NSObject
{
}    // End of SMAGVL

- (instancetype)initWithGVL:(SMAGVL *)gvl;

+ (instancetype)loadGVL;
+ (instancetype)loadGVLForLanguage:(NSString *)lang;
+ (void)storeGVL:(NSData *)data;
+ (void)storeGVL:(NSData *)data selectedLanguage:(NSString *)lang;
/// Checking expiray time period of GVL
+ (BOOL)shouldLoadList:(NSString *)lang;
+ (NSString *)cacheFilename:(NSString *)lang;
+ (SMAGVL *)SMAGVLWithDictionary:(NSDictionary *)dictionary;
+ (SMAGVL *)SMAGVLWithJSONString:(NSString *)jsonString usingEncoding:(NSStringEncoding)stringEncoding error:(NSError **)error;
- (id)initWithDictionary:(NSDictionary *)dictionary;
- (NSString *)description;

@property (nonatomic, retain) NSNumber *gvlSpecificationVersion;
@property (nonatomic, retain) NSNumber *tcfPolicyVersion;
@property (nonatomic, retain) NSNumber *vendorListVersion;
@property (nonatomic, assign) NSDate *lastUpdated;
@property (nonatomic, retain) NSArray<SMAStack *> *stacks;
@property (nonatomic, retain) NSArray<SMAVendor *> *vendors;
@property (nonatomic, retain) NSArray<SMAPurpose *> *purposes;
@property (nonatomic, retain) NSArray<SMAFeature *> *features;
@property (nonatomic, retain) NSArray<SMAFeature *> *specialFeatures;
@property (nonatomic, retain) NSArray<SMAPurpose *> *specialPurposes;

@end