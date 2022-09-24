#include<stdio.h>
//素数是只能整除自己和1的数 
int pd(int x){
	int i = 0;
	for(i = 2;i < x;i++){
		if(x % i == 0){
			return 1;
			break;
		}
	}
	    if(i == x){
			return 2;
		}
}
int main(){
	int i = 0; 
	int a = 0;
	while(1){
	  scanf("%d",&a);
	  pd(a);
	  if(pd(a) == 1){
		 printf("它不是素数\n");
	    }
	  else
	     printf("它是素数\n");
	}
	return 0;
}
