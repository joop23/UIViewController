
#import "UIViewControllerAppDelegate.h"
#import "TopViewController.h"
#import "FirstVC.h"
#import "SecondVC.h"
#import "ThirdVC.h"
#import "FourthVC.h"

@implementation UIViewControllerAppDelegate

@synthesize window,navController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    

    // Override point for customization after application launch
	UIWindow *tempWindow = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
	self.window = tempWindow;
	
	TopViewController *topVC = [[TopViewController alloc] init];
	
	UINavigationController *tempNavController = [[UINavigationController alloc] initWithRootViewController:topVC];
	

	
	
	self.navController = tempNavController;
	
	[self.window addSubview:tempNavController.view];
	
	[tempWindow release];
	[topVC release];
	
    [self.window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
	[navController release];
    [window release];
    [super dealloc];
}


@end
