#include<stdio.h>//��ӡҪ�õ�ͷ�ļ� 
#include<string.h>//�õ�strlen���㳤�ȵĺ���ʱ��Ҫ��ͷ�ļ� 
int len=strlen("abc");
enum Sex{
    	MALE=5,//����ֵ 
    	FEMALE=7, //��������︳��ֵ�Ļ�����FEMALE��ʼ�������μ�һ��ֵ 
    	SECRET=9 //��FEMALE����Ĵ�0��ʼ 
	}; //ֱ�Ӹ�ֵҲ�� ����ֵ�Ļ���Ĭ�����μ�һ 
int main(){ 
	char z='a';	
	char arr[]="abc";
	char arr2[]={'a','b','c'};
	printf("(are you ok??)\n");//����Devc++��������ĸʶ��ɡ� 
	printf("%c\n",z);
	printf("%s\n",arr);//��ӡ����arr����arr���� 
	printf("%d\n",strlen("abc"));
	printf("%d\n",strlen(arr2));//Devc++ȷʵ���������� 
    int num=10;
    num=20;
    printf("%d\n",num);//num�����Ǹ��������������20 
	//2.const���εĳ�����
	//const int num2=10;
	//num2=20;
	//printf("%d",num2);
	//int n=10;
	//int arr[n]={0};
	//printf("%s",arr);n�Ǳ������ᱨ��
	
	//3.define����ı�ʶ������
	#define max 10000;
	int n=max;
	printf("n=%d\n",n); 
	//4.ö�ٳ���
    
	enum Sex s=MALE;
	printf("%d\n",s);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	printf("\a");//Devc++��ôû�з��� 
	
	
	
	return 0;
}
