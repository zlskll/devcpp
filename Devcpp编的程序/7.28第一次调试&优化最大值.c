#include<stdio.h>
int main(){
	int arr[10]={0};
	int i=0;
	int max=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(max<arr[i])
		max=arr[i];
}
	printf("max=%d",max);
	return 0;
}
