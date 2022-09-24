#include<stdio.h>
int main(){
	int a=10;
	int* pa=&a;
	*pa=32;
	printf("%d\n",a);
	printf("%d\n",*pa);//%p专门用来打印地址而不是打印指针 
	printf("%p\n",&a);//打印a的地址
	printf("%d\n",sizeof(*pa));
	printf("%d\n",sizeof(int*));//类型在后面加* 
    printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(long*));
	printf("%d\n",sizeof(long long*));
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(double*));
	
    return 0;
}
