#include<stdio.h>
#include<string.h>
//���ּ����С�����㳤�ȣ�����Ԫ������
int main(){
	//1.�����С 
	printf("%d\n",sizeof(char));//��С��λ���ֽ�
	printf("%d\n",sizeof(char*)); 
	//2.���㳤�� 
	char arr[]={1,3,5};
	printf("%d\n",strlen(arr));
	char arr2[]="abc";
	printf("%d\n",strlen(arr2));//��Ĭ�ϵ�\0��Ϊ�ַ����Ľ�����־ 
	char arr3[]={'a','b','c',};
	printf("%d\n",strlen(arr3));//��һ��Ӧ�������ֵ 
	//3.����Ԫ������
	int arr4[10];
	printf("%d\n",sizeof(arr4));
	printf("%d\n",sizeof(arr4[0]));
	printf("%d\n",sizeof(arr4)/sizeof(arr4[0]));//�����ǡ�/�� 
	return 0;
}
 
