
# YZNetWork     
 
# 基于原生封装的轻量级网络请求      

# 一行代码即可实现网络请求        

### 使用方法：     

#### 1.下载该静态库并导入      

<https://github.com/YouZhiZheShiJingCheng/YZNetWork>

导入记得勾选拷贝，如图：

![Alt text](http://118.24.89.63:8080/1.png)

![Alt text](http://118.24.89.63:8080/6.png)

### 2.配置工程      

TARGETS->Build Settings->Other Linker Flags 添加一个  -ObjC

#### 3.开始应用         

导入头文件

	#import "YZNetWork.h"

网络请求

	[[YZNet YZ] isPost:YES url:@"" withData:@{@"参":@"数"} withSucess:^(NSDictionary *response) {
        
        //请求成功
        
    } withFalie:^(NSError *error) {
        
        //请求失败
        
    } andNetOFF:^{
        
        //没有网络
        
    }];
    
第一个参数代表是否是POST，是的话传YES，不是传NO

第二个参数是网络请求的参数，是一个字典，里面有对应的参数和参数对应的值

第三个就是请求成功的结果，返回的是一个字典

第四个就是请求失败返回的错误信息

最后一个是没有网络的情况


# 记得让App允许访问HTTP

