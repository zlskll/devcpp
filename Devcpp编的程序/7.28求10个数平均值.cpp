//��ʮ������ƽ��ֵ��Ҳ������ƽ������������ 
#include<stdio.h>
int main(){
	float arr[10]={0};//���������ҲҪ��float����Ȼ�����С������0.00 
	float sum=0;//sum����Ҫ����arr��i������һ��Ƶ����float 
	int i=0;//�����iָ�����±���ţ�������int 
	for(i=0;i<10;i++){
		scanf("%f",&arr[i]);//arr��i���Ǹ�������%f 
		sum=sum+arr[i];
	}
	float avg=sum/10;  
	printf("%.2f",avg);
	return 0;
}
