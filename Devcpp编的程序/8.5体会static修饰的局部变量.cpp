#include<stdio.h>
int sum(int a){
	int c=0;
	static int b=4;
	c++;
	b+=3;
	return (a+b+c); 
}
int main(){
	int a=2;
	for(int i=0;i<5;i++){
	
	printf("%d\n",sum(a));
}
	return 0;
}


