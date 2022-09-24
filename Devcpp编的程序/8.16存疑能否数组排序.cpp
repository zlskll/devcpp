#include<stdio.h>
int main(){
	int arr[3]={0};
	int n = 0;
	int i = 0; 
	for(n = 0; n< 3; n++){
		scanf("%d",&arr[n]);
	}
	
	for(i = 0;i < 3;i++){
		if(arr[i]<arr[i+1]){
			printf("%d",arr[i+1]);
		}
		else
		printf("%d",arr[i]);
	} 
	return 0;
} 
