#include<stdio.h>
#include<string.h>
//区分计算大小，计算长度，计算元素数量
int main(){
	//1.计算大小 
	printf("%d\n",sizeof(char));//大小单位是字节
	printf("%d\n",sizeof(char*)); 
	//2.计算长度 
	char arr[]={1,3,5};
	printf("%d\n",strlen(arr));
	char arr2[]="abc";
	printf("%d\n",strlen(arr2));//有默认的\0作为字符串的结束标志 
	char arr3[]={'a','b','c',};
	printf("%d\n",strlen(arr3));//这一步应该是随机值 
	//3.计算元素数量
	int arr4[10];
	printf("%d\n",sizeof(arr4));
	printf("%d\n",sizeof(arr4[0]));
	printf("%d\n",sizeof(arr4)/sizeof(arr4[0]));//除号是“/” 
	return 0;
}
 
