#include<stdio.h>
#include<string.h>
int main(){
	char password[20] = {0};//要么初始化带上数组大小，要么不带大小带具体的数组 
	int i = 0;
	printf("请输入密码：\n");
	
	for(i = 0;i < 3; i++){
		scanf("%s",password);//数组输入不用加地址符号 
		if(strcmp(password,"123456") == 0)
		{
			printf("登陆成功\n"); 
			break;//登陆成功以后就跳出循环就行了 
		}
		else
		printf("密码输入错误，请重试\n"); 
	}
	if(i == 3)
	printf("三次密码输入错误，退出程序"); 
	return 0;
}
