

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


typedef void(^Success)(NSDictionary* response);
typedef void(^Failuer)(NSError *error);
typedef void(^Statue)(NSString* statue);
typedef void(^NetOFF)();

@interface YZNet : NSObject


+(instancetype)YZ;

-(void)isPost:(BOOL)isPost url:(NSString*)url withData:(NSDictionary*)dic withSucess:(Success)sucess withFalie:(Failuer)falie andNetOFF:(NetOFF)NetOff;
-(void)upload:(NSString*)url andParameters:(NSDictionary*)parameters andImage:(UIImage*)img andImageName:(NSString*)name andFileKey:(NSString*)key andStatue:(Success)Statue andNetOFF:(NetOFF)NetOff;

@end

