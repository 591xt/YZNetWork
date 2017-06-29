

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


typedef void(^Success)(NSDictionary* response);
typedef void(^Failuer)(NSError *error);
typedef void(^Statue)(NSString* statue);
typedef void(^NetOFF)();

@interface YZNet : NSObject


+(instancetype)YZ;

-(void)url:(NSString*)url withData:(NSDictionary*)dic withSucess:(Success)sucess withFalie:(Failuer)falie andNetOFF:(NetOFF)NetOff;

+(void)upload:(NSString*)url andParameters:(NSDictionary*)parameters andData:(NSArray*)imgArray andImageName:(NSArray*)nameArray andKey:(NSString*)key andStatue:(Statue)Statue;

@end

