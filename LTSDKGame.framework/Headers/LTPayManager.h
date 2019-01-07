//
//  LTPayManager.h
//  LTSDKGame
//
//  Created by rp.wang on 2018/12/29.
//  Copyright © 2018 gnetop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//=====================================
// 暴露给外部的接口，调起支付界面 by rp.wang
//=====================================

NS_ASSUME_NONNULL_BEGIN

typedef void(^loginSecuessBlocks)(NSString *infoStr);

// !!!: - ================================= pay delegate
@class TLPayManager;
@protocol PayDelegate <NSObject>

//Must be realized 必须实现
@required

-(void)loginSecuess:(NSString *)infoStr;

//
@optional

@end

@interface LTPayManager : NSObject


-(UIViewController *)getPayView:(loginSecuessBlocks)blocks;

@property (weak, nonatomic) id <PayDelegate> delegatePay;

@end

NS_ASSUME_NONNULL_END
