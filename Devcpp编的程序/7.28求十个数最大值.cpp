#include<stdio.h>
int main(){
	int arr[10]={0};
	int i=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
}
	int max=0;
	for(i=0;i<10;i++){
		if(arr[i]>max)
		max=arr[i];	}
	for(i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	printf("max=%d",max);
	return 0;
}
