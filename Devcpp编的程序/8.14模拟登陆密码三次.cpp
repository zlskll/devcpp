#include<stdio.h>
#include<string.h>
int main(){
	char password[20] = {0};//Ҫô��ʼ�����������С��Ҫô������С����������� 
	int i = 0;
	printf("���������룺\n");
	
	for(i = 0;i < 3; i++){
		scanf("%s",password);//�������벻�üӵ�ַ���� 
		if(strcmp(password,"123456") == 0)
		{
			printf("��½�ɹ�\n"); 
			break;//��½�ɹ��Ժ������ѭ�������� 
		}
		else
		printf("�����������������\n"); 
	}
	if(i == 3)
	printf("����������������˳�����"); 
	return 0;
}
