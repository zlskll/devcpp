//ָ���Լ���ṹ���� 
#include<stdio.h>
struct Stu{
	char name[20];//��Ҫ�������� 
	int age;
	char id[20];
};
int main(){
	struct Stu s={"����",18,"25" };//�������������ַ�����Ҫ�á������ϣ��ַ��õ����ţ�//��λ�������ַ��� 
	printf("%s %d %s\n",s.name,s.age,s.id);//Ҫ��StuҲ����,���߼��� 
	struct Stu *ps=&s;//ָ��Ķ���ȡ���ڶ�������� 
	printf("%s %d %s\n",(*ps).name,(*ps).age,(*ps).id);
	struct Stu *pa=&s;
	printf("%s %d %s\n",ps->name,ps->age,ps->id);//��������������������������
	//Ϊɶ�����ָ�벻���Ǻţ�#�����ò���
	 
	
	
	return 0;
} 
