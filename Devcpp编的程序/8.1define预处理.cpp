#include<stdio.h>
int main(){
	//define定义的常量 
	#define MAX 1000;//MAX后边不用加= 
	printf("%d",MAX);
	//define定义的宏 
	#define ADD(x,y)x+y// 
	int sum=4*ADD(6,5);
	printf("%d\n",sum); 
	#define ADD2(a,b)a+b
	int sum2=ADD2(6,5);
	printf("%d\n",sum2);
	
	
}
