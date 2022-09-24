#include<stdio.h>
/*1.int main(){
	int a= 1;
	int i= 0;
	for(i=0; i<100; i++){
		if(a%2== 1)//注意等于是== ，=是赋值 
		printf("%d\n",a);
		a++;
	}
	return 0;
}*/


//2.上面这个用了俩变量 有点繁琐了 下面是优化
/*int main(){
	int i=1;
	for(;i<=100;i++){
		if(i%2==1 )
		printf("%d ",i);
	}
	return 0;
} */
//3.或者这个，只图结果
int main(){
	int i=1;
	for(;i<=100;i+=2){
		printf("%d ",i);
	}
}


 
 
