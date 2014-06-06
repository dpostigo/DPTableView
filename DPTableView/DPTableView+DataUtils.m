//
// Created by Dani Postigo on 5/9/14.
// Copyright (c) 2014 Daniela Postigo. All rights reserved.
//

#import "DPTableView+DataUtils.h"

@implementation DPTableView (DataUtils)

- (NSString *) textLabelForIndexPath: (NSIndexPath *) indexPath {
    return [self rowDataForKey: DPTableViewTextLabelName atIndexPath: indexPath];
}

- (UIImage *) imageForIndexPath: (NSIndexPath *) indexPath {
    return [self rowDataForKey: DPTableViewImageName atIndexPath: indexPath];
}


#pragma mark Sections

- (id) sectionDataForKey: (NSString *) key inSection: (NSInteger) section {
    NSDictionary *dictionary = [self sectionDataForSection: section];
    return [dictionary objectForKey: key];
}

- (NSString *) textLabelForSection: (NSInteger) section {
    return [self sectionDataForKey: DPTableViewTextLabelName inSection: section];
}


@end