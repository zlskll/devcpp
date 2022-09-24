//求十个数的平均值（也适用于平均数非整数） 
#include<stdio.h>
int main(){
	float arr[10]={0};//输入的数据也要用float，不然输出的小数都是0.00 
	float sum=0;//sum下面要加上arr【i】所以一个频道用float 
	int i=0;//这里的i指的是下标序号，所以用int 
	for(i=0;i<10;i++){
		scanf("%f",&arr[i]);//arr【i】是浮点型用%f 
		sum=sum+arr[i];
	}
	float avg=sum/10;  
	printf("%.2f",avg);
	return 0;
}
