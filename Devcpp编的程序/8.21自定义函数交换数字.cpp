#include<stdio.h>
void swap1(int x,int y){//�ò��ŷ���ֵ�����ǽ���һ��ֵ  
     int z = 0;//��swap1(a��b)���Ǵ�ֵ���� 
	 z = x;//�β���ʵ�ε���ʱ������ֻ�ǰ�ֵ����ȥ��
	      //���Ըı��ββ��ܸı�ʵ�� 
	 x = y;
	 y = z; 
}
void swap2(int* pa,int* pb){//ʵ������int* pa=&a 
	int z = 0;
	z = *pa;//*(�Ǻ�)��1.int*  ����ָ�����
	                // 2.*�����ò���������ָ��ָ��ı�����ֵ 
	*pa = *pb; 
	*pb = z;
}
int main(){//����д�ַ���ã�ʹ���� 
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n",a,b);
	swap2(&a,&b);//���ھ��о�֪��Ϊʲôȡ��ַ�� 
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
