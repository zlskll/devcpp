#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(){
	char arr1[] = "liyanna666666";//定义两个可供替换 
	char arr2[] = "#############";
	char arr3[] = "#############";//的字符串数组 
	int left = 0;
	int right = strlen(arr1) - 1;//计算长度找右顶点下标 
	while(left <= right ){
		arr2[left] = arr1[left];//左替换 
	    arr2[right] = arr1[right];//右替换 
	    printf("%s\n",arr2);//打印一次
		Sleep(500); //记得引头文件 
		system("cls");//清空屏幕的 
		left++;//为下一个循环做准备 
 		right--;
	}  
	while(left >= 0 && right <= strlen(arr1)-1){
    arr2[left] = arr3[right]; 
	arr2[right] = arr3[right];
	printf("%s\n",arr2);
	Sleep(500);
	system("cls");
	left--;
	right++;
	
	}printf("%s",arr1);
	return 0;
}
