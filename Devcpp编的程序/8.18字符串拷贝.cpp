#include<stdio.h>
#include<string.h>
//1.�ַ�������strcpy 
/*int main(){
	char arr1[20] = {0};
   	char arr2[] = "hello lyn";
	strcpy(arr1,arr2);
	printf("%s\n%s",arr1,arr2);
}*/
//2.����ڴ��memset 
/*int main(){
	char arr1[] = "hello lyn";
	memset(arr1,'x',5);
	printf("%s",arr1); 
	return 0;
	
}*/
//3.�����ڴ��memcpy
 int main(){
	char arr1[] = "hello lyn";
	char arr2[23] = "hi dyf"; 
	memcpy(arr2,arr1,8);
	printf("%s",arr2); 
	return 0;
}
//4.�ƶ��ڴ��memmove(����ʵ���ص�) ��ɶ�����ص������� 
/*int main (){ 
//�� num �ֽ�ֵ��Դָ���λ�ø��Ƶ�Ŀ��ָ����ڴ�顣
//���ƾ���ʹ���м仺����һ�����У��Ӷ�����Ŀ���Դ�ص���
  char str[] = "memmove can be very useful......";
            // str+15:"memmove can be *very useful*(11���ֽڵ�λ��)......";
            // str+20:"memmove can be very *useful......" 
  memmove (str+20,str+15,11);//str+15���ǰѹ�������ƶ�15�� 
  printf("%s",str);//��ȷ���Ӧ���� memmove can be very very useful
  return 0;
}*/





