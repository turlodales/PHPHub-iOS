//
//  APIConstant.h
//  PHPHub
//
//  Created by Aufree on 9/30/15.
//  Copyright (c) 2015 ESTGroup. All rights reserved.
//

#define APIAccessTokenURL [NSString stringWithFormat:@"%@%@", APIBaseURL, @"/oauth/access_token"]
#define QiniuUploadTokenIdentifier @"QiniuUploadTokenIdentifier"

#if DEBUG
#define APIBaseURL      @"http://staging.phphub.org/v1"
#else
#define APIBaseURL      @"https://api.phphub.org/v1"
#endif

#define PHPHubHost        @"phphub.org"
#define PHPHubUrl         @"https://phphub.org/"
#define GitHubURL         @"https://github.com/"
#define TwitterURL        @"https://twitter.com/"
#define ProjectURL        @"https://github.com/aufree/phphub-ios"
#define AboutPageURL      @"https://phphub.org/about"
#define ESTGroupURL       @"http://est-group.org"
#define AboutTheAuthorURL @"https://github.com/aufree"
#define PHPHubGuide       @"http://7xnqwn.com1.z0.glb.clouddn.com/index.html"
#define PHPHubTopicURL    @"https://phphub.org/topics/"
#define SinaRedirectURL   @"http://sns.whalecloud.com/sina2/callback"

#define UpdateNoticeCount @"UpdateNoticeCount"
#define KeyChainService   @"PHPHubService"
#define KeyChainAccount   @"com.PHPHub.keychain"
