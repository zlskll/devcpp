#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(){
	char arr1[] = "liyanna666666";//���������ɹ��滻 
	char arr2[] = "#############";
	char arr3[] = "#############";//���ַ������� 
	int left = 0;
	int right = strlen(arr1) - 1;//���㳤�����Ҷ����±� 
	while(left <= right ){
		arr2[left] = arr1[left];//���滻 
	    arr2[right] = arr1[right];//���滻 
	    printf("%s\n",arr2);//��ӡһ��
		Sleep(500); //�ǵ���ͷ�ļ� 
		system("cls");//�����Ļ�� 
		left++;//Ϊ��һ��ѭ����׼�� 
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
