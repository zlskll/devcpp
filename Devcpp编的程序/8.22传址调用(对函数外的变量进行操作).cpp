#include<stdio.h>
//想用函数对函数外的变量进行操作，想到了传址调用 
void Add(int* p){
	 (*p)++;
}

int main(){
	int num = 0;
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n",num);
	return 0;
} 
