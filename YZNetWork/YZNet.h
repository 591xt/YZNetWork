

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


typedef void(^Success)(NSDictionary* response);
typedef void(^Failuer)(NSError *error);
typedef void(^Statue)(NSString* statue);
typedef void(^NetOFF)();

@interface YZNet : NSObject

+(instancetype)YZ;

/// 网络请求
/// @param isPost 是否是POST是的话YES否则为NO
/// @param url 接口地址
/// @param dic 当参数成对出现的时候
/// @param str 当参数为一个字符串的时候
/// @param sucess 成功回调
/// @param falie 失败回调
/// @param NetOff 没网回调
-(void)isPost:(BOOL)isPost url:(NSString*)url withData:(NSDictionary*)dic OrString:(NSString*)str withSucess:(Success)sucess withFalie:(Failuer)falie andNetOFF:(NetOFF)NetOff;


/// 上传图片文件
/// @param url 接口地址
/// @param parameters 上传时带的参数
/// @param img 图片对象
/// @param name 图片名字
/// @param key 图片名字的对应的参数名字
/// @param Statue 上传状态
/// @param NetOff 没网回调
-(void)upload:(NSString*)url andParameters:(NSDictionary*)parameters andImage:(UIImage*)img andImageName:(NSString*)name andFileKey:(NSString*)key andStatue:(Success)Statue andNetOFF:(NetOFF)NetOff;

@end

