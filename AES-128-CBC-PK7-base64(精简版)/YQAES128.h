//
//  YQAES128.h
//  SecurityCode
//
//  Created by WingChing_Yip on 2018/6/6.
//  Copyright © 2018年 ywc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YQAES128 : NSObject

/**
 *  加密
 *
 *  @param string 需要加密的string
 *
 *  @return 加密后的字符串
 */
+ (NSString *)AES128EncryptStrig:(NSString *)string key:(NSString *)key iv:(NSString *) iv;

/**
 *  解密
 *
 *  @param string 加密的字符串
 *
 *  @return 解密后的内容
 */
+ (NSString *)AES128DecryptString:(NSString *)string key: (NSString *)key iv:(NSString *) iv;

@end
