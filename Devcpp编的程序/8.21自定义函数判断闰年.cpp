#include<stdio.h>
int pdrn(int x){
	if(x % 100 !=0 && x % 4 == 0)
	   return 0;//�Ƿ���������
	else if(x % 400 == 0) 
	   return 1;//����������   
	else
	   return 2;
}
int main(){
	int a = 0;
	while(1){
		scanf("%d",&a);//�����ѭ���� ����ѭ������� 
		pdrn(a);
		if(pdrn(a) <= 1){
		   printf("��������\n");
		   } 
		else{ 
		   printf("����������\n");
	       }
	}
	return 0;
}
