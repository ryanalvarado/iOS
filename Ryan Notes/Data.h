//
//  Data.h
//  Ryan Notes
//
//  Created by Ryan Alvarado on 5/15/14.
//  Copyright (c) 2014 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kDefaultText @"New Note"
#define KAllNotes @"notes"
#define kDetailView @"showDetail"

@interface Data : NSObject

+(NSMutableDictionary *)getAllNotes;
+(void)setCurrentKey:(NSString *)key;
+(NSString *)getCurrentKey;
+(void)setNoteForCurrentKey:(NSString*)note;
+(void)setNote:(NSString *)note forKey:(NSString *)key;
+(void)removeNoteForKey:(NSString *)key;
+(void)saveNotes;

@end
