#include<stdio.h>
void swap1(int x,int y){//用不着返回值，就是交换一下值  
     int z = 0;//用swap1(a，b)这是传值调用 
	 z = x;//形参是实参的临时拷贝，只是把值拷过去了
	      //所以改变形参不能改变实参 
	 x = y;
	 y = z; 
}
void swap2(int* pa,int* pb){//实际上是int* pa=&a 
	int z = 0;
	z = *pa;//*(星号)：1.int*  定义指针变量
	                // 2.*解引用操作，代表指针指向的变量的值 
	*pa = *pb; 
	*pb = z;
}
int main(){//这个叫传址调用，使函数 
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n",a,b);
	swap2(&a,&b);//看第九行就知道为什么取地址了 
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
