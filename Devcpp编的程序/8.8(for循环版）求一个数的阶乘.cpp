#include<stdio.h>
int main(){
	int i= 0;
	int n= 0;
	int cheng= 1;
	 scanf("%d",&n);
	for(i= 1;i<= n;i++){
		cheng= cheng*i;
		//���ﲻ�ܼ�i++�ˣ���Ҫ��ѭ�����ڸı���� 
	}
	printf("%d",cheng);
	return 0;
}
