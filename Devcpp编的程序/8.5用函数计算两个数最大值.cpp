#include<stdio.h>
int Max(int x,int y){//һ�㲻���麯����д��ȫ��д���������������� 
	if(x>y)
	return x;
	else
	return y;
	
}//������ʵ��Ҫ�������������� ��Ϊ��������ͬ�ȵ�λ�� 
int main(){
	int a,b;
	scanf("%d %d",&a,&b);//ǰ���ò�ͬ��ĸ���������ӶԺ������ 
	printf("%d",Max(a,b));
	return 0;//������return 0�� 
	
}


