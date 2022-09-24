#include<stdio.h>
#include<string.h>
//1.字符串拷贝strcpy 
/*int main(){
	char arr1[20] = {0};
   	char arr2[] = "hello lyn";
	strcpy(arr1,arr2);
	printf("%s\n%s",arr1,arr2);
}*/
//2.填充内存块memset 
/*int main(){
	char arr1[] = "hello lyn";
	memset(arr1,'x',5);
	printf("%s",arr1); 
	return 0;
	
}*/
//3.复制内存块memcpy
 int main(){
	char arr1[] = "hello lyn";
	char arr2[23] = "hi dyf"; 
	memcpy(arr2,arr1,8);
	printf("%s",arr2); 
	return 0;
}
//4.移动内存块memmove(可以实现重叠) ？啥样算重叠！！！ 
/*int main (){ 
//将 num 字节值从源指向的位置复制到目标指向的内存块。
//复制就像使用中间缓冲区一样进行，从而允许目标和源重叠。
  char str[] = "memmove can be very useful......";
            // str+15:"memmove can be *very useful*(11个字节的位置)......";
            // str+20:"memmove can be very *useful......" 
  memmove (str+20,str+15,11);//str+15就是把光标往后移动15个 
  printf("%s",str);//正确结果应该是 memmove can be very very useful
  return 0;
}*/





