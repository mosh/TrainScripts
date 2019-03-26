//
//  SBFlatDatePicker.h
//  SBFlatDatePicker
//
//  Created by Solomon Bier on 2/19/15.
//  Copyright (c) 2015 Solomon Bier. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol SBFLatDatePickerDelegate;

//Button for save
@interface SBPickerButton : UIButton

@end


//Scroll view
@interface SBPickerScrollView : UITableView

@property NSInteger tagLastSelected;


- (void)dehighlightLastCell;
- (void)highlightCellWithIndexPathRow:(NSUInteger)indexPathRow;

@end


//Data Picker
@interface SBFlatDatePicker : UIView <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>

//Date & Time Ranges
@property NSMutableIndexSet* dayRange;
@property NSMutableIndexSet* minuterange;

//Format of Day column
@property NSString* dayFormat;


@property (nonatomic, weak) id<SBFLatDatePickerDelegate> delegate;
@property (nonatomic, strong, readonly) NSDate *selectedDate;



@end
