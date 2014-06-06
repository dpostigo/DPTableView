//
// Created by Dani Postigo on 4/24/14.
// Copyright (c) 2014 Daniela Postigo. All rights reserved.
//

#import <Foundation/Foundation.h>

NSString *const DPTableViewTextLabelName;
NSString *const DPTableViewDetailLabelName;
NSString *const DPTableViewImageName;


@interface DPTableView : UITableView {

    BOOL autoresizes;
    BOOL populateTextLabels;
    void (^onReload) (DPTableView *);
    NSMutableArray *data;

    NSMutableDictionary *dataDictionary;

}

@property(nonatomic, copy) void (^onReload) (DPTableView *);
@property(nonatomic, strong) NSMutableArray *data;
@property(nonatomic) BOOL populateTextLabels;
@property(nonatomic, strong) NSMutableDictionary *dataDictionary;
@property(nonatomic) BOOL autoresizes;
- (void) populateItem: (id) item atIndexPath: (NSIndexPath *) indexPath;
- (id) rowDataForKey: (NSString *) key atIndexPath: (NSIndexPath *) indexPath;
- (NSDictionary *) rowDataForIndexPath: (NSIndexPath *) indexPath;
- (NSDictionary *) sectionDataForSection: (NSInteger) section;
- (NSMutableArray *) rows;
- (NSMutableArray *) tableData;
- (NSMutableArray *) sectionData;
@end