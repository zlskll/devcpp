#include<stdio.h>//打印要用的头文件 
#include<string.h>//用到strlen计算长度的函数时候要引头文件 
int len=strlen("abc");
enum Sex{
    	MALE=5,//赋初值 
    	FEMALE=7, //如果在这里赋初值的话，从FEMALE开始下面依次加一赋值 
    	SECRET=9 //而FEMALE上面的从0开始 
	}; //直接赋值也行 不赋值的话才默认依次加一 
int main(){ 
	char z='a';	
	char arr[]="abc";
	char arr2[]={'a','b','c'};
	printf("(are you ok??)\n");//发现Devc++不会三字母识别成】 
	printf("%c\n",z);
	printf("%s\n",arr);//打印的是arr不是arr【】 
	printf("%d\n",strlen("abc"));
	printf("%d\n",strlen(arr2));//Devc++确实都不往后看了 
    int num=10;
    num=20;
    printf("%d\n",num);//num现在是个变量，打出来是20 
	//2.const修饰的常变量
	//const int num2=10;
	//num2=20;
	//printf("%d",num2);
	//int n=10;
	//int arr[n]={0};
	//printf("%s",arr);n是变量，会报错
	
	//3.define定义的标识符常量
	#define max 10000;
	int n=max;
	printf("n=%d\n",n); 
	//4.枚举常量
    
	enum Sex s=MALE;
	printf("%d\n",s);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	printf("\a");//Devc++怎么没有蜂鸣 
	
	
	
	return 0;
}
