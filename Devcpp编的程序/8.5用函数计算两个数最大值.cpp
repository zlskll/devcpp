#include<stdio.h>
int Max(int x,int y){//一般不建议函数名写成全大写（？？？？？？） 
	if(x>y)
	return x;
	else
	return y;
	
}//函数的实现要放在主函数外面 因为函数都是同等地位的 
int main(){
	int a,b;
	scanf("%d %d",&a,&b);//前后用不同字母有利于增加对函数理解 
	printf("%d",Max(a,b));
	return 0;//别忘了return 0； 
	
}


