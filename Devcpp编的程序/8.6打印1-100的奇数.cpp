#include<stdio.h>
/*1.int main(){
	int a= 1;
	int i= 0;
	for(i=0; i<100; i++){
		if(a%2== 1)//ע�������== ��=�Ǹ�ֵ 
		printf("%d\n",a);
		a++;
	}
	return 0;
}*/


//2.����������������� �е㷱���� �������Ż�
/*int main(){
	int i=1;
	for(;i<=100;i++){
		if(i%2==1 )
		printf("%d ",i);
	}
	return 0;
} */
//3.���������ֻͼ���
int main(){
	int i=1;
	for(;i<=100;i+=2){
		printf("%d ",i);
	}
}


 
 
