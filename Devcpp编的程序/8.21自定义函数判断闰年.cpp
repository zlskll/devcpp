#include<stdio.h>
int pdrn(int x){
	if(x % 100 !=0 && x % 4 == 0)
	   return 0;//是非世纪闰年
	else if(x % 400 == 0) 
	   return 1;//是世纪闰年   
	else
	   return 2;
}
int main(){
	int a = 0;
	while(1){
		scanf("%d",&a);//输入放循环里 就能循环多次了 
		pdrn(a);
		if(pdrn(a) <= 1){
		   printf("它是闰年\n");
		   } 
		else{ 
		   printf("它不是闰年\n");
	       }
	}
	return 0;
}
