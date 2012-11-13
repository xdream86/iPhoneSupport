//
//  SocialController.h
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>

@interface SocialController : NSObject <UIActionSheetDelegate, MFMailComposeViewControllerDelegate>
{
	NSString *title;
	NSString *subject;
	NSString *message;
	NSString *url;
	NSString *facebookUrl;
	NSArray *hashTagArray;
	UIViewController *viewController;
	UIBarButtonItem *barButtonItem;
}

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *facebookUrl;
@property (nonatomic, retain) NSArray *hashTagArray;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;

+ (BOOL)canShare;
+ (void)openOnTwitter:(NSString *)handle;
+ (void)followOnTwitter:(NSString *)handle;

- (id)initWithMessage:(NSString *)aMessage;
- (void)dealloc;

- (void)showActionSheetOverViewController:(UIViewController *)aViewController;
- (void)showActionSheetOverViewController:(UIViewController *)aViewController inRect:(CGRect)frame;
- (void)showActionSheetOverViewController:(UIViewController *)aViewController barButtonItem:(UIBarButtonItem *)aBarButtonItem;

@end
