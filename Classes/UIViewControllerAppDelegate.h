
#import <UIKit/UIKit.h>

@interface UIViewControllerAppDelegate : NSObject <UIApplicationDelegate> {
	UINavigationController *navController;
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) UINavigationController *navController;

@end

