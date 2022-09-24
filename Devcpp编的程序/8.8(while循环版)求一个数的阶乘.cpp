#include<stdio.h>
int main(){
    int i= 1;
    int n= 0;
    int cheng= 1;
    scanf("%d",&n);
    while(i<= n){
    	cheng=cheng*i;
    	i++;
	}
	printf("%d",cheng); 
	return 0;
}
