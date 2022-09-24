#include<stdio.h>
int main(){
	int left= 0;
	int k= 67;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sl= (sizeof(arr))/sizeof(arr[0]);
	int right= sl-1;
	
	while(left <= right){
	  int mid= (left + right) / 2;//mid是要随着循环更新的，要放在循环内 
	  if(arr[mid] < k)//要用实数与实数比较，下标和实数比较无意义 
	     left = mid + 1;
	  else if(arr[mid] > k)
	     right = mid - 1;   
	  else{
	  
	    printf("找到了，下标为：%d\n",mid);  
	    break;}//break这儿没括号的话会直接停止，应该放到else里面 
}
    if(left > right) 
        printf("未找到\n");
	 
	return 0;
}
