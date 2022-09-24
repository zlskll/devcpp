#include<stdio.h>
int zdl(int arr[],int x,int sl){//数组传参要带括号[]，但不用写大小 ,因为传过去的只是数组首元素 
	int left = 0;               //数组传参，实际上传递的不是数组本身， 
	int right = sl-1;           //而是数组第一个元素的地址(数组名就是地址) 
	while(left <= right)           //int arr[]就等价于int* arr; 
	{
	    int mid = (left + right) / 2;
	    if(arr[mid] > x){
	    	right = mid-1;//是mid+1，熟悉好二分法再来哔哔赖赖 
		}
	    else if(arr[mid] < x){
	    	left = mid + 1;
		}
		else if(arr[mid] == x){
		    return mid;//return以后函数就返回了，直接往下走了，都不用break 
 		}             //找到以后返回下标 
    }
    return -1;//直到筛选到只有一个元素也没找到，就说明找不到了 
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int a = 0;
	scanf("%d",&a);
	int s = sizeof(arr)/sizeof(arr[0]);//这一步在自定义函数里是做不到的 
	int ret = zdl(arr,a,s);            //因为数组传参只能传过去首元素，一算大小成1了 
	if(ret == -1){
		printf("没找到\n");
	}
	if(ret >= 0){
		printf("找到了，下标为%d\n",ret);
	}
	return 0;
}
