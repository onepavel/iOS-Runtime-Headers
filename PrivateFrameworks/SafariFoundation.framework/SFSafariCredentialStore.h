/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFSafariCredentialStore : NSObject

+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)_savedPasswordIsRelated:(id)arg1 toEntry:(id)arg2 andWebsiteURL:(id)arg3;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)isAppAutoFillAvailable;

@end
