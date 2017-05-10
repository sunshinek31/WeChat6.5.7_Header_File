//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UIWebViewDelegate.h"

@class GTMOAuth2Authentication, GTMOAuth2SignIn, NSDictionary, NSMutableDictionary, NSString, NSURL, NSURLRequest, UIWebView;

@interface GTMOAuth2ViewControllerTouch : MMUIViewController <UINavigationControllerDelegate, UIWebViewDelegate>
{
    UIWebView *webView_;
    GTMOAuth2SignIn *signIn_;
    NSURLRequest *request_;
    id delegate_;
    SEL finishedSelector_;
    CDUnknownBlockType completionBlock_;
    CDUnknownBlockType popViewBlock_;
    NSString *keychainItemName_;
    void *keychainItemAccessibility_;
    NSString *initialHTMLString_;
    int mustShowActivityIndicator_;
    NSURL *browserCookiesURL_;
    id userData_;
    NSMutableDictionary *properties_;
    _Bool isViewShown_;
    _Bool didViewAppear_;
    _Bool hasNotifiedWebViewStartedLoading_;
    _Bool hasCalledFinished_;
    _Bool hasDoneFinalRedirect_;
    _Bool didDismissSelf_;
    NSString *m_autoCompleteEmail;
    GTMOAuth2Authentication *authentication;
    double networkLossTimeoutInterval;
    NSURLRequest *_request;
}

+ (void)revokeTokenForGoogleAuthentication:(id)arg1;
+ (void)setSignInClass:(Class)arg1;
+ (Class)signInClass;
+ (id)controllerWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)controllerWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 delegate:(id)arg4 finishedSelector:(SEL)arg5;
+ (id)controllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)controllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 delegate:(id)arg5 finishedSelector:(SEL)arg6;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType popViewBlock; // @synthesize popViewBlock=popViewBlock_;
@property(retain, nonatomic) NSString *m_autoCompleteEmail; // @synthesize m_autoCompleteEmail;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=properties_;
@property(retain, nonatomic) id userData; // @synthesize userData=userData_;
@property(readonly, nonatomic) GTMOAuth2SignIn *signIn; // @synthesize signIn=signIn_;
@property(retain, nonatomic) NSURL *browserCookiesURL; // @synthesize browserCookiesURL=browserCookiesURL_;
@property(copy, nonatomic) NSString *initialHTMLString; // @synthesize initialHTMLString=initialHTMLString_;
@property(nonatomic) void *keychainItemAccessibility; // @synthesize keychainItemAccessibility=keychainItemAccessibility_;
@property(copy, nonatomic) NSString *keychainItemName; // @synthesize keychainItemName=keychainItemName_;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=webView_;
- (void).cxx_destruct;
- (void)setSignAdditionalAuthorizationParameters:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)updateUI;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isNavigationBarTranslucent;
- (void)moveWebViewFromUnderNavigationBar;
- (void)signIn:(id)arg1 finishedWithAuth:(id)arg2 error:(id)arg3;
- (void)signIn:(id)arg1 displayRequest:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool showsInitialActivityIndicator;
- (_Bool)shouldUseKeychain;
@property(nonatomic) double networkLossTimeoutInterval; // @synthesize networkLossTimeoutInterval;
- (void)clearBrowserCookies;
@property(readonly, nonatomic) GTMOAuth2Authentication *authentication; // @synthesize authentication;
- (void)cancelSigningIn;
- (void)notifyWithName:(id)arg1 webView:(id)arg2 kind:(id)arg3;
- (void)popView;
- (void)onBackButtonClick;
- (void)setUpNavigation;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)signInNetworkLostOrFound:(id)arg1;
- (void)stopLoadingAndShowTip:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)stopIndicator:(id)arg1;
- (void)showIndicator:(id)arg1;
- (id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 delegate:(id)arg4 finishedSelector:(SEL)arg5;
- (id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 delegate:(id)arg5 finishedSelector:(SEL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

