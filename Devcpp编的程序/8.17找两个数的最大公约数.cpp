#include<stdio.h>
//1.forѭ������˼· 
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min = 0;
	if(a > b)
       min = b;
	if(a <= b)
	   min = a;
	for(min;min > 0; min-- ){
		if(a % min == 0 && b % min == 0){
			printf("���Լ���ǣ�%d",min);
			break;
		}
	}     
	return 0;
}*/
//2.��������Ŀ�������� 
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min = a < b ? a : b;//��������������Ŀ�������� 
	for(;min > 0; min-- ){
		if(a % min == 0 && b % min == 0){
			printf("���Լ���ǣ�%d",min);
			break;
		}
	}     
	return 0;
} */
//3.whileѭ����(������������˷�Ҫ�¿�һ������i) 
/*int main(){
	int i = 0;
	int a,b;
	scanf("%d%d",&a,&b);
	int min = a < b ? a : b;//��������������Ŀ�������� 
	i = min;//���ܷŵ�ѭ�����������Ǳ�������ѭ���� 
	while(1){
		if(a % i == 0 && b % i == 0){
			printf("���Լ���ǣ�%d",i);
			break;
		}
		i--;
	}
	return 0;
}*/
//4.շת�����
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(1){
		int y = a % b;
		a = b;
		b = y;
		if(a % b == 0){
			printf("���Լ��Ϊ��%d",b);
			break;
		}
	}
	return 0;
}*/
//5.շת������Ż�
/*int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int y = 0;
	while(y = a % b){
		a = b;
		b = y;
	}
	printf("���Լ��Ϊ%d",b);
	return 0;
} */
//6.��ʽ��������������С������
/*int main(){
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	int max = a > b ? a : b;
	for(;;max++){
		if(max % a == 0 && max % b == 0){
		
		   printf("%d",max);
		   break;
	}
	}
	return 0;
} */
//7.��֪ʶ����С������ = (m*n)/���Լ�� 
