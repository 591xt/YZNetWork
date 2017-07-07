



typedef void(^NetON)();
typedef void(^NetOFF)();


#import <Foundation/Foundation.h>

@interface YZNetState : NSObject

@property(nonatomic)BOOL Net;//当前的网络状态

+(instancetype)NET;
+(void)NetON:(NetON)netOn NetOFF:(NetOFF)netOff;


@end
