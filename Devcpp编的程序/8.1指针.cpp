#include<stdio.h>
int main(){
	int a=10;
	int* pa=&a;
	*pa=32;
	printf("%d\n",a);
	printf("%d\n",*pa);//%pר��������ӡ��ַ�����Ǵ�ӡָ�� 
	printf("%p\n",&a);//��ӡa�ĵ�ַ
	printf("%d\n",sizeof(*pa));
	printf("%d\n",sizeof(int*));//�����ں����* 
    printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(long*));
	printf("%d\n",sizeof(long long*));
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(double*));
	
    return 0;
}
