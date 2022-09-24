#include<stdio.h>
//函数定义是独立存在，没有嵌套定义 
//但是可以嵌套调用
//链式访问：一个函数的返回值作为另一个函数的参数
//最简单的链式访问：printf("%d\n",strlen("abc"));
                  //strlen()的返回值变成了printf()的参数
//printf()的返回值是打印字符的个数
int main(){
	printf("%d\n",printf("%d",printf("%d",43)));
    int a = 10;	
	int b = 20;
	int Add(int,int);//函数的声明:告知的，只是告知你有， 
	printf("%d\n",Add(a,b));//没说真的有没有，
	return 0;//先声明后使用 
}  //函数的声明一般要放在头文件中，定义在源文件中， 
   //在别的源文件中想直接用的话，引头文件就行了#include“add.h”                                                                                       
int Add(int x,int y){//函数的定义:函数的创建                         
	return x+y;
}				   
