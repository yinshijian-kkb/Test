//
//  RennNotificationService.h
//  RennSDK
//
//  Created by Li Chengliang on 13-4-10.
//  Copyright (c) 2013年 Li Chengliang. All rights reserved.
//

#import "RennParam.h"

extern NSString *kRennServiceTypePutNotificationAsUser;
extern NSString *kRennServiceTypePutNotificationAsApp;
extern NSString *kRennServiceTypePutInvitation;

extern NSString *kTypeInvitationGIFT;
extern NSString *kTypeInvitationINVITATION;

/*
 API链接: http://wiki.dev.renren.com/wiki/V2/notification/user/put
 */
@interface PutNotificationAsUserParam : RennParam
//必选
@property (nonatomic, retain) NSString *content;
//必选
@property (nonatomic, retain) NSArray *userIds;

@end

/*
 API链接: http://wiki.dev.renren.com/wiki/V2/notification/app/put
 */
@interface PutNotificationAsAppParam : RennParam
//必选
@property (nonatomic, retain) NSString *content;
//必选
@property (nonatomic, retain) NSArray *userIds;

@end


/*
 API链接: http://wiki.dev.renren.com/wiki/V2/invitation/put
 */
@interface PutInvitationParam : RennParam

//可选
@property (nonatomic, retain) NSString *invitationType;

//必选
@property (nonatomic, retain) NSString *userId;

//可选
@property (nonatomic, retain) NSString *img;

//可选
@property (nonatomic, retain) NSString *giftName;

//必选
@property (nonatomic, retain) NSString *url;

@end
