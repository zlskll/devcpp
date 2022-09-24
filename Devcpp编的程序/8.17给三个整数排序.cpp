#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a < b){//a和b比较并排序 
		int tmp = a;
		a = b;
		b = tmp; 
	}
	if(a < c){//a和c比较并排序 
		int tmp = a;
		a = c;//换盒子数三步 
		c = tmp;
	}
	if(b < c){//b和c比较并排序 
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d",a,b,c);//a,b,c只是变量盒子，排序排的都是数的位置 
	return 0;
}
