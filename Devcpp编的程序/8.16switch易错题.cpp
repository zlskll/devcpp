#include<stdio.h>
int func(int a){
	int b;
	switch(a){
		default : b = 9;
		case 1:b = 30;//switchû��break��Ҫ����ȥ�� 
		case 2:b = 20;
		case 3:b = 16;
		
	}
	return b;
} 
int main(){
	printf("%d",func(10));
} 
