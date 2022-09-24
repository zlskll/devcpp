#include<stdio.h>
//1.for循环常规思路 
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min = 0;
	if(a > b)
       min = b;
	if(a <= b)
	   min = a;
	for(min;min > 0; min-- ){
		if(a % min == 0 && b % min == 0){
			printf("最大公约数是：%d",min);
			break;
		}
	}     
	return 0;
}*/
//2.下面是三目操作符版 
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min = a < b ? a : b;//条件操作符（三目操作符） 
	for(;min > 0; min-- ){
		if(a % min == 0 && b % min == 0){
			printf("最大公约数是：%d",min);
			break;
		}
	}     
	return 0;
} */
//3.while循环版(如果脑子瓦特了非要新开一个变量i) 
/*int main(){
	int i = 0;
	int a,b;
	scanf("%d%d",&a,&b);
	int min = a < b ? a : b;//条件操作符（三目操作符） 
	i = min;//不能放到循环里，否则会总是被更新死循环了 
	while(1){
		if(a % i == 0 && b % i == 0){
			printf("最大公约数是：%d",i);
			break;
		}
		i--;
	}
	return 0;
}*/
//4.辗转相除法
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(1){
		int y = a % b;
		a = b;
		b = y;
		if(a % b == 0){
			printf("最大公约数为：%d",b);
			break;
		}
	}
	return 0;
}*/
//5.辗转相除法优化
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int y = 0;
	while(y = a % b){
		a = b;
		b = y;
	}
	printf("最大公约数为%d",b);
	return 0;
} */
//6.变式：找两个数的最小公倍数
/*int main(){
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	int max = a > b ? a : b;
	for(;;max++){
		if(max % a == 0 && max % b == 0){
		
		   printf("%d",max);
		   break;
	}
	}
	return 0;
} */
//7.冷知识：最小公倍数 = (m*n)/最大公约数 
