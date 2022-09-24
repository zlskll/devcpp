//求十个数的和 
#include<stdio.h>
int main(){
	int arr[10]={0};
	int i=0; 
	int sum=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}
