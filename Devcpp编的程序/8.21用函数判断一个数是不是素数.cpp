#include<stdio.h>
//������ֻ�������Լ���1���� 
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
		 printf("����������\n");
	    }
	  else
	     printf("��������\n");
	}
	return 0;
}
