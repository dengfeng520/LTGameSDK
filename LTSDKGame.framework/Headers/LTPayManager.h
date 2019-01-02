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


// !!!: - ================================= pay delegate
@class TLPayManager;
@protocol PayDelegate <NSObject>

//Must be realized 必须实现
@required


//
@optional

@end

@interface LTPayManager : NSObject


-(UIViewController *)getPayView;

@end

NS_ASSUME_NONNULL_END
