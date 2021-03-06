//
//  SmartSelection.h
//  iTerm
//
//  Created by George Nachman on 9/25/11.
//  Copyright 2011 Georgetech. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SmartSelectionController;

@protocol SmartSelectionDelegate
- (void)smartSelectionChanged:(SmartSelectionController *)controller;
@end


@interface SmartSelectionController : NSWindowController {
    NSString *guid_;
    BOOL hasSelection_;
    IBOutlet NSObject<SmartSelectionDelegate> *delegate_;  // weak
    IBOutlet NSTableView *tableView_;
    IBOutlet NSTableColumn *regexColumn_;
    IBOutlet NSTableColumn *notesColumn_;
    IBOutlet NSTableColumn *precisionColumn_;
    IBOutlet NSButton *logDebugInfo_;
}

@property (nonatomic, copy) NSString *guid;
@property (nonatomic, assign) BOOL hasSelection;
@property (nonatomic, assign) NSObject<SmartSelectionDelegate> *delegate;

+ (BOOL)logDebugInfo;
+ (double)precisionInRule:(NSDictionary *)rule;
+ (NSString *)regexInRule:(NSDictionary *)rule;
+ (NSArray *)defaultRules;
- (NSArray *)rules;
- (IBAction)addRule:(id)sender;
- (IBAction)removeRule:(id)sender;
- (IBAction)loadDefaults:(id)sender;
- (IBAction)help:(id)sender;
- (IBAction)logDebugInfoChanged:(id)sender;
- (void)windowWillOpen;

@end
