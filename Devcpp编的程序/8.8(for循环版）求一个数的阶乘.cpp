#include<stdio.h>
int main(){
	int i= 0;
	int n= 0;
	int cheng= 1;
	 scanf("%d",&n);
	for(i= 1;i<= n;i++){
		cheng= cheng*i;
		//这里不能加i++了，不要在循环体内改变变量 
	}
	printf("%d",cheng);
	return 0;
}
