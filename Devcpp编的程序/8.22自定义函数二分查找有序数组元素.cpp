#include<stdio.h>
int zdl(int arr[],int x,int sl){//���鴫��Ҫ������[]��������д��С ,��Ϊ����ȥ��ֻ��������Ԫ�� 
	int left = 0;               //���鴫�Σ�ʵ���ϴ��ݵĲ������鱾�� 
	int right = sl-1;           //���������һ��Ԫ�صĵ�ַ(���������ǵ�ַ) 
	while(left <= right)           //int arr[]�͵ȼ���int* arr; 
	{
	    int mid = (left + right) / 2;
	    if(arr[mid] > x){
	    	right = mid-1;//��mid+1����Ϥ�ö��ַ������������� 
		}
	    else if(arr[mid] < x){
	    	left = mid + 1;
		}
		else if(arr[mid] == x){
		    return mid;//return�Ժ����ͷ����ˣ�ֱ���������ˣ�������break 
 		}             //�ҵ��Ժ󷵻��±� 
    }
    return -1;//ֱ��ɸѡ��ֻ��һ��Ԫ��Ҳû�ҵ�����˵���Ҳ����� 
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int a = 0;
	scanf("%d",&a);
	int s = sizeof(arr)/sizeof(arr[0]);//��һ�����Զ��庯�������������� 
	int ret = zdl(arr,a,s);            //��Ϊ���鴫��ֻ�ܴ���ȥ��Ԫ�أ�һ���С��1�� 
	if(ret == -1){
		printf("û�ҵ�\n");
	}
	if(ret >= 0){
		printf("�ҵ��ˣ��±�Ϊ%d\n",ret);
	}
	return 0;
}
