#include<stdio.h>
int main(){
	int left= 0;
	int k= 67;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sl= (sizeof(arr))/sizeof(arr[0]);
	int right= sl-1;
	
	while(left <= right){
	  int mid= (left + right) / 2;//mid��Ҫ����ѭ�����µģ�Ҫ����ѭ���� 
	  if(arr[mid] < k)//Ҫ��ʵ����ʵ���Ƚϣ��±��ʵ���Ƚ������� 
	     left = mid + 1;
	  else if(arr[mid] > k)
	     right = mid - 1;   
	  else{
	  
	    printf("�ҵ��ˣ��±�Ϊ��%d\n",mid);  
	    break;}//break���û���ŵĻ���ֱ��ֹͣ��Ӧ�÷ŵ�else���� 
}
    if(left > right) 
        printf("δ�ҵ�\n");
	 
	return 0;
}
