#include<stdio.h>
int main(){
	int i = 0;
	for(i = 0; i < 10; i++ ){
	    if(i = 5)//看清楚是一个等号！！！！ 
		  printf("%d",i);	
	}
	return 0;//最后结果是5555死循环 
} 
