#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a < b){//a��b�Ƚϲ����� 
		int tmp = a;
		a = b;
		b = tmp; 
	}
	if(a < c){//a��c�Ƚϲ����� 
		int tmp = a;
		a = c;//������������ 
		c = tmp;
	}
	if(b < c){//b��c�Ƚϲ����� 
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d",a,b,c);//a,b,cֻ�Ǳ������ӣ������ŵĶ�������λ�� 
	return 0;
}
