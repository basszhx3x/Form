@import UIKit;

static const CGFloat FORMHeaderContentMargin = 10.0f;
static const CGFloat FORMTitleMargin = 20.0f;
static const CGFloat FORMHeaderHeight = 55.0f;

static NSString * const FORMHeaderReuseIdentifier = @"FORMHeaderReuseIdentifier";

@protocol FORMHeaderViewDelegate;

@interface FORMGroupHeaderView : UICollectionReusableView

@property (nonatomic) UILabel *headerLabel;
@property (nonatomic) NSInteger section;

@property (nonatomic, weak) id <FORMHeaderViewDelegate> delegate;

- (void)setHeaderLabelFont:(UIFont *)headerLabelFont UI_APPEARANCE_SELECTOR;
- (void)setHeaderLabelTextColor:(UIColor *)headerLabelTextColor UI_APPEARANCE_SELECTOR;

@end

@protocol FORMHeaderViewDelegate <NSObject>

- (void)formHeaderViewWasPressed:(FORMGroupHeaderView *)headerView;

@end
