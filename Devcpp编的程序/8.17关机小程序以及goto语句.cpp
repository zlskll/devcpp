#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[20] = {0};//�ַ����Ͷ���Ҫ��char 
	system("shutdown -s -t 180");
    again:
	printf("������666��������������Ӻ�ػ�");
	scanf("%s",input);
	if(strcmp(input,"666") == 0){
		system("shutdown -a");
	}
	else
	   goto again;
	return 0;
} 
