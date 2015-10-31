//
//  ARNMoviePosterCell.h
//  classicFilms
//
//  Created by Stefan Arn on 16/10/15.
//  Copyright © 2015 Stefan Arn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ARNMovie.h"

@interface ARNMoviePosterCell : UICollectionViewCell

@property (nonatomic, assign) NSInteger pageNumber;
- (void)configureCellWithMovie:(ARNMovie *)arnMovie;

@end
