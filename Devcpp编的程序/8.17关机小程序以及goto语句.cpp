#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[20] = {0};//字符类型定义要用char 
	system("shutdown -s -t 180");
    again:
	printf("请输入666，否则电脑三分钟后关机");
	scanf("%s",input);
	if(strcmp(input,"666") == 0){
		system("shutdown -a");
	}
	else
	   goto again;
	return 0;
} 
