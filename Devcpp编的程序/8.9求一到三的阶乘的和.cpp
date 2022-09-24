#include<stdio.h>
int main(){
	int n= 0;
	int jie= 1;
	int i= 0;
	int sum= 0;
	for(n= 1;n<= 3;n++){
	   //求n的阶乘（把jie更新成n的阶乘）：
	   jie= 1;//阶乘都是从1开始乘的，如果每次循环过后不初始化就会偏大 
	   for(i= 1;i<= n;i++){
		jie= jie*i;
        }	
		sum=sum+jie;	
	}
    

	printf("%d\n",sum);

    
    
    return 0;
}
/*int main(){
	int n= 0;
	int sum= 0;
	int jie= 1; 
    for(n= 1;n<= 3;n++){
	    jie= jie*n;
	    sum= sum+jie;
	}
	printf("%d",sum);
	
	
	return 0;
}*/

