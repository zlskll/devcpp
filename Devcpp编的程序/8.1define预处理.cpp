#include<stdio.h>
int main(){
	//define����ĳ��� 
	#define MAX 1000;//MAX��߲��ü�= 
	printf("%d",MAX);
	//define����ĺ� 
	#define ADD(x,y)x+y// 
	int sum=4*ADD(6,5);
	printf("%d\n",sum); 
	#define ADD2(a,b)a+b
	int sum2=ADD2(6,5);
	printf("%d\n",sum2);
	
	
}
