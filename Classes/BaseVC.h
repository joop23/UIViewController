

#import <UIKit/UIKit.h>


@interface BaseVC : UIViewController {
	IBOutlet UIBarButtonItem *edit;
	IBOutlet UILabel *pageDisplay;
	IBOutlet UIBarButtonItem *previous;
	IBOutlet UIBarButtonItem *next;
	IBOutlet UIToolbar	*toolBar;
	NSArray	*viewControllers;
}

-(IBAction) previous: (id) sender;
-(IBAction) next: (id) sender;

@property(nonatomic,retain) IBOutlet UIBarButtonItem *edit;
@property(nonatomic,retain) IBOutlet UILabel *pageDisplay;
@property(nonatomic,retain) IBOutlet UIBarButtonItem *previous;
@property(nonatomic,retain) IBOutlet UIBarButtonItem *next;
@property(nonatomic,retain) IBOutlet UIToolbar *toolBar;
@property(nonatomic,retain) NSArray *viewControllers;
@end
