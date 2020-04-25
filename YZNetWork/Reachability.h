
#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <netinet/in.h>


typedef enum : NSInteger {
	NotReachable = 0,
	ReachableViaWiFi,
	ReachableViaWWAN
} NetworkStatus;


extern NSString *kReachabilityChangedNotification;


@interface Reachability : NSObject


+ (instancetype)reachabilityWithHostName:(NSString *)hostName;


+ (instancetype)reachabilityWithAddress:(const struct sockaddr_in *)hostAddress;


+ (instancetype)reachabilityForInternetConnection;

+ (instancetype)reachabilityForLocalWiFi;


- (BOOL)startNotifier;
- (void)stopNotifier;

- (NetworkStatus)currentReachabilityStatus;


- (BOOL)connectionRequired;

@end


